typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __compressed_pair<void **, std::allocator<void *>> {
    void field0;
} __compressed_pair<void **, std::allocator<void *>>;

typedef struct vector<void *, std::allocator<void *>> {
    void field0;
    void field1;
    __compressed_pair<void **, std::allocator<void *>> field2;
} vector<void *, std::allocator<void *>>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

typedef struct ? {
    unsigned char field0;
} ?;

typedef struct __short {
    char field0;
    ? field1;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void field0;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, int>, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>, std::allocator<std::__value_type<int, int>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, int>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>> field2;
} __tree<std::__value_type<int, int>, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>, std::allocator<std::__value_type<int, int>>>;

typedef struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>> {
    __tree<std::__value_type<int, int>, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>, true>, std::allocator<std::__value_type<int, int>>> field0;
} map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>>;

