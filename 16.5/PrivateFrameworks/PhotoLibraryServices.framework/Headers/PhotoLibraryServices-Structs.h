typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

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

typedef struct _NSZone {
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

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct os_state_data_decoder_s {
    char field0;
    char field1;
} os_state_data_decoder_s;

typedef struct os_state_data_s {
    unsigned int field0;
    unk field1;
    BOOL field2;
    unsigned int field3;
    os_state_data_decoder_s field4;
    char field5;
    unsigned char field6;
} os_state_data_s;

typedef struct os_state_hints_s {
    unsigned int field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
} os_state_hints_s;

typedef struct CacheDeleteToken {
} // Error Processing Struct Fields

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct PLImageTableEntryFooter_s {
    ? field0;
    unsigned int field1;
    unsigned int field2;
    int field3;
} PLImageTableEntryFooter_s;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct CGImageDestination {
} // Error Processing Struct Fields

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _managedObjectContextFlags {
    BOOL _registeredForCallback;
    BOOL _propagatesDeletesAtEndOfEvent;
    BOOL _exhaustiveValidation;
    BOOL _processingChanges;
    BOOL _useCommittedSnapshot;
    BOOL _registeredUndoTransactionID;
    BOOL _retainsAllRegisteredObjects;
    BOOL _savingInProgress;
    BOOL _wasDisposed;
    BOOL _unprocessedChangesPending;
    BOOL _isDirty;
    BOOL _ignoreUndoCheckpoints;
    BOOL _propagatingDeletes;
    BOOL _isNSEditorEditing;
    BOOL _isMainThreadBlessed;
    BOOL _isImportContext;
    BOOL _preflightSaveInProgress;
    BOOL _disableDiscardEditing;
    BOOL _isParentStoreContext;
    BOOL _postSaveNotifications;
    BOOL _isMerging;
    BOOL _concurrencyType;
    BOOL _deleteInaccessible;
    BOOL _priority;
    BOOL _autoMerge;
    BOOL _isXPCServerContext;
    BOOL _pushSecureDelete;
    BOOL _refreshAfterSave;
    BOOL _allowAncillary;
    BOOL _generatedMutatedIDsNotification;
    BOOL _postSavedObjectNotifications;
    BOOL _allowAdditionalUserInfoKeys;
    BOOL _trackSQLiteDatabaseStatistics;
    BOOL _reservedFlags;
} _managedObjectContextFlags;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct PL_KTXHeader {
    unsigned char field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
} PL_KTXHeader;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct sqlite3_intarray {
} // Error Processing Struct Fields

typedef struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 {
    BOOL strategy;
    BOOL version;
    BOOL resourceType;
} PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct ArchiveLineParser {
} // Error Processing Struct Fields

typedef struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> {
    ArchiveLineParser field0;
} __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>>;

typedef struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> {
    __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> field0;
} unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>>;

typedef struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> {
    void __value_;
} __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>>;

typedef struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> {
    __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>> __ptr_;
} unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, boost::interprocess::iset_index>>>;

typedef struct tokenOutput_t {
} // Error Processing Struct Fields

typedef struct PLDuplicateAssetScoreTuple {
    short field0;
    short field1;
} PLDuplicateAssetScoreTuple;

typedef struct PLCartesianCoordinate3D {
    float field0;
    float field1;
    float field2;
} PLCartesianCoordinate3D;

typedef struct _CMPhotoCascadeContext {
} // Error Processing Struct Fields

typedef struct OpaqueCFHTTPCookieStorage {
} // Error Processing Struct Fields

typedef struct option {
    char * field0;
    int field1;
    int field2;
    int field3;
} option;

typedef struct CC_SHA256state_st {
    unsigned int count;
    unsigned int hash;
    unsigned int wbuf;
} CC_SHA256state_st;

typedef struct _fetchRequestFlags {
    BOOL distinctValuesOnly;
    BOOL includesSubentities;
    BOOL includesPropertyValues;
    BOOL resultType;
    BOOL returnsObjectsAsFaults;
    BOOL excludePendingChanges;
    BOOL isInUse;
    BOOL entityIsName;
    BOOL refreshesRefetched;
    BOOL propertiesValidated;
    BOOL expressionsValidated;
    BOOL disableCaching;
    BOOL allocationType;
    BOOL batchLRUEntries;
    BOOL asyncRequest;
    BOOL purgeable;
    BOOL _RESERVED;
} _fetchRequestFlags;

typedef struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 {
    BOOL strategy;
    BOOL version;
    BOOL relation;
} PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1;

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 {
    BOOL strategy;
    BOOL version;
    BOOL resourceVersion;
    BOOL resourceType;
    BOOL recipeClass;
    BOOL recipeVariationID;
    BOOL isDerivative;
    BOOL extensionCasing;
    BOOL fileType;
} PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1;

typedef struct fsid {
    int val;
} fsid;

typedef struct CMPhotoDecompressionContainer {
} // Error Processing Struct Fields

typedef struct UDateIntervalFormat {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct PLThumbnailDataStoreKeyStruct_V1 {
    BOOL version;
    BOOL type;
    BOOL unused;
    BOOL index;
} PLThumbnailDataStoreKeyStruct_V1;

