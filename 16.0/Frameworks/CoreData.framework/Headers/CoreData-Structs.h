typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct _objectStoreFlags {
    BOOL isReadOnly;
    BOOL cleanOnRemove;
    BOOL isMDDirty;
    BOOL _RESERVED;
} _objectStoreFlags;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __persistentHistoryChangeRequestDescriptionFlags {
    BOOL _useQueryGenerationToken;
    BOOL _deleteHistoryRequest;
    BOOL _fetchTransactionForToken;
    BOOL _percentageDeleteHistoryRequest;
    BOOL _reservedPersistentHistoryChangeRequestDescription;
} __persistentHistoryChangeRequestDescriptionFlags;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct ? {
    unsigned int val;
} ?;

typedef struct _externalRefFlags_st {
    BOOL _invalidToOnes;
    BOOL _hasTemporaryID;
    BOOL _backgroundDealloc;
    BOOL _reservedFlags;
    BOOL _virtualfk_count;
    BOOL _ordkey_count;
} _externalRefFlags_st;

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

typedef struct _NSFaultingMutableArrayFlags {
    BOOL _isFault;
    BOOL _reserved;
} _NSFaultingMutableArrayFlags;

typedef struct _NSFaultingMutableSetFlags {
    BOOL _isFault;
    BOOL _mustPropagateDelete;
    BOOL _reserved;
    BOOL _relationship;
} _NSFaultingMutableSetFlags;

typedef struct objc_method {
} // Error Processing Struct Fields

typedef struct _PFArrayFlags {
    BOOL shouldRetain;
    BOOL shouldRelease;
    BOOL useExtendedRelease;
    BOOL freeBackingArray;
    BOOL copyBackingArray;
    BOOL managedObjects;
    BOOL _RESERVED;
} _PFArrayFlags;

typedef struct _PFBatchFaultingArrayFlags {
    BOOL _LRUIndex;
    BOOL _uniformEntity;
    BOOL _LRUEntryCount;
    BOOL _RESERVED;
} _PFBatchFaultingArrayFlags;

typedef struct __CFArray {
} // Error Processing Struct Fields

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

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _contextMapTableFlags {
    BOOL _usesWeakReferences;
    BOOL _garbageCollectionEnabled;
    BOOL _reservedFlags;
} _contextMapTableFlags;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct __CFAllocator {
} // Error Processing Struct Fields

typedef struct _NSExtraPropertyIVars {
    id field0;
    NSInteger field1;
    NSInteger field2;
} _NSExtraPropertyIVars;

typedef struct __propertyDescriptionFlags {
    BOOL _isReadOnly;
    BOOL _isTransient;
    BOOL _isOptional;
    BOOL _isIndexed;
    BOOL _skipValidation;
    BOOL _isIndexedBySpotlight;
    BOOL _isStoredInExternalRecord;
    BOOL _extraIvarsAreInDataBlob;
    BOOL _isOrdered;
    BOOL _hasMaxValueInExtraIvars;
    BOOL _hasMinValueInExtraIvars;
    BOOL _storeBinaryDataExternally;
    BOOL _preserveValueOnDelete;
    BOOL _isTriggerBacked;
    BOOL _isFileBackedFuture;
    BOOL _allowsCloudEncryption;
} __propertyDescriptionFlags;

typedef struct __entityDescriptionFlags {
    BOOL _isAbstract;
    BOOL _shouldValidateOnSave;
    BOOL _isImmutable;
    BOOL _isFlattened;
    BOOL _skipValidation;
    BOOL _hasPropertiesIndexedBySpotlight;
    BOOL _hasPropertiesStoredInTruthFile;
    BOOL _rangesAreInDataBlob;
    BOOL _hasAttributesWithExternalDataReferences;
    BOOL _hasNonstandardPrimitiveProperties;
    BOOL _hasUniqueProperties;
    BOOL _hasChildrenWithUniqueProperties;
    BOOL _validationUniqueProperties;
    BOOL _isPersistentHistoryEntity;
    BOOL _hasAttributesWithFileBackedFutures;
    BOOL _reservedEntityDescription;
} __entityDescriptionFlags;

typedef struct _ExtraEntityIVars {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    os_unfair_lock_s field6;
    int field7;
    void field8;
} _ExtraEntityIVars;

typedef struct __entityMappingFlags {
    BOOL _isInUse;
    BOOL _changeIsSchemaCompatible;
    BOOL _reservedEntityMapping;
} __entityMappingFlags;

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

typedef struct _expressionFlags {
    BOOL _evaluationBlocked;
    BOOL _usesKVC;
    BOOL _validatedExpression;
    BOOL _validatedKeys;
    BOOL _reservedExpressionFlags;
} _expressionFlags;

typedef struct _fetchExpressionFlags {
    BOOL isCountOnly;
    BOOL _RESERVED;
} _fetchExpressionFlags;

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

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct _queryGenerationFlags {
    BOOL _isCompound;
    BOOL _isSingleton;
    BOOL _freeValueOnDealloc;
    BOOL _isUnmoored;
    BOOL _reservedFlags;
} _queryGenerationFlags;

typedef struct __managedObjectModelFlags {
    BOOL _isInUse;
    BOOL _isImmutable;
    BOOL _isOptimizedForEncoding;
    BOOL _hasEntityWithConstraints;
    BOOL _skipUserInfoTombstones;
    BOOL _reservedEntityDescription;
} __managedObjectModelFlags;

typedef struct __modelMappingFlags {
    BOOL _isInUse;
    BOOL _reservedModelMapping;
} __modelMappingFlags;

typedef struct _migrationManagerFlags {
    BOOL _migrationWasCancelled;
    BOOL _usesStoreSpecificMigrationManager;
    BOOL _migrationWasInPlace;
    BOOL _forcedMigration;
    BOOL _reservedMigrationManager;
} _migrationManagerFlags;

typedef struct _insertRequestFlags {
    BOOL resultType;
    BOOL entityIsName;
    BOOL secureOperation;
    BOOL _RESERVED;
} _insertRequestFlags;

typedef struct persistentStoreCacheFlags {
    BOOL _preserveToManyRelationships;
    BOOL _reserved;
} persistentStoreCacheFlags;

typedef struct _persistentStoreCoordinatorFlags {
    BOOL _isRegistered;
    BOOL _canUseDirectDispatch;
    BOOL _queueUsage;
    BOOL _qosClass;
    BOOL _reservedFlags;
} _persistentStoreCoordinatorFlags;

typedef struct _requestFlags {
    BOOL includesSubentities;
    BOOL resultType;
    BOOL entityIsName;
    BOOL secureOperation;
    BOOL _RESERVED;
} _requestFlags;

typedef struct _fetchResultsControllerFlags {
    BOOL _changedResultsSinceLastSave;
    BOOL _hasBatchedArrayResults;
    BOOL _hasMutableFetchedResults;
    BOOL _hasSections;
    BOOL _sectionKeyPathIsObject;
    BOOL _includesSubentities;
    BOOL _sendDidChangeContentDiffNotifications;
    BOOL _sendDidChangeContentNotifications;
    BOOL _sendDidChangeContentSnapshotNotifications;
    BOOL _sendObjectChangeNotifications;
    BOOL _sendSectionChangeNotifications;
    BOOL _sendSectionIndexTitleForSectionName;
    BOOL _sendWillChangeContentNotifications;
    BOOL _usesNonpersistedProperties;
    BOOL _reservedFlags;
} _fetchResultsControllerFlags;

typedef struct __propertyMappingFlags {
    BOOL _isInUse;
    BOOL _reservedPropertyMapping;
} __propertyMappingFlags;

typedef struct _sqlColumnFlags {
    BOOL _allowAliasing;
    BOOL _unique;
    BOOL _constrained;
    BOOL _backedByTrigger;
    BOOL _isDerivedAttribute;
    BOOL _reservedFlags;
} _sqlColumnFlags;

typedef struct _sqlCoreFlags {
    BOOL useSyntaxColoredLogging;
    BOOL hasExternalDataReferences;
    BOOL fileProtectionType;
    BOOL notifyFOKChanges;
    BOOL initializationComplete;
    BOOL connectionsAreLocal;
    BOOL isXPCDelegate;
    BOOL queryGenerationInitializationFailed;
    BOOL persistentHistoryTracking;
    BOOL hasAncillaryModels;
    BOOL postRemoteNotify;
    BOOL hasFileBackedFutures;
    BOOL isInMemory;
    BOOL _debugRequestsHandling;
    BOOL historyBatchUpdateModProperties;
    BOOL indexTracking;
    BOOL _RESERVED;
} _sqlCoreFlags;

typedef struct __sqlentityFlags {
    BOOL _hasAttributesWithExternalDataReferences;
    BOOL _hasAttributesWithFileBackedFutures;
    BOOL _reserved;
} __sqlentityFlags;

typedef struct sqlite3_snapshot {
    unsigned char field0;
} sqlite3_snapshot;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct __sqliteConnectionFlags {
    BOOL _readyToBind;
    BOOL _fetchInProgress;
    BOOL _fileSystemType;
    BOOL _proxyLocking;
    BOOL _vacuumSetupNeeded;
    BOOL _usingWAL;
    BOOL _disallowReconnect;
    BOOL _isWriter;
    BOOL _didSnapshotRecovery;
    BOOL _hasTransactionStringTable;
    BOOL _isQueryGenTracking;
    BOOL _reserved;
} __sqliteConnectionFlags;

typedef struct _double_quad_uint {
    NSUInteger high64;
    NSUInteger low64;
} _double_quad_uint;

typedef struct sqlite3_intarray {
} // Error Processing Struct Fields

typedef struct __externalDataFlags {
    BOOL _isStoredExternally;
    BOOL _hasMappedData;
    BOOL _cleanupOnDealloc;
    BOOL _dataProtectionLevel;
    BOOL _isStoredUbiquitously;
    BOOL _createdByUbiquityImport;
    BOOL _reserved;
} __externalDataFlags;

typedef struct _NSFaultingMutableOrderedSetFlags {
    BOOL _isFault;
    BOOL _mustPropagateDelete;
    BOOL _ignoringIdempotentKVO;
    BOOL _mustCopyOnWrite;
    BOOL _isImmutableCopy;
    BOOL _reserved;
    BOOL _relationship;
} _NSFaultingMutableOrderedSetFlags;

typedef struct _snapshotFlags_st {
    BOOL _readOnly;
    BOOL _reservedFlags;
} _snapshotFlags_st;

typedef struct _sqlSaveFlags {
    BOOL notifyFOKChanges;
    BOOL hasChanges;
    BOOL reserved;
} _sqlSaveFlags;

typedef struct __indexElementDescriptionFlags {
    BOOL _ascending;
    BOOL _propertyIsRetained;
    BOOL _unique;
    BOOL _reservedEntityDescription;
} __indexElementDescriptionFlags;

typedef struct __zFlags {
    BOOL providerSuppliesContents;
    BOOL providerSuppliesStreams;
    BOOL providerSuppliesProperties;
    BOOL noContentsCaching;
    BOOL fileOpen;
    BOOL reserved;
} __zFlags;

