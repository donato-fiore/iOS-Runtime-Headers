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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct dispatch_object_s {
} // Error Processing Struct Fields

typedef struct object {
    dispatch_object_s fObj;
} object;

typedef struct queue {
    object fObj;
} queue;

typedef struct os_log_s {
} // Error Processing Struct Fields

typedef struct OSSharedRef<os_log_s> {
    os_log_s fRef;
} OSSharedRef<os_log_s>;

typedef struct OsLogContext {
    char * domain;
    OSSharedRef<os_log_s> handle;
} OsLogContext;

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<void ()> {
    type field0;
    void field1;
} __value_func<void ()>;

typedef struct function<void ()> {
    __value_func<void ()> field0;
} function<void ()>;

