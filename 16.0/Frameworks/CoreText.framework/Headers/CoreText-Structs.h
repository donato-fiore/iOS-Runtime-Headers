typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSInteger field0;
    NSInteger field1;
} ?;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct GlyphStackEntry {
    unsigned short field0;
    CGSize field1;
    unsigned int field2;
    NSInteger field3;
    NSInteger field4;
    CGPoint field5;
} GlyphStackEntry;

typedef struct GlyphStack {
    NSInteger field0;
    NSInteger field1;
    GlyphStackEntry field2;
} GlyphStack;

typedef struct LangSysTable {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<const unsigned int *, std::__cxx_atomic_base_impl<const unsigned int *>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<const unsigned int *, std::__cxx_atomic_base_impl<const unsigned int *>>;

typedef struct atomic<const unsigned int *> {
    __cxx_atomic_impl<const unsigned int *, std::__cxx_atomic_base_impl<const unsigned int *>> __a_;
} atomic<const unsigned int *>;

typedef struct GCommonCache {
    LangSysTable fLastLangSysTable;
    atomic<const unsigned int *> fDynamicClassTable;
} GCommonCache;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct TUnfairLock {
    os_unfair_lock_s fLock;
} TUnfairLock;

typedef struct TTraitsValues {
    unsigned int field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} TTraitsValues;

typedef struct __CTGlyphStorage {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<const __CFArray *, std::__cxx_atomic_base_impl<const __CFArray *>> {
    uint8_t __a_value;
    __CFArray field1;
} __cxx_atomic_impl<const __CFArray *, std::__cxx_atomic_base_impl<const __CFArray *>>;

typedef struct atomic<const __CFArray *> {
    __cxx_atomic_impl<const __CFArray *, std::__cxx_atomic_base_impl<const __CFArray *>> __a_;
} atomic<const __CFArray *>;

typedef struct TCFRef<const __CFArray *> {
    atomic<const __CFArray *> fRef;
} TCFRef<const __CFArray *>;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<const __CFSet *, std::__cxx_atomic_base_impl<const __CFSet *>> {
    uint8_t __a_value;
    __CFSet field1;
} __cxx_atomic_impl<const __CFSet *, std::__cxx_atomic_base_impl<const __CFSet *>>;

typedef struct atomic<const __CFSet *> {
    __cxx_atomic_impl<const __CFSet *, std::__cxx_atomic_base_impl<const __CFSet *>> __a_;
} atomic<const __CFSet *>;

typedef struct TCFRef<const __CFSet *> {
    atomic<const __CFSet *> fRef;
} TCFRef<const __CFSet *>;

