typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __SecTask {
} // Error Processing Struct Fields

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct ? {
    int field0;
    void field1;
    id field2;
    NSUInteger field3;
    unsigned char field4;
    NSUInteger field5;
    void field6;
    unsigned char field7;
    char * field8;
    _moFactoryClassFlags field9;
} ?;

typedef struct __libcpp_refstring {
    char * field0;
} __libcpp_refstring;

typedef struct error_category {
} // Error Processing Struct Fields

typedef struct error_code {
    int field0;
    error_category field1;
} error_code;

typedef struct system_error {
    unk field0;
    __libcpp_refstring field1;
    error_code field2;
} system_error;

typedef struct exception {
    unk field0;
} exception;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

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

