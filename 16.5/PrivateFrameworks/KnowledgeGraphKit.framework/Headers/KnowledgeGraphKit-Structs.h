typedef struct _NSZone {
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

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct Statement {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<degas::Statement> {
    Statement field0;
    __shared_weak_count field1;
} shared_ptr<degas::Statement>;

typedef struct AttributeValueCursor {
    shared_ptr<degas::Statement> field0;
} AttributeValueCursor;

typedef struct Predicate {
} // Error Processing Struct Fields

typedef struct shared_ptr<degas::Predicate> {
} // Error Processing Struct Fields

typedef struct NodeCursor {
    shared_ptr<degas::Statement> field0;
} NodeCursor;

typedef struct EdgeCursor {
    shared_ptr<degas::Statement> field0;
} EdgeCursor;

typedef struct BitsetPtr {
} // Error Processing Struct Fields

typedef struct vector<degas::BitsetPtr, std::allocator<degas::BitsetPtr>> {
} // Error Processing Struct Fields

typedef struct Bitmap {
} // Error Processing Struct Fields

typedef struct KGElementIdentifierSetIndex {
    NSUInteger field0;
    NSInteger field1;
} KGElementIdentifierSetIndex;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

