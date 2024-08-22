typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __long {
    char * field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    char field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
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

typedef struct path {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
} path;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> field2;
} __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>>;

typedef struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> field0;
} map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct TrialParameters {
    path field0;
    map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> field1;
} TrialParameters;

typedef struct optional<LM::TrialParameters> {
    unk field0;
    char field1;
    TrialParameters field2;
    BOOL field3;
} optional<LM::TrialParameters>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::optional<LM::TrialParameters>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::optional<LM::TrialParameters>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::optional<LM::TrialParameters>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::optional<LM::TrialParameters>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::optional<LM::TrialParameters>>>>;

typedef struct map<std::string, std::optional<LM::TrialParameters>, std::less<std::string>, std::allocator<std::pair<const std::string, std::optional<LM::TrialParameters>>>> {
    __tree<std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::optional<LM::TrialParameters>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::optional<LM::TrialParameters>>>> __tree_;
} map<std::string, std::optional<LM::TrialParameters>, std::less<std::string>, std::allocator<std::pair<const std::string, std::optional<LM::TrialParameters>>>>;

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<void (const std::string &, const std::optional<LM::TrialParameters> &)> {
    type field0;
    void field1;
} __value_func<void (const std::string &, const std::optional<LM::TrialParameters> &)>;

typedef struct function<void (const std::string &, const std::optional<LM::TrialParameters> &)> {
    __value_func<void (const std::string &, const std::optional<LM::TrialParameters> &)> field0;
} function<void (const std::string &, const std::optional<LM::TrialParameters> &)>;

