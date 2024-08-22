// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECTCONTEXT_H
#define TSPOBJECTCONTEXT_H

@class SFUCryptoKey, NSURL, NSProgress, NSMapTable, NSMutableDictionary, NSSet, NSRecursiveLock, NSHashTable, TSUTemporaryDirectory, NSMutableArray, NSArray, NSString, NSUUID, NSData;
@protocol TSPDataReferenceMapDelegate, TSPObjectUUIDMapDelegate, TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPSupportDirectoryDelegate, TSPDataProviding, TSPPassphraseConsumer, OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate, NSFilePresenter;

#import <Foundation/Foundation.h>

#import "TSPPackage.h"
#import "TSPCancellationState.h"
#import "TSPDocumentProperties.h"
#import "TSPObjectUUIDMap.h"
#import "TSPDocumentRevision.h"
#import "TSPDocumentSaveOperationState.h"
#import "TSPPackageWriteCoordinator.h"
#import "TSPObject.h"
#import "TSPSupportPackageWriteCoordinator.h"
#import "TSPComponentManager.h"
#import "TSPObjectContext.h"
#import "TSPDataDownloadManager.h"
#import "TSPDataManager.h"
#import "TSPDataReferenceMap.h"
#import "TSPDocumentMetadata.h"
#import "TSPObjectContainer.h"
#import "TSPDownloadObserverManager.h"
#import "TSPRegistry.h"
#import "TSPResourceContext.h"
#import "TSPSupportManager.h"
#import "TSPSupportMetadata.h"

@interface TSPObjectContext : NSObject <TSPDataReferenceMapDelegate, TSPObjectUUIDMapDelegate, TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPSupportDirectoryDelegate, TSPDataProviding, TSPPassphraseConsumer>

 {
    uint8_t _lastObjectIdentifier;
    uint8_t _modifyObjectToken;
    uint8_t _modifyObjectCount;
    uint8_t _ignoreDataLifecycleErrorsCount;
    uint8_t _didClose;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    TSPPackage *_documentPackage;
    TSPPackage *_supportPackage;
    NSURL *_supportURL;
    NSProgress *_readProgress;
    TSPCancellationState *_readCancellationState;
    os_unfair_lock_s _documentPropertiesLock;
    TSPDocumentProperties *_documentProperties;
    NSMapTable *_objects;
    TSPObjectUUIDMap *_objectUUIDMap;
    NSMutableDictionary *_deterministicObjectUUIDSetPerObject;
    TSPDocumentRevision *_documentRevision;
    NSInteger _preferredPackageType;
    NSSet *_featureIdentifiers;
    NSSet *_unsupportedFeatureIdentifiers;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_dataAttributesQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    uint8_t _runLoadObserversQueueSuspendCount;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSProgress *_nextSaveProgress;
    TSPDocumentSaveOperationState *_saveOperationState;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
    NSHashTable *_objectModifyDelegates;
    BOOL _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    IdentifierMap<NSMutableArray<TSPObjectContextObserver *> *> _loadObservers;
    NSObject<OS_dispatch_queue> *_asynchronousObjectModifierQueue;
    NSHashTable *_asynchronousObjectModifiers;
    NSMutableArray *_suspendedAsynchronousObjectModifierStack;
    TSPObject *_supportObject;
    TSPSupportPackageWriteCoordinator *_supportWriteCoordinator;
    NSHashTable *_objectProviders;
    NSObject<OS_dispatch_queue> *_objectProvidersQueue;
    os_unfair_lock_s _dataObserversLock;
    NSHashTable *_dataObservers;
    os_unfair_lock_s _deferredInitialDataPropertiesBlocksLock;
    NSMutableArray *_deferredInitialDataPropertiesBlocks;
    ? _flags;
}


@property (readonly) NSInteger aggregateReadabilityForDocumentResources;
@property (readonly, nonatomic) NSArray *allDataWithLastDigestMismatch;
@property (readonly, nonatomic) NSArray *allErasedDataWithLastDigestMismatch;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly) BOOL closed;
@property (readonly, nonatomic) TSPComponentManager *componentManager; // ivar: _componentManager
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) TSPDataDownloadManager *dataDownloadManager; // ivar: _dataDownloadManager
@property (readonly, nonatomic) TSPDataManager *dataManager; // ivar: _dataManager
@property (readonly, nonatomic) TSPDataReferenceMap *dataReferenceMap; // ivar: _dataReferenceMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SFUCryptoKey *decryptionKey;
@property (weak, nonatomic) NSObject<TSPObjectContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger documentDataSize;
@property (readonly, nonatomic) TSPDocumentMetadata *documentMetadata; // ivar: _documentMetadata
@property (readonly, nonatomic) TSPObject *documentObject; // ivar: _documentObject
@property (readonly, nonatomic) TSPObjectContainer *documentObjectContainer; // ivar: _documentObjectContainer
@property (readonly, nonatomic) NSUInteger documentObjectSize;
@property (readonly, nonatomic) TSPPackage *documentPackage;
@property (readonly, nonatomic) NSString *documentPasswordHint; // ivar: _documentPasswordHint
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) NSUInteger documentReadVersion;
@property (retain) TSPDocumentRevision *documentRevision;
@property (readonly, nonatomic) NSUInteger documentSize;
@property (readonly, nonatomic) NSURL *documentURL;
@property (readonly, nonatomic) NSUUID *documentUUID;
@property (readonly, nonatomic) TSPDownloadObserverManager *downloadObserverManager; // ivar: _downloadObserverManager
@property (readonly, nonatomic) NSSet *featureIdentifiers;
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (readonly, nonatomic) BOOL hasCurrentFileFormatVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreDataLifecycleErrors;
@property (readonly, nonatomic) BOOL ignoreDataLifecycleNotifications;
@property (readonly, nonatomic) BOOL ignoreDataReferenceCountValidationWhileReading;
@property (readonly, nonatomic) BOOL ignoreDocumentResourcesWhileReading;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL ignoreDocumentSupportVersioning;
@property (readonly, nonatomic) BOOL ignoreReferencesToUnknownObjects;
@property (readonly, nonatomic) BOOL ignoreUnknownContentWhileReading;
@property (readonly, nonatomic) BOOL ignoreVersionCheckingWhileReading;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isInCollaborationMode;
@property (readonly, nonatomic) BOOL isInReadOnlyMode;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isReadCancelled;
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (nonatomic) NSInteger lastObjectIdentifier;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) BOOL losesDataOnWrite; // ivar: _losesDataOnWrite
@property (nonatomic) BOOL nested; // ivar: _nested
@property (readonly, nonatomic) NSInteger packageType;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSData *passwordVerifier; // ivar: _passwordVerifier
@property NSInteger preferredPackageType;
@property (readonly, nonatomic) TSPRegistry *registry; // ivar: _registry
@property (readonly, nonatomic) BOOL requiresNetworkValidation;
@property (readonly, nonatomic) NSUInteger reservedDocumentDataSize;
@property (readonly, nonatomic) NSUInteger reservedDocumentSize;
@property (readonly, nonatomic) TSPResourceContext *resourceContext; // ivar: _resourceContext
@property (readonly, nonatomic) NSUInteger saveToken; // ivar: _saveToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSPSupportManager *supportManager; // ivar: _supportManager
@property (readonly, nonatomic) TSPSupportMetadata *supportMetadata; // ivar: _supportMetadata
@property (retain, nonatomic) TSPObject *supportObject;
@property (readonly, nonatomic) TSPObjectContainer *supportObjectContainer; // ivar: _supportObjectContainer
@property (readonly, nonatomic) TSPPackage *supportPackage;
@property (readonly, nonatomic) NSURL *supportURL;
@property (readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers;
@property (readonly, nonatomic) NSUUID *versionUUID;


+(BOOL)dumpMessagesForDocumentURL:(id)arg0 supportURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(BOOL)isNativeDirectoryFormatURL:(id)arg0 ;
+(BOOL)isTangierEditingDirectoryFormatURL:(id)arg0 ;
+(BOOL)isTangierEditingFormatURL:(id)arg0 ;
+(BOOL)shouldValidateCRCOnWrite;
+(BOOL)validateCRCForDocumentAtURL:(id)arg0 error:(*id)arg1 ;
+(NSInteger)documentTypeAtURL:(id)arg0 ;
+(NSInteger)documentTypeAtURL:(id)arg0 hasNativeUTI:(BOOL)arg1 ;
+(NSInteger)documentTypeAtURL:(id)arg0 hasNativeUTI:(BOOL)arg1 nestedDocumentFilename:(id)arg2 ;
+(id)documentRevisionAtURL:(id)arg0 passphrase:(id)arg1 error:(*id)arg2 ;
+(id)downloadURLForDataWithDigest:(id)arg0 ;
+(id)releaseQueue;
+(id)supportBundleURLForDocumentUUID:(id)arg0 delegate:(id)arg1 ;
+(void)removeDefaultSupportDirectory;
+(void)setShouldValidateCRCOnWrite:(BOOL)arg0 ;
+(void)waitForPendingEndSaveGroup:(id)arg0 ;
-(BOOL)areExternalReferencesSupported;
-(BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg0 ;
-(BOOL)canModifyObject:(id)arg0 ;
-(BOOL)canPerformUserActions;
-(BOOL)canSetObjectUUIDForObject:(id)arg0 ;
-(BOOL)containsDataConformingToUTI:(id)arg0 ;
-(BOOL)continueReadingDocumentObjectFromDatabasePackageURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)continueReadingDocumentObjectFromPackageURL:(id)arg0 areExternalDataReferencesAllowed:(BOOL)arg1 finalizeHandlerQueue:(id)arg2 readCoordinator:(*id)arg3 objects:(*id)arg4 error:(*id)arg5 ;
-(BOOL)copyIfAppropriateFromOriginalURL:(id)arg0 toURL:(id)arg1 cloneMode:(BOOL)arg2 originalPackage:(id)arg3 packageType:(NSInteger)arg4 inheritAttributes:(BOOL)arg5 ;
-(BOOL)didFinishSuccessfullyReadingObjects:(id)arg0 readCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 ;
-(BOOL)endAddingLoadedObjects;
-(BOOL)endWriteWithSuccess:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isObjectInDocument:(id)arg0 ;
-(BOOL)readComponent:(id)arg0 isWeakReference:(BOOL)arg1 documentPackage:(id)arg2 supportPackage:(id)arg3 rootObject:(*id)arg4 allObjects:(*id)arg5 error:(*id)arg6 ;
-(BOOL)readComponent:(id)arg0 isWeakReference:(BOOL)arg1 rootObject:(*id)arg2 allObjects:(*id)arg3 error:(*id)arg4 ;
-(BOOL)readDocumentObjectFromDatabasePackageURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)readDocumentObjectFromPackageURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)readLazyReference:(id)arg0 object:(*id)arg1 error:(*id)arg2 ;
-(BOOL)readObjectForIdentifier:(NSInteger)arg0 isWeakReference:(BOOL)arg1 ignoreUnknownContentWhileReading:(BOOL)arg2 rootObjectComponent:(id)arg3 object:(*id)arg4 error:(*id)arg5 ;
-(BOOL)readWithReadCoordinator:(id)arg0 finalizeHandlerQueue:(id)arg1 rootObject:(*id)arg2 error:(*id)arg3 readCompletion:(id)arg4 ;
-(BOOL)saveToURL:(id)arg0 packageType:(NSInteger)arg1 encryptionKey:(id)arg2 originalURL:(id)arg3 error:(*id)arg4 ;
-(BOOL)setPassphrase:(id)arg0 ;
-(BOOL)shouldLoadAllComponentsForDocumentURL:(id)arg0 ;
-(BOOL)shouldUseCloneModeToWriteToURL:(id)arg0 originalURL:(id)arg1 ;
-(BOOL)updateDocumentUUIDPreserveOriginalDocumentSupport:(BOOL)arg0 preserveShareUUID:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 encryptionKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 originalPackage:(id)arg1 supportURL:(id)arg2 originalSupportPackage:(id)arg3 encryptionKey:(id)arg4 error:(*id)arg5 ;
-(NSInteger)incrementLastObjectIdentifier:(NSInteger)arg0 ;
-(NSInteger)modifyObjectTokenForNewObject;
-(NSInteger)newObjectIdentifier;
-(NSInteger)updateModifyObjectToken;
-(NSUInteger)estimatedProgressTotalUnitCountForURL:(id)arg0 packageType:(NSInteger)arg1 originalDocumentURL:(id)arg2 ;
-(NSUInteger)fileFormatVersion;
-(NSUInteger)sizeOfComponentsWithLocator:(id)arg0 ;
-(id)UUIDsFromObjects:(id)arg0 ;
-(id)allValidatedDataWithDigestMismatchCreatedPriorToVersion:(NSUInteger)arg0 ;
-(id)anonymousIdentifierForDigest:(id)arg0 ;
-(id)baseUUIDForObjectUUID;
-(id)currentPackageDataWriter;
-(id)dataManagingForDataReferenceMap:(id)arg0 ;
-(id)dataObserversConformingToProtocol:(id)arg0 ;
-(id)dataWithContentsOfPackagePath:(id)arg0 ;
-(id)dataWithDigest:(id)arg0 ;
-(id)dataWithDigest:(id)arg0 length:(NSUInteger)arg1 preferredFilename:(id)arg2 canDownload:(BOOL)arg3 isMissingFromServer:(BOOL)arg4 documentRevision:(id)arg5 downloadPriority:(NSInteger)arg6 uploadStatus:(NSInteger)arg7 ;
-(id)dataWithLegacyDataIdentifier:(NSInteger)arg0 ;
-(id)documentLoadValidationPolicy;
-(id)documentResourceDataForDigestString:(id)arg0 locator:(id)arg1 filename:(id)arg2 canDownload:(BOOL)arg3 ;
-(id)documentSaveValidationPolicy;
-(id)incrementDocumentRevisionWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initForQuickLookWithURL:(id)arg0 registry:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(*id)arg4 ;
-(id)initForSpotlightWithURL:(id)arg0 delegate:(id)arg1 registry:(id)arg2 error:(*id)arg3 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 registry:(id)arg1 resourceContext:(id)arg2 mode:(unsigned int)arg3 isLoadingDocument:(BOOL)arg4 shouldCreateInternalMetadataObject:(BOOL)arg5 ;
-(id)initWithPartialDocumentURL:(id)arg0 delegate:(id)arg1 passphrase:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 passphrase:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 registry:(id)arg2 resourceContext:(id)arg3 mode:(unsigned int)arg4 passphrase:(id)arg5 skipDocumentUpgrade:(BOOL)arg6 error:(*id)arg7 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 resourceContext:(id)arg2 mode:(unsigned int)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(BOOL)arg5 error:(*id)arg6 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 resourceContext:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(BOOL)arg4 error:(*id)arg5 ;
-(id)lazyReferenceDelegateForDataReferenceMap:(id)arg0 ;
-(id)newObjectUUIDForObject:(id)arg0 uuidNamespace:(unsigned char)arg1 offset:(NSUInteger)arg2 ignoringBaseUUIDForObjectUUID:(BOOL)arg3 requireDeterministicUUID:(BOOL)arg4 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(id)objectInDocumentContainingForDataReferenceMap:(id)arg0 ;
-(id)objectUUIDMap;
-(id)objectUUIDMap:(id)arg0 needsObjectForIdentifier:(NSInteger)arg1 componentIdentifier:(NSInteger)arg2 onlyIfLoaded:(BOOL)arg3 ;
-(id)objectWithUUID:(id)arg0 ;
-(id)objectWithUUID:(id)arg0 onlyIfLoaded:(BOOL)arg1 validateNewObjects:(BOOL)arg2 identifier:(*NSInteger)arg3 ;
-(id)objectWithUUIDIfAvailable:(id)arg0 ;
-(id)objectWithUUIDIfAvailableAndLoaded:(id)arg0 ;
-(id)objectWithUUIDPath:(id)arg0 ;
-(id)objectsFromUUIDs:(id)arg0 ;
-(id)performResourceAccessUsingQueue:(id)arg0 block:(id)arg1 ;
-(id)prepareSaveProgress;
-(id)readObjectIfNeededForIdentifier:(NSInteger)arg0 isWeakReference:(BOOL)arg1 componentIdentifier:(NSInteger)arg2 ;
-(id)supportDirectoryURLReturningIsBundleURL:(*BOOL)arg0 ;
-(id)temporaryDirectory;
-(void)addDataInDocumentObserver:(id)arg0 ;
-(void)addDataObserver:(id)arg0 ;
-(void)addDataPackageObserver:(id)arg0 ;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 forLazyReference:(id)arg2 ;
-(void)addLoadObserver:(id)arg0 action:(SEL)arg1 forObjectIdentifier:(NSInteger)arg2 objectOrNil:(id)arg3 ;
-(void)addLoadedObjectsAndEnqueueNotifications:(id)arg0 ;
-(void)addObjectModifyDelegate:(id)arg0 ;
-(void)applyDeferredInitialDataProperties;
-(void)beginAddingLoadedObjects;
-(void)beginAssertOnModify;
-(void)beginIgnoringCachedObjectEviction;
-(void)beginIgnoringModificationsForObject:(id)arg0 ;
-(void)beginSaveToURL:(id)arg0 updateType:(NSInteger)arg1 packageType:(NSInteger)arg2 ;
-(void)beginSaveToURL:(id)arg0 updateType:(NSInteger)arg1 packageType:(NSInteger)arg2 documentUUID:(id)arg3 ;
-(void)beginWriteOperation;
-(void)beginWriteWithOriginalURL:(id)arg0 ;
-(void)beginWriteWithOriginalURL:(id)arg0 relativeURLForExternalData:(id)arg1 ;
-(void)canPerformUserActionUsingBlock:(id)arg0 ;
-(void)checkForDataWarnings;
-(void)close;
-(void)closeFromDealloc:(BOOL)arg0 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)createInternalMetadataIfNeeded;
-(void)dataInDocumentDidChangeForDataReferenceMap:(id)arg0 ;
-(void)dealloc;
-(void)didEncounterValidationError:(id)arg0 forData:(id)arg1 timing:(NSInteger)arg2 ;
-(void)didMoveSupportToURL:(id)arg0 ;
-(void)didMoveToURL:(id)arg0 ;
-(void)didReadDocumentObject:(id)arg0 ;
-(void)didReadSupportObject:(id)arg0 ;
-(void)endAssertOnModify;
-(void)endIgnoringCachedObjectEviction;
-(void)endIgnoringModificationsForObject:(id)arg0 ;
-(void)endSaveWithSuccess:(BOOL)arg0 ;
-(void)endWriteOperation;
-(void)ensureObject:(id)arg0 isKnownWithIdentifier:(NSInteger)arg1 ;
-(void)enumerateAllDataUsingBlock:(id)arg0 ;
-(void)enumerateDataInDocumentUsingBlock:(id)arg0 ;
-(void)enumerateDocumentResourcesUsingBlock:(id)arg0 ;
-(void)enumerateObjectProvidersUsingBlock:(id)arg0 ;
-(void)logDocumentStatistics;
-(void)objectUUIDMap:(id)arg0 didUpdateWithObjectIdentifierAddedToDocument:(NSInteger)arg1 objectIdentifierRemovedFromDocument:(NSInteger)arg2 ;
-(void)performAsynchronousWriteOperationOnDataAttributes:(id)arg0 ;
-(void)performAsynchronousWriteOperationOnDocumentState:(id)arg0 ;
-(void)performBlockIgnoringDataLifecycleErrors:(id)arg0 ;
-(void)performReadOperation:(id)arg0 ;
-(void)performReadOperationOnDataAttributes:(id)arg0 ;
-(void)performReadOperationOnDocumentState:(id)arg0 ;
-(void)performReadOperationOnKnownObjects:(id)arg0 ;
-(void)performReadUsingAccessor:(id)arg0 ;
-(void)performReadUsingAccessorImpl:(id)arg0 ;
-(void)prepareForDocumentDumpWithDocumentPackage:(id)arg0 supportPackage:(id)arg1 documentRevision:(id)arg2 passphrase:(id)arg3 ;
-(void)prepareForDocumentReplacement;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg0 forSafeSave:(BOOL)arg1 ;
-(void)prepareToReadSupportObjectExternalDataReferencesAllowed:(BOOL)arg0 finalizeHandlerQueue:(id)arg1 objects:(*id)arg2 accessor:(id)arg3 ;
-(void)presentPersistenceError:(id)arg0 ;
-(void)registerAsynchronousObjectModifier:(id)arg0 ;
-(void)registerObjectProvider:(id)arg0 ;
-(void)removeDataObserver:(id)arg0 ;
-(void)removeObjectModifyDelegate:(id)arg0 ;
-(void)replaceDocumentObject:(id)arg0 ;
-(void)requestAutosave;
-(void)requestAutosaveForExpensiveCalculation;
-(void)resumeAsynchronousModifications;
-(void)resumeAutosaveWithReason:(id)arg0 ;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)resumeSaveAndAutosaveWithReason:(id)arg0 ;
-(void)setProperties:(struct DataProperties )arg0 forData:(id)arg1 ;
-(void)suspendAsynchronousModificationsForObjectTargetType:(NSUInteger)arg0 ;
-(void)suspendAutosaveWithReason:(id)arg0 ;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)suspendSaveAndAutosaveWithReason:(id)arg0 ;
-(void)updateAdditionalResourceRequests;
-(void)waitForSaveToFinishIfNeeded;
-(void)willModifyObject:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif