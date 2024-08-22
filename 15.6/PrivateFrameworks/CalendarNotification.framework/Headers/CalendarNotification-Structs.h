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

typedef struct ? {
    int field0;
    void field1;
    id field2;
    NSUInteger field3;
    unsigned char field4;
    NSUInteger field5;
    void field6;
    unsigned char field7;
    char * field8;
    _moFactoryClassFlags field9;
} ?;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

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
    BOOL _reservedFlags;
} _managedObjectContextFlags;

