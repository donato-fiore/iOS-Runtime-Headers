// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTUILOGGER_H
#define AVTUILOGGER_H

@class NSString;
@protocol AVTUILogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface AVTUILogger : NSObject <AVTUILogger>



@property (readonly, nonatomic) NSObject<OS_os_log> *backendLog; // ivar: _backendLog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_os_log> *generalLog; // ivar: _generalLog
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *interactionLog; // ivar: _interactionLog
@property (readonly) Class superclass;


-(id)init;
-(void)checkingAccountInfo:(id)arg0 ;
-(void)checkingIn:(id)arg0 ;
-(void)copyingStorageAside:(id)arg0 ;
-(void)deletingRecords:(id)arg0 ;
-(void)deletingStickerRecentsForRemoteChanges:(id)arg0 ;
-(void)duplicatingRecords:(id)arg0 ;
-(void)exportingRecords:(id)arg0 ;
-(void)fetchingRecords:(id)arg0 ;
-(void)importingRecords:(id)arg0 ;
-(void)logAVTViewCancelingRenderingAvatar:(id)arg0 ;
-(void)logAVTViewDidRenderAvatar:(id)arg0 currentAvatar:(id)arg1 ;
-(void)logAVTViewDidRenderCurrentAvatar:(id)arg0 ;
-(void)logAVTViewSetAvatar:(id)arg0 ;
-(void)logAccountInfo:(id)arg0 status:(NSInteger)arg1 deviceToDeviceEncryption:(BOOL)arg2 ;
-(void)logAnalysisServiceCheckingIn:(id)arg0 ;
-(void)logAnalysisServiceDidNotProcessState:(id)arg0 ;
-(void)logAnalysisServiceDidRun;
-(void)logAnalysisServiceWillRun;
-(void)logAvatarPreloadBeginForIdentifier:(id)arg0 ;
-(void)logAvatarPreloadEnd;
-(void)logAvatarsDaemonClientChecksIn:(int)arg0 ;
-(void)logAvatarsDaemonClientConnectionInterrupted;
-(void)logAvatarsDaemonClientConnectionInvalidated;
-(void)logAvatarsDaemonReceivesIncomingConnection;
-(void)logAvatarsdExitingWithReason:(id)arg0 ;
-(void)logBackendVersionMismatch:(id)arg0 actual:(id)arg1 ;
-(void)logCancelTransition:(id)arg0 ;
-(void)logCancelingPreLoadingTask:(id)arg0 ;
-(void)logCancellingCleanupBlock;
-(void)logCarouselAddsTransitionToCoordinator:(id)arg0 ;
-(void)logCarouselCellStartUsingLiveView:(id)arg0 associatedTransition:(id)arg1 ;
-(void)logCarouselCellStopUsingLiveView:(id)arg0 associatedTransition:(id)arg1 ;
-(void)logCarouselChangesCenterItemTo:(id)arg0 ;
-(void)logCarouselChangingToMultiMode;
-(void)logCarouselChangingToSingleMode;
-(void)logCarouselDelegateDidFocusRecord:(id)arg0 ;
-(void)logCarouselDelegateDidUpdateRecord:(id)arg0 ;
-(void)logCarouselDelegateNearnessFactorDidChange:(CGFloat)arg0 towardRecord:(BOOL)arg1 editable:(BOOL)arg2 ;
-(void)logCarouselDelegateWillEndFocusRecord:(id)arg0 ;
-(void)logCarouselEndsDraggingWithVelocity:(CGFloat)arg0 willSwitchIndexPathInsteadOfScrollBack:(BOOL)arg1 forHighVelocity:(BOOL)arg2 ;
-(void)logCarouselErrorGettingFrameForElementAtIndex:(NSUInteger)arg0 ;
-(void)logCarouselSnapshotForIndex:(NSUInteger)arg0 size:(struct CGSize )arg1 ;
-(void)logCarouselStopsFocusingOnCenterItem:(id)arg0 withCell:(id)arg1 ;
-(void)logCarouselTransitionCenterItem:(id)arg0 withCell:(id)arg1 ;
-(void)logChangesRequireExport;
-(void)logChangesRequireThumbnailUpdate;
-(void)logCheckingIfMigrationNeeded;
-(void)logCleanupTimerComplete;
-(void)logCoalesceableEventOccured:(id)arg0 ;
-(void)logCouldntFindRecordIdentifierForChangeType:(NSInteger)arg0 managedObjectID:(id)arg1 ;
-(void)logCreatingBackendDBAtPath:(id)arg0 ;
-(void)logCreatingBackendFolderAtPath:(id)arg0 ;
-(void)logCreatingImageStoreForPath:(id)arg0 ;
-(void)logCreatingStore:(id)arg0 ;
-(void)logCurrentHistoryTokenFileDoesntExist:(id)arg0 ;
-(void)logDebug:(id)arg0 ;
-(void)logDecrementingRemoteRendererTransactionCount:(NSInteger)arg0 ;
-(void)logDeduplicateRecordWithIdentifier:(id)arg0 toNewRecordWithIdentifier:(id)arg1 ;
-(void)logDeletingImagesWithIdentifierPrefix:(id)arg0 ;
-(void)logDeletingRecordWithIdentifier:(id)arg0 ;
-(void)logDeletingStickerRecents;
-(void)logDidFinishEditingWithError:(id)arg0 ;
-(void)logDidFinishEditingWithSuccess;
-(void)logDidResetZoneWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)logDiscoveredDuplicates:(id)arg0 count:(NSUInteger)arg1 ;
-(void)logDispatchingRemoteChangeWithTransactionCount:(NSUInteger)arg0 handlersCount:(NSUInteger)arg1 ;
-(void)logDonePreLoadingPreset:(id)arg0 task:(id)arg1 ;
-(void)logDonePreLoadingThumbnailForPreLoadingTask:(id)arg0 ;
-(void)logDroppingUnsupportedAvatarRecord:(id)arg0 ;
-(void)logDuplicatingRecordWithIdentifier:(id)arg0 ;
-(void)logErrorAddingPersistentStore:(id)arg0 ;
-(void)logErrorCopyingStorageAside:(id)arg0 ;
-(void)logErrorCreatingBackendContent:(id)arg0 ;
-(void)logErrorDeletingMigratedContent:(id)arg0 ;
-(void)logErrorDeletingSomeThumbnail:(id)arg0 ;
-(void)logErrorDeletingThumbnailsForIdentifier:(id)arg0 error:(id)arg1 ;
-(void)logErrorDuplicatingThumbnailsForIdentifier:(id)arg0 error:(id)arg1 ;
-(void)logErrorFetchingChangeHistory:(id)arg0 ;
-(void)logErrorFetchingRecentStickers:(id)arg0 ;
-(void)logErrorFetchingRecords:(id)arg0 ;
-(void)logErrorGettingAccountInfo:(id)arg0 ;
-(void)logErrorGettingAvatarsDaemonClientProxy:(id)arg0 ;
-(void)logErrorGettingChangedRecordsContentForIdentifiers:(id)arg0 error:(id)arg1 ;
-(void)logErrorLoadingTemplates:(id)arg0 ;
-(void)logErrorMergingCopiedAsideContent:(id)arg0 ;
-(void)logErrorMigratingBackupInclusionStatus:(id)arg0 ;
-(void)logErrorMitigatingDuplicates:(id)arg0 ;
-(void)logErrorPinningContextToCurrentQueryGenerationToken:(id)arg0 ;
-(void)logErrorProcessingChangeTransactionsToUpdateThumbnails:(id)arg0 ;
-(void)logErrorReadingCurrentHistoryToken:(id)arg0 ;
-(void)logErrorRemovingStoreFolder:(id)arg0 ;
-(void)logErrorSandboxInit:(char *)arg0 ;
-(void)logErrorSavingChangeToken:(id)arg0 location:(id)arg1 ;
-(void)logErrorSavingRecentSticker:(id)arg0 ;
-(void)logErrorSettingUpStore:(id)arg0 ;
-(void)logErrorSettingUserDirSuffixForSandbox:(int)arg0 ;
-(void)logErrorSnapshottingAVTView:(id)arg0 ;
-(void)logErrorStartingServer:(id)arg0 ;
-(void)logErrorTearingDownCoreDataStack:(id)arg0 ;
-(void)logErrorUpdatingBackupInclusionStatus:(id)arg0 ;
-(void)logErrorUpdatingBodyCarouselVisibleCellAtIndexPath:(id)arg0 ;
-(void)logErrorUpdatingRecordsForMigration:(id)arg0 ;
-(void)logErrorUpdatingVersion:(id)arg0 ;
-(void)logErrorWhileMigratingBackend:(id)arg0 ;
-(void)logExportRequestResult:(BOOL)arg0 error:(id)arg1 ;
-(void)logFailedToGenerateStickerInService:(id)arg0 ;
-(void)logFetchedOrphanedRecentSticker:(id)arg0 ;
-(void)logFetchedRecentStickerWithNoStickerConfiguration:(id)arg0 ;
-(void)logFetchedRecords:(NSUInteger)arg0 criteria:(NSInteger)arg1 ;
-(void)logFileSystemError:(id)arg0 ;
-(void)logFoundExistingRecordDuringMigration;
-(void)logFoundExistingRecordDuringMigration:(id)arg0 ;
-(void)logFoundRecordIdentifier:(id)arg0 changeType:(NSInteger)arg1 managedObjectID:(id)arg2 ;
-(void)logGeneratingImageError:(id)arg0 ;
-(void)logGeneratingImageForRecord:(id)arg0 scope:(id)arg1 type:(NSInteger)arg2 ;
-(void)logGeneratingImageInServiceForRecord:(id)arg0 ;
-(void)logGenericSandboxError:(id)arg0 error:(int)arg1 ;
-(void)logImageRenderServiceConnectionError:(id)arg0 ;
-(void)logImageStoreBeginSavingImageForPath:(id)arg0 ;
-(void)logImageStoreCacheHitForItemDescription:(id)arg0 sizeCost:(NSUInteger)arg1 ;
-(void)logImageStoreCacheMiss:(id)arg0 ;
-(void)logImageStoreDoneInServiceForPath:(id)arg0 ;
-(void)logImageStoreDoneSavingImageForPath:(id)arg0 ;
-(void)logImageStoreFailedInServiceForPath:(id)arg0 error:(id)arg1 ;
-(void)logImageStoreSavingError:(id)arg0 code:(NSInteger)arg1 ;
-(void)logImportRequestResult:(BOOL)arg0 error:(id)arg1 ;
-(void)logInMemoryCacheEvictsResource:(id)arg0 ;
-(void)logInMemoryCacheHitForResource:(id)arg0 ;
-(void)logInMemoryCacheStorageForResource:(id)arg0 ;
-(void)logIncrementingRemoteRendererTransactionCount:(NSInteger)arg0 ;
-(void)logInspectingChangesForExportAfterToken:(id)arg0 ;
-(void)logLookingUpPreLoadedPreset:(id)arg0 task:(id)arg1 ;
-(void)logMaintenanceCompleted;
-(void)logMigratingSource:(id)arg0 ;
-(void)logMigrationXPCActivityFinished;
-(void)logMirroringRequestErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
-(void)logMissingResetSyncReasonKey;
-(void)logMissingTombstonedIdentifier;
-(void)logNilImageReturnedFromAVTAvatarRecordImageProvider;
-(void)logNilImageReturnedFromAVTUIStickerRenderer;
-(void)logNoAvatarPreset:(id)arg0 ;
-(void)logNoProxyToAvatarsDaemon;
-(void)logNotImportingOnLaunchWithRemainingTime:(CGFloat)arg0 ;
-(void)logNotificationDoesntContainChangeHistoryToken;
-(void)logPaddleViewVideoPlayerFailed:(id)arg0 ;
-(void)logParsingMetadataDefinitions;
-(void)logParsingMetadataDefinitionsError:(id)arg0 ;
-(void)logPerformTransition:(id)arg0 ;
-(void)logPerformedRecentStickersMigration:(BOOL)arg0 ;
-(void)logPersistentChangeNotOfInterest:(id)arg0 ;
-(void)logPostingChangeNotificationForIdentifiers:(id)arg0 ;
-(void)logPreLoadingNeededForIndex:(NSUInteger)arg0 section:(NSUInteger)arg1 ;
-(void)logPreLoadingPreset:(id)arg0 task:(id)arg1 ;
-(void)logPushConnectionReceivedPublicToken:(id)arg0 ;
-(void)logPushConnectionReceivedToken:(id)arg0 topic:(id)arg1 identifier:(id)arg2 ;
-(void)logPushNotificationReceivedForTopic:(id)arg0 payload:(id)arg1 ;
-(void)logReadingBackendAtPath:(id)arg0 ;
-(void)logReadingError:(id)arg0 ;
-(void)logReceivedRemoteChange:(id)arg0 ;
-(void)logRecordsNotFoundInAnyStore:(id)arg0 ;
-(void)logRecordsNotFoundInPuppetStore:(id)arg0 ;
-(void)logRecordsNotFoundInRecordStore:(id)arg0 ;
-(void)logRenderingConfiguration:(id)arg0 ;
-(void)logRenderingModelColor:(id)arg0 ;
-(void)logRenderingModelPreset:(id)arg0 ;
-(void)logRenderingRecord:(id)arg0 size:(struct CGSize )arg1 ;
-(void)logRenderingStickerEnd:(id)arg0 ;
-(void)logRenderingStickerStart:(id)arg0 forRecord:(id)arg1 ;
-(void)logRequestedAnimojiSticker:(id)arg0 ;
-(void)logRequestingPreLoadingTask:(id)arg0 forIndex:(NSUInteger)arg1 section:(NSUInteger)arg2 ;
-(void)logRequestingThumbnailForIndex:(NSUInteger)arg0 section:(id)arg1 ;
-(void)logResetSyncReason:(NSUInteger)arg0 ;
-(void)logRetrievingSnapshotInServiceForPath:(id)arg0 ;
-(void)logSavingBackend;
-(void)logSavingError:(id)arg0 ;
-(void)logSchedulingImport;
-(void)logSchedulingUpdateThumbnails;
-(void)logSetupHandlerCompletedForTransition:(id)arg0 state:(NSInteger)arg1 finished:(BOOL)arg2 ;
-(void)logSetupSchedulingExport;
-(void)logSetupSchedulingImport;
-(void)logSetupSchedulingMigrationCheck;
-(void)logSetupUserDataImportCheck;
-(void)logSetupUserHasNoMemojiData;
-(void)logSetupUserImportAttempting:(NSInteger)arg0 ;
-(void)logSetupUserImportFailedToRemoveFileWithError:(id)arg0 ;
-(void)logSetupUserImportFailedToUnarchiveDataAtPath:(id)arg0 errorDescription:(id)arg1 ;
-(void)logSetupUserImportSaveError:(id)arg0 ;
-(void)logSingleModeCantSnapshotForLackOfWindow;
-(void)logSingleModeControllerStartUsingLiveView:(id)arg0 ;
-(void)logSingleModeControllerStopUsingLiveView:(id)arg0 ;
-(void)logSkippedFetchingRecordsWithReason:(id)arg0 ;
-(void)logSnapshotReturnedImage:(id)arg0 ;
-(void)logStartObservingRemoteChangeNotificationFrom:(id)arg0 ;
-(void)logStartObservingResetSync;
-(void)logStartTransition:(id)arg0 state:(NSInteger)arg1 ;
-(void)logStartingPreLoadingTask:(id)arg0 ;
-(void)logStartingServer;
-(void)logStickerGeneratorPoolDidntHaveAvailableGenerator:(NSInteger)arg0 maxCount:(NSInteger)arg1 ;
-(void)logStickerSchedulerAddedTask:(id)arg0 taskCount:(NSInteger)arg1 ;
-(void)logStickerSchedulerCancelledAllTasks;
-(void)logStickerSchedulerCancelledStickerSheetTasksForIdentifier:(id)arg0 ;
-(void)logStickerSchedulerCancelledTask:(id)arg0 ;
-(void)logStickerSchedulerStartedTask:(id)arg0 forSchedulerRule:(id)arg1 ;
-(void)logStickerViewSnapshotForBounds:(id)arg0 offset:(struct CGPoint )arg1 ;
-(void)logSyncEnabled;
-(void)logTearingDownCoreDataStack:(id)arg0 ;
-(void)logThrottlingAVTView;
-(void)logTimedOutWaitingForSnapshotInService:(id)arg0 ;
-(void)logToLivePoseTransitionBegins:(id)arg0 ;
-(void)logToLivePoseTransitionEnds:(id)arg0 ;
-(void)logTooManyAvatars:(NSUInteger)arg0 limit:(NSUInteger)arg1 ;
-(void)logTrackerProcessingChanges:(id)arg0 count:(NSUInteger)arg1 from:(id)arg2 ;
-(void)logTransactionHasChangesButNoToken;
-(void)logTransition:(id)arg0 state:(NSUInteger)arg1 reachedStage:(NSUInteger)arg2 ;
-(void)logUnableToCreatePushConnection:(id)arg0 ;
-(void)logUnableToReadRemoteRecord:(id)arg0 isCritical:(BOOL)arg1 ;
-(void)logUnthrottlingAVTView;
-(void)logUpdatingBackupExclusionStatus:(BOOL)arg0 ;
-(void)logUpdatingLiveAvatarWithConfiguration:(id)arg0 ;
-(void)logUpdatingThumbnails;
-(void)logUsageTrackingBigDifferencesClusterCount:(NSUInteger)arg0 ;
-(void)logUsageTrackingRecordCount:(NSUInteger)arg0 ;
-(void)logUsageTrackingSmallDifferencesClusterCount:(NSUInteger)arg0 ;
-(void)logUserRequestedBackupXPCActivityFinished;
-(void)logWarningNoHOME;
-(void)logWillResetZone;
-(void)migratingPersistedContent:(id)arg0 ;
-(void)performingMigrationXPCActivity:(id)arg0 ;
-(void)performingUserRequestedBackupActivity:(id)arg0 ;
-(void)postingAvatarStoreChangeNotification:(id)arg0 ;
-(void)processingDidResetSyncNotification:(id)arg0 ;
-(void)processingRemoteChangeNotification:(id)arg0 ;
-(void)processingWillResetSyncNotification:(id)arg0 ;
-(void)restoringStorage:(id)arg0 ;
-(void)runningMaintenance:(id)arg0 ;
-(void)savingChangeTrackerToken:(id)arg0 ;
-(void)savingRecords:(id)arg0 ;
-(void)settingUpStore:(id)arg0 ;
-(void)updatingThumbnailsForRemoteChanges:(id)arg0 ;


@end


#endif