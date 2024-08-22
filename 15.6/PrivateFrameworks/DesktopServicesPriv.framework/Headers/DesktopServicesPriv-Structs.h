typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct TDSMutex {
    _opaque_pthread_mutex_t fMutex;
} TDSMutex;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> {
    __CFString field0;
} TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>>;

typedef struct TString {
    TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> field0;
} TString;

typedef struct TSizerOutput {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
    NSInteger field9;
    NSInteger field10;
    NSInteger field11;
    NSInteger field12;
    NSInteger field13;
    TString field14;
    TString field15;
    NSInteger field16;
    NSUInteger field17;
    unsigned int field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
} TSizerOutput;

typedef struct DestinationSpaceNeeds {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
    NSInteger field9;
    NSInteger field10;
    NSInteger field11;
    NSInteger field12;
    char field13;
    char field14;
    NSInteger field15;
    NSUInteger field16;
    BOOL field17;
    unsigned int field18;
    int field19;
} DestinationSpaceNeeds;

