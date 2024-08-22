typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct Document_DocObject {
} // Error Processing Struct Fields

typedef struct vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> {
} // Error Processing Struct Fields

typedef struct TopoID {
    id field0;
    unsigned int field1;
} TopoID;

typedef struct TopoIDRange {
    TopoID field0;
    unsigned int field1;
} TopoIDRange;

typedef struct TopoSubstring {
} // Error Processing Struct Fields

typedef struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> {
    void __value_;
} __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>>;

typedef struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> __end_cap_;
} vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>>;

