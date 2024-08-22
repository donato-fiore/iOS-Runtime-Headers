typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> field2;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void field0;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, turi::neural_net::shared_float_array>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, turi::neural_net::shared_float_array>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, turi::neural_net::shared_float_array>, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, turi::neural_net::shared_float_array>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, turi::neural_net::shared_float_array>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>> field2;
} __tree<std::__value_type<std::string, turi::neural_net::shared_float_array>, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, turi::neural_net::shared_float_array>>>;

typedef struct map<std::string, turi::neural_net::shared_float_array, std::less<std::string>, std::allocator<std::pair<const std::string, turi::neural_net::shared_float_array>>> {
    __tree<std::__value_type<std::string, turi::neural_net::shared_float_array>, std::__map_value_compare<std::string, std::__value_type<std::string, turi::neural_net::shared_float_array>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, turi::neural_net::shared_float_array>>> field0;
} map<std::string, turi::neural_net::shared_float_array, std::less<std::string>, std::allocator<std::pair<const std::string, turi::neural_net::shared_float_array>>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct OptimizerOptions {
    BOOL useSGD;
    float learningRate;
    float gradientClipping;
    float weightDecay;
    float sgdMomentum;
    float adamBeta1;
    float adamBeta2;
    float adamEpsilon;
} OptimizerOptions;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct __short {
    char __data_;
    ? ;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct Config {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
} Config;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

