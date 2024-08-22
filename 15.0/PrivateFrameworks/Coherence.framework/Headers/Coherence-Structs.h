typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TopoReplica {
    id uuid;
    unsigned int NSUUID;
} TopoReplica;

typedef struct TopoID {
    TopoReplica replica;
    unsigned int clock;
} TopoID;

typedef struct TopoIDRange {
    TopoID field0;
    unsigned int field1;
} TopoIDRange;

typedef struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> {
    void __value_;
} __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>>;

typedef struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> __end_cap_;
} vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>>;

typedef struct TopoSubstring {
} // Error Processing Struct Fields

typedef struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> {
} // Error Processing Struct Fields

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

