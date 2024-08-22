typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    BOOL useSSL;
    BOOL incomingServerSupportsSSL;
    BOOL smtpServerSupportsSSL;
    BOOL canceled;
    BOOL performsValidationInBackground;
    BOOL unused;
} ?;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s field0;
    unsigned int field1;
} os_unfair_recursive_lock_s;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct internal_state {
} // Error Processing Struct Fields

typedef struct z_stream_s {
    char * field0;
    unsigned int field1;
    NSUInteger field2;
    char * field3;
    unsigned int field4;
    NSUInteger field5;
    char * field6;
    internal_state field7;
    unk field8;
    unk field9;
    void field10;
    int field11;
    NSUInteger field12;
    NSUInteger field13;
} z_stream_s;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct _MFAttachmentDataFetchResult {
    BOOL field0;
    id field1;
    BOOL field2;
} _MFAttachmentDataFetchResult;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct archive {
} // Error Processing Struct Fields

typedef struct archive_entry {
} // Error Processing Struct Fields

typedef struct CentralHeader {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unsigned short field5;
    unsigned short field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned short field11;
    unsigned short field12;
    unsigned short field13;
    unsigned short field14;
    unsigned short field15;
    unsigned int field16;
    unsigned int field17;
    char * field18;
} CentralHeader;

typedef struct CentralDirectory {
    unsigned char field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned int field5;
    unsigned int field6;
    unsigned short field7;
} CentralDirectory;

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __SCPreferences {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct _CommandStackEntry {
} // Error Processing Struct Fields

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct __SecPolicy {
} // Error Processing Struct Fields

typedef struct NtlmGenerator {
} // Error Processing Struct Fields

typedef struct SecCmsMessageStr {
} // Error Processing Struct Fields

typedef struct SecCmsDigestContextStr {
} // Error Processing Struct Fields

typedef struct SecCmsSignedDataStr {
} // Error Processing Struct Fields

typedef struct SecCmsEnvelopedDataStr {
} // Error Processing Struct Fields

typedef struct SecCmsEncoderStr {
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

