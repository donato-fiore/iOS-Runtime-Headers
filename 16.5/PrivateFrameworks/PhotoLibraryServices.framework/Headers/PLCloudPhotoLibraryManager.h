// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDPHOTOLIBRARYMANAGER_H
#define PLCLOUDPHOTOLIBRARYMANAGER_H

@class CPLLibraryManager, CPLStatus, CPLConfiguration, PLLazyObject, PFCoalescer, NSMutableArray, NSNumber, NSString, PLPhotoLibraryPathManager;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLCloudBatchUploader.h"
#import "PLCloudBatchDownloader.h"
#import "PLCloudPersistentHistoryChangeTracker.h"
#import "PLLibraryScopeChangeTracker.h"
#import "PLForegroundMonitor.h"
#import "PLCloudTaskManager.h"
#import "PLCloudInMemoryTaskManager.h"
#import "PLCloudPhotoLibraryUploadTracker.h"
#import "PLCloudPhotoLibraryUserSwitchHandler.h"
#import "PLBackgroundJobWorkerCoordinator.h"
#import "PLLibraryServicesManager.h"

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudPersistentHistoryChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling>

 {
    PLCloudBatchUploader *_uploader;
    PLCloudBatchDownloader *_downloader;
    PLCloudPersistentHistoryChangeTracker *_syncChangeTracker;
    PLLibraryScopeChangeTracker *_rulesChangeTracker;
    BOOL _wasRebuild;
    BOOL _hasAttemptedMigration;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLForegroundMonitor *_foregroundMonitor;
    NSUInteger _state;
    BOOL _checkEnableStateOnIdle;
    BOOL _icplEnabled;
    BOOL _pushOnIdle;
    BOOL _pullOnIdle;
    BOOL _stateChangePending;
    BOOL _hasSettledInitialBatch;
    NSInteger _libraryMode;
    CPLLibraryManager *_unsafe_cplLibrary;
    CPLStatus *_unsafe_cplStatus;
    CPLConfiguration *_cplConfiguration;
    int _pauseRequest;
    short _pauseReason;
    PLCloudTaskManager *_taskManager;
    PLLazyObject *_lazyResourceManager;
    PLLazyObject *_lazyRecoveryManager;
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
    NSObject<OS_dispatch_source> *_userUnpauseDispatchTimer;
    NSInteger _pendingResetSyncType;
    BOOL _initializedMaster;
    PFCoalescer *_uploadDownloadCountCoalescer;
    NSObject<OS_dispatch_queue> *_uploadDownloadCountQueue;
    NSUInteger _boundForUploadingPhotos;
    NSUInteger _boundForUploadingVideos;
    NSUInteger _boundForUploadingOtherItems;
    NSObject<OS_dispatch_source> *_workInProgressTimer;
    BOOL _significantWork;
    PLCloudInMemoryTaskManager *_inMemoryTaskManager;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLCloudPhotoLibraryUserSwitchHandler *_switchHandler;
    PLLazyObject *_lazyCacheDeleteSupport;
    NSMutableArray *_pushAllChangesCompletionHandlers;
    PLBackgroundJobWorkerCoordinator *_backgroundJobWorkerCoordinator;
    BOOL _pushingAllChanges;
    BOOL _didCallBlocksWaitingForLibraryOpen;
    NSMutableArray *_blocksWaitingForLibraryOpen;
    os_unfair_lock_s _waitForLibraryOpenLock;
    os_unfair_lock_s _cplLibraryLock;
    BOOL _isHandlingStatusChangesNotification;
    NSUInteger _statusChangesNotificationGeneration;
    BOOL _unsafe_readyForAnalysis;
    os_unfair_lock_s _numbersOfItemsLock;
    NSNumber *_numberOfPhotosToPush;
    NSNumber *_numberOfVideosToPush;
    NSNumber *_numberOfOtherItemsToPush;
    NSNumber *_numberOfPhotosDownloaded;
    NSNumber *_numberOfVideosDownloaded;
    NSNumber *_numberOfOtherItemsDownloaded;
    NSObject<OS_dispatch_queue> *_libraryScopeSynchronizationQueue;
    NSInteger _pendingDeviceLibraryConfiguration;
    NSMutableArray *_deviceLibraryConfigurationChangeCompletionHandlers;
    NSString *_scopeIdentifierToUnsharePendingAssetsFrom;
    BOOL _hasInitialSyncDate;
}


@property (copy, nonatomic, setter=_setIdleStateTransitionOneTimeAction:) id *_idleStateTransitionOneTimeAction; // ivar: __idleStateTransitionOneTimeAction
@property (readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, nonatomic) NSInteger currentResetSyncType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger deviceLibraryConfiguration; // ivar: _deviceLibraryConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PLLibraryServicesManager *libraryServicesManager; // ivar: _libraryServicesManager
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalNumberOfDeferredAssets;
@property (readonly, nonatomic) NSUInteger totalNumberOfUnpushedMasters;
@property (readonly, nonatomic) NSUInteger totalNumberOfUploadedMasters;
@property (readonly, nonatomic) NSUInteger totalSizeOfUnpushedOriginals;
@property (readonly, nonatomic) NSUInteger totalUploadedOriginalSize;


+(BOOL)needResetSyncErrorType:(id)arg0 ;
+(id)descriptionForResourceType:(NSUInteger)arg0 ;
-(BOOL)_canExternallyTransitionToNewLibraryStateIgnoringPause:(BOOL)arg0 ;
-(BOOL)_hasAvalancheIncomingWork;
-(BOOL)_hasIncomingWorkFileMarker;
-(BOOL)_hasItemToDownload;
-(BOOL)_isAssetsdNotReadyToAnswer;
-(BOOL)_isPausedForDownloadRequestHighPriority:(BOOL)arg0 ;
-(BOOL)_setupTimerForUnpause;
-(BOOL)connectToCloudChangeTracker;
-(BOOL)isConnectedToCloudChangeTracker;
-(BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg0 ;
-(BOOL)overrideSystemBudgetsForSyncSession:(BOOL)arg0 pauseReason:(id)arg1 forSystemBudgets:(NSUInteger)arg2 ;
-(NSInteger)sizeOfResourcesToUploadByCPL:(*id)arg0 ;
-(NSUInteger)_inq_numberOfOtherItemsToDownloadInLibrary:(id)arg0 ;
-(NSUInteger)_inq_numberOfOtherItemsToUploadInLibrary:(id)arg0 ;
-(NSUInteger)_inq_numberOfPhotosToDownloadInLibrary:(id)arg0 ;
-(NSUInteger)_inq_numberOfPhotosToUploadInLibrary:(id)arg0 ;
-(NSUInteger)_inq_numberOfVideosToDownloadInLibrary:(id)arg0 ;
-(NSUInteger)_inq_numberOfVideosToUploadInLibrary:(id)arg0 ;
-(id)_assetResourceForAsset:(id)arg0 resourceType:(NSUInteger)arg1 masterResourceOnly:(BOOL)arg2 isPhoto:(*BOOL)arg3 ;
-(id)_calculateUnpauseTimeForPauseTime:(id)arg0 ;
-(id)_convertToIdentifierMapFromCPLScopeIdentifierMap:(id)arg0 ;
-(id)_debugNameForState:(NSUInteger)arg0 ;
-(id)_fetchEventsFromCloudChangeTrackerInLibrary:(id)arg0 ;
-(id)_identifierForResource:(id)arg0 ;
-(id)_inMemoryTrackerStateForDebug;
-(id)cacheDeleteSupport;
-(id)cplConfiguration;
-(id)cplLibrary;
-(id)cplStatus;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)lastKnownCloudVersionFromDisk;
-(id)readCloudTrackerTokenObject;
-(id)readLocalVersion;
-(id)readMigrationMarker;
-(id)readRulesTrackerTokenObject;
-(id)recoveryManager;
-(id)resourceManager;
-(short)_placeHolderKindFromCPLResourceType:(NSUInteger)arg0 ;
-(struct CGSize )_targetSizeForInputSize:(struct CGSize )arg0 maxPixelSize:(NSUInteger)arg1 ;
-(void)_callBlocksWaitingForLibraryOpen;
-(void)_callDeviceLibraryConfigurationChangeRequestCompletionHandlersWithError:(id)arg0 ;
-(void)_callPushAllChangesCompletionHandlersIfNecessary;
-(void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg0 checkServerIfNecessary:(BOOL)arg1 urgency:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_checkEnableState;
-(void)_checkForPushedMastersInLibrary:(id)arg0 ;
-(void)_checkForWorkInProgress;
-(void)_checkIfSharedLibraryDedupeIsDisabled;
-(void)_constructUnpauseTimerFrom:(id)arg0 to:(id)arg1 ;
-(void)_createDeletionRecordsIfNecessary;
-(void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(BOOL)arg0 configurationChanged:(BOOL)arg1 ;
-(void)_doPause;
-(void)_doResetSync:(NSInteger)arg0 inLibrary:(id)arg1 ;
-(void)_doUnpause;
-(void)_downloadFromCloudInLibrary:(id)arg0 ;
-(void)_enableiCPL;
-(void)_fetchNewEventsFromCloudChangeTrackerInLibrary:(id)arg0 ;
-(void)_finishUploadWithNoBatchesToUploadInLibrary:(id)arg0 ;
-(void)_finishedUnsharingPendingAssetsSharedToScopeWithTransaction:(id)arg0 error:(id)arg1 ;
-(void)_fixMasterStatusIn:(id)arg0 inLibrary:(id)arg1 ;
-(void)_getStatusChanges:(id)arg0 transaction:(id)arg1 notificationGeneration:(NSUInteger)arg2 inLibrary:(id)arg3 ;
-(void)_getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg0 maximumCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_handleAccountFlagsChangeIfNecessary;
-(void)_handleFinalizeSessionError:(id)arg0 commitError:(id)arg1 uploadBatchContainer:(id)arg2 needResetSync:(BOOL)arg3 forTransaction:(id)arg4 inLibrary:(id)arg5 ;
-(void)_handleOptimizeSettingChange;
-(void)_handleOptimizeSettingChangeInLibrary:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_handleStateTransistionAfterDisableiCPL;
-(void)_initCPLLibraryMode;
-(void)_initCacheDeleteSupport;
-(void)_initDeviceLibraryConfiguration;
-(void)_initRecoveryManager;
-(void)_initResourceManager;
-(void)_initializeMasterAndSizeCalculationinLibrary:(id)arg0 ;
-(void)_linkFileFrom:(id)arg0 to:(id)arg1 ;
-(void)_markResourceObjectIDsAsPurgeable:(id)arg0 urgency:(NSInteger)arg1 inLibrary:(id)arg2 ;
-(void)_migrateFromChangeHubToCoreDataIfNecessary;
-(void)_notifyComputeCacheManagerWithCPLStatus:(id)arg0 andCPLConfiguration:(id)arg1 ;
-(void)_openCPLLibrary;
-(void)_pause;
-(void)_processDownloadBatchWithSession:(id)arg0 inLibrary:(id)arg1 ;
-(void)_processNextTransaction;
-(void)_processRulesEvaluationIfNeeded;
-(void)_processUploadBatchInLibrary:(id)arg0 ;
-(void)_processUploadBatchWithStartupFailureCount:(NSUInteger)arg0 inLibrary:(id)arg1 ;
-(void)_promptForCameraCaptureSettingChangeWithReason:(int)arg0 ;
-(void)_reportOptimizeSettingChangeWithCompletionHandler:(id)arg0 ;
-(void)_repushAssetsWithImportedByBundleIdentifier;
-(void)_repushMasterWithMissingMediaMetadata;
-(void)_repushVideoAssetsMetadata;
-(void)_resetCPLLibrary;
-(void)_resetCacheDeleteSupport;
-(void)_resetDidCallBlocksWaitingForLibraryOpen;
-(void)_resetResourceManager;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg0 afterDelay:(CGFloat)arg1 block:(id)arg2 ;
-(void)_runAsyncOnIsolationQueueWithTransaction:(id)arg0 block:(id)arg1 ;
-(void)_runOnLibraryOpenWithTransaction:(id)arg0 block:(id)arg1 ;
-(void)_runOneTimeMigrationStepsIfNecessaryInLibrary:(id)arg0 ;
-(void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
-(void)_runSyncOnIsolationQueueWithBlock:(id)arg0 ;
-(void)_setReadyForAnalysisWithCPLStatus:(id)arg0 ;
-(void)_setToDownloadCountsForImages:(NSUInteger)arg0 videos:(NSUInteger)arg1 ;
-(void)_setupPLCPLPlistInLibrary:(id)arg0 ;
-(void)_startWorkInProgressTimer;
-(void)_stopUnpauseTimer;
-(void)_stopWorkInProgressTimer;
-(void)_transitionToState:(NSUInteger)arg0 ;
-(void)_unpause;
-(void)_unshareBatchOfPendingAssetsSharedToScopeWithTransaction:(id)arg0 ;
-(void)_updateAsset:(id)arg0 withImageFileURL:(id)arg1 ;
-(void)_updateLocalStaleResourceWithCPLResource:(id)arg0 inLibrary:(id)arg1 ;
-(void)_updatePendingResetSyncDate;
-(void)_updateThumbnailDataForAsset:(id)arg0 withImageFileURL:(id)arg1 ;
-(void)_updateTransferCountsInLibrary:(id)arg0 ;
-(void)_updateWithCPLResource:(id)arg0 isHighPriority:(BOOL)arg1 inLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(void)_uploadFullPhotoLibraryToCloud:(id)arg0 ;
-(void)_uploadToCloudForEventsResult:(id)arg0 inLibrary:(id)arg1 ;
-(void)acceptCPLShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)activateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginsSignificantWorkWithResourcesSize:(NSUInteger)arg0 ;
-(void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)clearPrefetchState;
-(void)clearPurgeableResourcesMatchingPredicate:(id)arg0 inLibrary:(id)arg1 completionHandler:(id)arg2 ;
-(void)cloudChangeTrackerDidReceiveChangesWithTransaction:(id)arg0 ;
-(void)configurationDidChange:(id)arg0 ;
-(void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(id)arg0 ;
-(void)deactivateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deleteResources:(id)arg0 checkServerIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
-(void)disableiCPLWithCompletionHandler:(id)arg0 ;
// -(void)downloadAsset:(id)arg0 resourceType:(NSUInteger)arg1 masterResourceOnly:(BOOL)arg2 highPriority:(BOOL)arg3 clientBundleID:(id)arg4 proposedTaskIdentifier:(id)arg5 taskDidBeginHandler:(id)arg6 progressBlock:(unk)arg7 completionHandler:(id)arg8  ;
// -(void)downloadResource:(id)arg0 highPriority:(BOOL)arg1 clientBundleID:(id)arg2 proposedTaskIdentifier:(id)arg3 taskDidBeginHandler:(id)arg4 progressBlock:(unk)arg5 completionHandler:(id)arg6  ;
// -(void)downloadResource:(id)arg0 options:(id)arg1 clientBundleID:(id)arg2 proposedTaskIdentifier:(id)arg3 taskDidBeginHandler:(id)arg4 progressBlock:(unk)arg5 completionHandler:(id)arg6  ;
// -(void)downloadResourceInMemory:(id)arg0 proposedTaskIdentifier:(id)arg1 taskDidBeginHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)downloadResourceInMemoryForAsset:(id)arg0 resourceType:(NSUInteger)arg1 masterResourceOnly:(BOOL)arg2 proposedTaskIdentifier:(id)arg3 taskDidBeginHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)dumpStatusIncludingDaemon:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)enableiCPLWithCompletionHandler:(id)arg0 ;
-(void)endUserSessionWithCompletionHandler:(id)arg0 ;
-(void)endsSignificantWork;
-(void)fetchAdjustmentDataForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchResourcesForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchShareFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceSyncMomentSharesWithScopeIdentifiers:(id)arg0 ;
-(void)foregroundMonitor:(id)arg0 changedStateToForeground:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)getCPLStateForDebug:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getCloudScopedIdentifiersForLocalIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getReadyForAnalysisWithCompletionHandler:(id)arg0 ;
-(void)getStreamingURLForAsset:(id)arg0 resourceType:(NSUInteger)arg1 intent:(NSUInteger)arg2 hints:(id)arg3 timeRange:(struct ? )arg4 clientBundleID:(id)arg5 completionHandler:(id)arg6 ;
-(void)getSystemBudgetsWithCompletionHandler:(id)arg0 ;
-(void)getUUIDsForCloudIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)invalidateCacheDeleteSupport;
-(void)invalidateRecoveryManager;
-(void)invalidateResourceManager;
-(void)invalidateUploadDownloadCountCoalescer;
-(void)libraryManager:(id)arg0 backgroundDownloadDidFailForResource:(id)arg1 ;
-(void)libraryManager:(id)arg0 backgroundDownloadDidFinishForResource:(id)arg1 ;
-(void)libraryManager:(id)arg0 downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg0 downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg0 downloadDidStartForResourceTransferTask:(id)arg1 ;
-(void)libraryManager:(id)arg0 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg0 provideLocalResource:(id)arg1 recordClass:(Class)arg2 completionHandler:(id)arg3 ;
-(void)libraryManager:(id)arg0 pushAllChangesWithCompletionHandler:(id)arg1 ;
-(void)libraryManager:(id)arg0 uploadDidFinishForResourceTransferTask:(id)arg1 withError:(id)arg2 ;
-(void)libraryManager:(id)arg0 uploadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg0 uploadDidStartForResourceTransferTask:(id)arg1 ;
-(void)libraryManagerDidChangeConfiguration:(id)arg0 ;
-(void)libraryManagerDidStartSynchronization:(id)arg0 ;
-(void)libraryManagerHasChangesToPull:(id)arg0 ;
-(void)libraryManagerHasStatusChanges:(id)arg0 ;
-(void)libraryManagerStatusDidChange:(id)arg0 ;
-(void)markPurgeableResourcesMatchingPredicate:(id)arg0 urgency:(NSInteger)arg1 inLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(void)performTransactionOnLibraryScopeSynchronizationQueue:(id)arg0 ;
-(void)photosPreferencesChanged;
-(void)publishCPLScopeChange:(id)arg0 completionHandler:(id)arg1 ;
-(void)publishLibraryScopeWithCPLShare:(id)arg0 title:(id)arg1 completionHandler:(id)arg2 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeParticipantsWithParticipantUUIDs:(id)arg0 fromLibraryScopeWithIdentifier:(id)arg1 retentionPolicy:(NSInteger)arg2 exitSource:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)reportMiscInformation:(id)arg0 ;
-(void)requestDeviceLibraryConfigurationChange:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetSyncDueToMigrationMarker;
-(void)saveCloudTrackerTokenObject:(id)arg0 ;
-(void)saveLastKnownCloudChangeTrackerTokenToDisk;
-(void)saveRulesTrackerTokenObject:(id)arg0 ;
-(void)sendBudgetOverrideAnalytics:(BOOL)arg0 pauseReason:(id)arg1 ;
-(void)setCPLConfiguration:(id)arg0 ;
-(void)setCPLLibrary:(id)arg0 ;
-(void)setCPLStatus:(id)arg0 ;
-(void)setLocalVersion:(id)arg0 ;
-(void)setMigratedLocalVersion:(id)arg0 ;
-(void)setMigrationMarker:(id)arg0 ;
-(void)setPause:(BOOL)arg0 reason:(short)arg1 ;
-(void)sharedLibraryRampCheckWithCompletionHandler:(id)arg0 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg0 ;
-(void)startAssetRecoveryWithTransaction:(id)arg0 ;
-(void)startAutomaticPrefetchOrPrune;
-(void)startExitFromLibraryScopeWithIdentifier:(id)arg0 retentionPolicy:(NSInteger)arg1 exitSource:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)startLibraryScopeRulesChangeTracker;
-(void)startUnsharingPendingAssetsSharedToScopeWithIdentifier:(id)arg0 ;
-(void)statusDidChange:(id)arg0 ;
-(void)stopLibraryScopeRulesChangeTracker;
-(void)sync;
-(void)updateLibraryScopeWithCPLScopeChange:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateTransferCountsWithInsertedPhotoCount:(NSUInteger)arg0 insertedVideoCount:(NSUInteger)arg1 inLibrary:(id)arg2 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg0 ;


@end


#endif