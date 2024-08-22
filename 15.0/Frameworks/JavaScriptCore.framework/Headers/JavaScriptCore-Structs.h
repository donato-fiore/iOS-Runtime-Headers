typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct RetainPtr<JSVirtualMachine> {
    void m_ptr;
} RetainPtr<JSVirtualMachine>;

typedef struct JSValue {
    char u;
    CGFloat asInt64;
    CGFloat ptr;
    long asBits;
    short field4;
    char field5;
    int field6;
    NSInteger field7;
    JSCell field8;
    ? field9;
} JSValue;

typedef struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> {
    JSValue m_slot;
} Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No>;

typedef struct WeakObjCPtr<id<JSModuleLoaderDelegate>> {
    id m_weakReference;
} WeakObjCPtr<id<JSModuleLoaderDelegate>>;

typedef struct WeakImpl {
} // Error Processing Struct Fields

typedef struct Weak<JSC::JSGlobalObject> {
    WeakImpl m_impl;
} Weak<JSC::JSGlobalObject>;

typedef struct JSLock {
} // Error Processing Struct Fields

typedef struct RefPtr<JSC::JSLock, WTF::RawPtrTraits<JSC::JSLock>, WTF::DefaultRefDerefTraits<JSC::JSLock>> {
    JSLock m_ptr;
} RefPtr<JSC::JSLock, WTF::RawPtrTraits<JSC::JSLock>, WTF::DefaultRefDerefTraits<JSC::JSLock>>;

typedef struct JSCell {
} // Error Processing Struct Fields

typedef struct ? {
    int payload;
    int tag;
} ?;

typedef struct Weak<JSC::JSObject> {
    WeakImpl m_impl;
} Weak<JSC::JSObject>;

typedef struct Weak<JSC::JSString> {
    WeakImpl m_impl;
} Weak<JSC::JSString>;

typedef struct JSWeakValue {
    int m_tag;
    long m_value;
    int primitive;
    JSValue object;
    Weak<JSC::JSObject> string;
    Weak<JSC::JSString> field5;
} JSWeakValue;

typedef struct RetainPtr<NSMapTable> {
    void m_ptr;
} RetainPtr<NSMapTable>;

typedef struct CachedBytecode {
} // Error Processing Struct Fields

typedef struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> {
    CachedBytecode m_ptr;
} RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>>;

typedef struct SourceProvider {
} // Error Processing Struct Fields

typedef struct RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>> {
    SourceProvider field0;
} RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>>;

typedef struct OrdinalNumber {
    int field0;
} OrdinalNumber;

typedef struct SourceCode {
    RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>> field0;
    int field1;
    int field2;
    OrdinalNumber field3;
    OrdinalNumber field4;
} SourceCode;

typedef struct WeakObjCPtr<JSVirtualMachine> {
    id m_weakReference;
} WeakObjCPtr<JSVirtualMachine>;

typedef struct MappedFileData {
    void m_fileData;
    unsigned int m_fileSize;
} MappedFileData;

typedef struct StringImpl {
} // Error Processing Struct Fields

typedef struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    StringImpl m_ptr;
} RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>;

typedef struct String {
    RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
} String;

typedef struct RetainPtr<NSURL> {
    void m_ptr;
} RetainPtr<NSURL>;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct OpaqueJSContextGroup {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
    uint8_t __a_value;
    unsigned char field1;
} __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>>;

typedef struct atomic<unsigned char> {
    __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> __a_;
} atomic<unsigned char>;

typedef struct Atomic<unsigned char> {
    atomic<unsigned char> value;
} Atomic<unsigned char>;

typedef struct Lock {
    Atomic<unsigned char> m_byte;
} Lock;

typedef struct JSObject {
} // Error Processing Struct Fields

typedef struct pair<JSC::JSObject *, JSC::JSObject *> {
} // Error Processing Struct Fields

typedef struct OpaqueJSClass {
} // Error Processing Struct Fields

typedef struct NakedPtr<OpaqueJSClass> {
    OpaqueJSClass m_ptr;
} NakedPtr<OpaqueJSClass>;

typedef struct Weak<JSC::Structure> {
    WeakImpl m_impl;
} Weak<JSC::Structure>;

typedef struct RetainPtr<NSMutableDictionary> {
    void m_ptr;
} RetainPtr<NSMutableDictionary>;

typedef struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject> *, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> {
    void __value_;
} __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject> *, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>>;

typedef struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> {
    __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject> *, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> __ptr_;
} unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>>;

