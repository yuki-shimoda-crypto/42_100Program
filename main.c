// #include "libft/libft.h"
// #include <readline/history.h>
// #include <readline/readline.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*line;
// 	char	**tmp;

// 	line = NULL;
// 	while (1)
// 	{
// 		line = readline("> ");
// 		if (strlen(line) == 0 || *line == EOF)
// 		{
// 			free(line);
// 			break ;
// 		}
// 		tmp = ft_split(line, ' ');
// 		while (1)
// 		{
// 			if (*tmp == NULL)
// 				break ;
// 			printf("input='%s'\n", *tmp);
// 			tmp++;
// 		}
// 		add_history(line);
// 		free(line);
// 	}
// 	printf("exit\n");
// 	return (0);
// }

#include "minishell.h"

int	main(void)
{
	char *line;
	char **tmp;

    line = NULL;
	while (1)
	{
		line = readline("> ");
		// if (line == NULL || strlen(line) == 0)
		if (strlen(line) == 0 || *line == EOF)
		{
			free(line);
			break ;
		}
        tmp = ft_split(line, ' ');
        while (1)
        {
            if (*tmp == NULL)
                break;
            printf("%s\n", *tmp);
            tmp++;
        }
		// printf("%s\n", line);
		add_history(line);
		free(line);
	}
	return (0);
}