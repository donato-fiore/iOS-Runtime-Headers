typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct ? {
    char path;
    char offset;
} ?;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct dispatch_source_type_s {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float minimum;
    float maximum;
    float preferred;
} CAFrameRateRange;

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct routine_descriptor {
} // Error Processing Struct Fields

typedef struct mig_subsystem {
    unk field0;
    int field1;
    int field2;
    unsigned int field3;
    NSUInteger field4;
    routine_descriptor field5;
} mig_subsystem;

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct __SecTask {
} // Error Processing Struct Fields

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct _BSProtobufFieldEntry {
    unsigned int field0;
    char * field1;
    NSInteger field2;
    objc_ivar field3;
    Class field4;
    Class field5;
    unk field6;
    unk field7;
    ? field8;
    BOOL field9;
} _BSProtobufFieldEntry;

typedef struct _xpc_type_s {
} // Error Processing Struct Fields

