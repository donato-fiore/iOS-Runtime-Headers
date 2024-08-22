// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLIBRARYSERVICESMANAGER_H
#define PLLIBRARYSERVICESMANAGER_H

@class PLLazyObject, NSMutableDictionary, PLLibraryServicesStateNode, NSString, NSError, NSURL, NSMutableArray, PLPhotoLibraryPathManager, NSPersistentStoreCoordinator, NSProgress, PLTrackableRequestManager;
@protocol PLSyndicationDeleteManagerDelegate, OS_dispatch_queue, PLLibraryServicesDelegate, PLMigrationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManagerStateHandler.h"
#import "PLClientServerTransaction.h"
#import "PLBackgroundJobService.h"
#import "PLCameraPreviewWellManager.h"
#import "PLChangeHandlingContainer.h"
#import "PLCloudPhotoLibraryManager.h"
#import "PLLibraryServicesCPLReadiness.h"
#import "PLAssetsdCrashRecoverySupport.h"
#import "PLDatabaseContext.h"
#import "PLDupeManager.h"
#import "PLImageWriter.h"
#import "PLJournalManager.h"
#import "PLKeywordManager.h"
#import "PLPhotoLibraryBundle.h"
#import "PLModelMigrator.h"
#import "PLMomentGenerationDataManager.h"
#import "PLPairing.h"
#import "PLQuickActionManager.h"
#import "PLRelationshipOrderKeyManager.h"
#import "PLSearchIndexManager.h"
#import "PLSyndicationDeleteManager.h"

@interface PLLibraryServicesManager : NSObject <PLSyndicationDeleteManagerDelegate>

 {
    PLLibraryServicesManagerStateHandler *_stateHandler;
    BOOL _isCreateMode;
    PLLazyObject *_lazyWellKnownPhotoLibraryIdentifier;
    PLLazyObject *_lazyImageWriter;
    PLLazyObject *_lazyModelMigrator;
    PLLazyObject *_lazySearchIndexManager;
    PLLazyObject *_lazyDatabaseContext;
    PLLazyObject *_lazyDupeManager;
    PLLazyObject *_lazyRelationshipOrderKeyManager;
    PLLazyObject *_lazyMomentGenerationDataManager;
    PLLazyObject *_lazyJournalManager;
    PLLazyObject *_lazyQuickActionManager;
    PLLazyObject *_lazyKeywordManager;
    PLLazyObject *_lazyAlbumCountCoalescer;
    PLLazyObject *_lazyImportSessionCountCoalescer;
    PLLazyObject *_lazyCloudPhotoLibraryManager;
    PLLazyObject *_lazyCrashRecoverySupport;
    PLLazyObject *_lazyPairingManager;
    PLLazyObject *_lazyCPLReadiness;
    PLLazyObject *_lazyCameraPreviewWellManager;
    PLLazyObject *_lazySyndicationDeleteManager;
    PLLazyObject *_lazyCacheDeleteSupport;
    PLClientServerTransaction *_serverTransaction;
    NSObject<OS_dispatch_queue> *_albumCountQueue;
    NSMutableDictionary *_externalWaiterCompletionBlocksByState;
    unsigned int _maxWaiterQoS;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly) PLBackgroundJobService *backgroundJobService; // ivar: _backgroundJobService
@property (readonly) PLCameraPreviewWellManager *cameraPreviewWellManager;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
@property (readonly) PLLibraryServicesCPLReadiness *cplReadiness;
@property (readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
@property (readonly, getter=isCreateMode) BOOL createMode;
@property (retain, nonatomic, setter=_setCurrentStateNode:) PLLibraryServicesStateNode *currentStateNode; // ivar: _currentStateNode
@property (readonly) PLDatabaseContext *databaseContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PLDupeManager *dupeManager;
@property (nonatomic, getter=isFinalizing) BOOL finalizing; // ivar: _finalizing
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *helperQueue; // ivar: _helperQueue
@property (readonly) PLImageWriter *imageWriter;
@property (nonatomic) os_unfair_lock_s importMutex; // ivar: _importMutex
@property (readonly, nonatomic) NSError *invalidationError; // ivar: _invalidationError
@property (readonly) PLJournalManager *journalManager;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly, weak) PLPhotoLibraryBundle *libraryBundle; // ivar: _libraryBundle
@property (retain) NSObject<PLLibraryServicesDelegate> *libraryServicesDelegate; // ivar: _libraryServicesDelegate
@property (readonly, copy) NSURL *libraryURL;
@property (nonatomic) os_unfair_lock_s localeUpdateLock; // ivar: _localeUpdateLock
@property (readonly, copy) NSString *logPrefix; // ivar: _logPrefix
@property (weak) NSObject<PLMigrationServiceProtocol> *migrationServiceProxy; // ivar: _migrationServiceProxy
@property (readonly) PLModelMigrator *modelMigrator;
@property (readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property (readonly, nonatomic) NSMutableArray *mutablePendingOperations; // ivar: _mutablePendingOperations
@property (retain, nonatomic) id *operationCountObservee; // ivar: _operationCountObservee
@property (readonly) PLPairing *pairingManager;
@property (readonly) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSProgress *postRunningProgress; // ivar: _postRunningProgress
@property (retain, nonatomic) NSProgress *preRunningProgress; // ivar: _preRunningProgress
@property (readonly) PLQuickActionManager *quickActionManager;
@property (readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
@property (readonly) PLSearchIndexManager *searchIndexManager;
@property (readonly) NSInteger state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateSerializationQueue; // ivar: _stateSerializationQueue
@property (readonly) Class superclass;
@property (readonly) PLSyndicationDeleteManager *syndicationDeleteManager;
@property (readonly) PLTrackableRequestManager *trackableRequestManager; // ivar: _trackableRequestManager
@property (copy) NSString *upgradeClient; // ivar: _upgradeClient
@property (readonly) NSInteger wellKnownPhotoLibraryIdentifier;


+(NSInteger)_finalState;
+(NSInteger)_initialState;
+(id)errorForInvalidationError:(id)arg0 userInfo:(id)arg1 ;
+(id)libraryServicesManagerForLibraryURL:(id)arg0 ;
-(BOOL)_canTransitionToState:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_enqueueOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)activate:(*id)arg0 ;
-(BOOL)awaitLibraryState:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)enqueueOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)finalize:(*id)arg0 ;
-(BOOL)isSearchIndexingEnabled;
-(BOOL)isSyndicationPhotoLibrary;
-(BOOL)isSystemPhotoLibrary;
-(BOOL)transitionToState:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateSavedLocaleIfNeeded;
-(BOOL)willBecomeNonSystemPhotoLibrary:(*id)arg0 ;
-(NSUInteger)createOptions;
-(id)_determineWellKnownPhotoLibraryIdentifier;
-(id)_enqueueAwaitOperation;
-(id)_libraryServicesStateNodeWithState:(NSInteger)arg0 ;
-(id)_newContainer:(Class)arg0 scope:(id)arg1 ;
-(id)_newOrderKeyManager;
-(id)activeOperations;
-(id)initWithLibraryBundle:(id)arg0 backgroundJobService:(id)arg1 delegateClass:(Class)arg2 ;
-(id)newAlbumCountCoalescer;
-(id)newCloudPhotoLibraryManager;
-(id)newCrashRecoverySupport;
-(id)newImportSessionCountCoalescer;
-(id)newJournalManager;
-(id)newMomentGenerationDataManager;
-(id)newSearchIndexManager;
-(id)pendingOperations;
-(id)statusDescription;
-(void)_addPendingOperationsForStateNode:(id)arg0 ;
-(void)_awaitLibraryState:(NSInteger)arg0 sync:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_cancelPendingOperations;
// -(void)_dispatchAwaitLibraryStateCompletionHandler:(id)arg0 group:(unk)arg1 error:(id)arg2  ;
-(void)_dispatchExternalWaitersForState:(NSInteger)arg0 ;
-(void)_enqueueExternalWaiterCompletionBlockForState:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)_handleCoalescerActionWithScope:(id)arg0 class:(Class)arg1 forIDs:(id)arg2 context:(id)arg3 ;
-(void)_handleLibraryStateCompletedAllOperations;
-(void)_increaseStateQueueQoSIfNeeded;
-(void)_initCameraPreviewWellManager;
-(void)_initCloudPhotoLibraryManager;
-(void)_initLazyWellKnownPhotoLibraryIdentifier;
-(void)_initSyndicationPhotoLibrarySpecificServices;
-(void)_initSystemPhotoLibrarySpecificServices;
-(void)_invalidate;
-(void)_invalidateAlbumCountCoalescer;
-(void)_invalidateBackgroundJobService;
-(void)_invalidateCPLReadiness;
-(void)_invalidateCacheDeleteSupport;
-(void)_invalidateCameraPreviewWellManager;
-(void)_invalidateCloudPhotoLibraryManager;
-(void)_invalidateCrashRecoverySupport;
-(void)_invalidateDatabaseContext;
-(void)_invalidateDupeManager;
-(void)_invalidateImageWriter;
-(void)_invalidateImportSessionCountCoalescer;
-(void)_invalidateJournalManager;
-(void)_invalidateKeywordManager;
-(void)_invalidateModelMigrator;
-(void)_invalidateMomentGenerationDataManager;
-(void)_invalidatePairingManager;
-(void)_invalidateQuickActionManager;
-(void)_invalidateRelationshipOrderKeyManager;
-(void)_invalidateSearchIndexManager;
-(void)_invalidateSyndicationDeleteManager;
-(void)_invalidateSyndicationPhotoLibrarySpecificServices;
-(void)_invalidateSystemPhotoLibrarySpecificServices;
-(void)_setCameraRollCountedInQuota:(BOOL)arg0 ;
-(void)_startObservingLibraryStateCompletedAllOperations;
-(void)_stopObservingLibraryStateCompletedAllOperations;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)_waitForAwaitOperation:(id)arg0 ;
-(void)awaitLibraryState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)currentLocaleDidChangeNotification:(id)arg0 ;
-(void)deactivateWithInvalidationError:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeNonSystemPhotoLibrary;
-(void)didRemainSystemPhotoLibrary;
-(void)initializeChangeHandling;
-(void)initializeConstraintsDirector;
-(void)invalidateReverseLocationDataOnAllAssets;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBlockWithImportMutex:(id)arg0 ;
-(void)performTransactionForSyndicationDeleteManager:(id)arg0 name:(char *)arg1 transaction:(id)arg2 ;
-(void)refreshAlbumCountForAlbumIDs:(id)arg0 ;
-(void)refreshImportSessionCountForImportSessionIDs:(id)arg0 ;
-(void)setICloudPhotosEnabledInternal:(BOOL)arg0 ;
-(void)shutdownLibraryWithDescription:(id)arg0 ;


@end


#endif