typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct USet {
} // Error Processing Struct Fields

typedef struct TITokenID {
    unsigned int field0;
    unsigned int field1;
} TITokenID;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct String {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned char field3;
    char * field4;
    char field5;
} String;

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct vector<TITokenID, std::allocator<TITokenID>> {
} // Error Processing Struct Fields

typedef struct LinguisticContextImpl {
} // Error Processing Struct Fields

typedef struct __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> {
    LinguisticContextImpl field0;
} __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>>;

typedef struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> {
    __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> field0;
} unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>>;

typedef struct LinguisticContext {
    unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> field0;
} LinguisticContext;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct LanguageModelContext {
    vector<TITokenID, std::allocator<TITokenID>> field0;
    NSUInteger field1;
    NSUInteger field2;
    LinguisticContext field3;
    LinguisticContext field4;
    vector<std::string, std::allocator<std::string>> field5;
} LanguageModelContext;

typedef struct LanguageModel {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<KB::LanguageModel> {
    LanguageModel __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<KB::LanguageModel>;

typedef struct DictionaryContainer {
} // Error Processing Struct Fields

typedef struct RefPtr<KB::DictionaryContainer> {
    DictionaryContainer field0;
} RefPtr<KB::DictionaryContainer>;

typedef struct TypologyLogger {
} // Error Processing Struct Fields

typedef struct shared_ptr<KB::TypologyLogger> {
} // Error Processing Struct Fields

typedef struct KeyboardLayout {
} // Error Processing Struct Fields

typedef struct RefPtr<TI::Favonius::KeyboardLayout> {
    KeyboardLayout m_ptr;
} RefPtr<TI::Favonius::KeyboardLayout>;

typedef struct __Mecabra {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct pair<NSString *, NSArray<NSNumber *> *> {
    id field0;
    id field1;
} pair<NSString *, NSArray<NSNumber *> *>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

