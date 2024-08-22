typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    BOOL completed;
} ?;

typedef struct objc_property {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct _WFContentSlice {
    NSUInteger field0;
    NSUInteger field1;
} _WFContentSlice;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct WFRowTemplateValueInfo {
    Class field0;
    SEL field1;
    SEL field2;
    id field3;
    id field4;
} WFRowTemplateValueInfo;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

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

