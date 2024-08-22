// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDANALYTICSSUBMISSIONCOORDINATOR_H
#define HDANALYTICSSUBMISSIONCOORDINATOR_H

@class HKObserverSet<HDAnalyticsSubmissionCoordinatorDelegate>, _HKExpiringCompletionTimer, NSString;
@protocol HDPeriodicActivityDelegate, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDPeriodicActivity.h"

@interface HDAnalyticsSubmissionCoordinator : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver>

 {
    HDDaemon *_daemon;
    HDPeriodicActivity *_periodicActivity;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDAnalyticsSubmissionCoordinatorDelegate> *_observers;
    _HKExpiringCompletionTimer *_periodicActivityCompletionTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKObserverSet<HDAnalyticsSubmissionCoordinatorDelegate> *unitTest_dailyAnalyticsObservers;


-(BOOL)isEventUsed:(id)arg0 ;
-(BOOL)isImprovedHealthAndActivityEnabled;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(id)_createHealthStoreForProfileIdentifier:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 ;
-(void)_logFaultForTimedOutObservers:(id)arg0 timeoutSeconds:(CGFloat)arg1 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)attachments_reportDailyAnalytics:(id)arg0 ;
-(void)attachments_reportDailyCloudAnalytics:(id)arg0 ;
-(void)authorization_reportAuthRequestPromptedForBundleIdentifer:(id)arg0 profileType:(NSInteger)arg1 ;
-(void)authorization_reportAuthRequestsFromBundleIdentifier:(id)arg0 isExtension:(BOOL)arg1 isAppleWatch:(BOOL)arg2 shouldPrompt:(BOOL)arg3 ;
-(void)cloudCache_reportCacheDiscrepancyForOperation:(id)arg0 reason:(id)arg1 containerIdentifier:(id)arg2 databaseScope:(id)arg3 error:(id)arg4 ;
-(void)cloudCache_reportCacheFetchAndUpdateAnalyticsForPipeline:(id)arg0 changedZonesCount:(NSInteger)arg1 deletedZonesCount:(NSInteger)arg2 changedRecordsCount:(NSInteger)arg3 deletedRecordsCount:(NSInteger)arg4 ;
-(void)cloudCache_reportCacheSyncAnalyticsForPipeline:(id)arg0 operationCount:(NSInteger)arg1 ;
-(void)cloudCache_reportDailyCacheAnalyticsWithPushTargets:(NSInteger)arg0 pullTargets:(NSInteger)arg1 sharedDBSummarySharingZones:(NSInteger)arg2 privateDBSummarySharingZones:(NSInteger)arg3 unifiedZoneInSharedDB:(BOOL)arg4 unifiedZoneInPrivateDB:(BOOL)arg5 ;
-(void)cloudCache_reportWeeklyAnalyticsWithCacheValidation:(id)arg0 ;
-(void)cloudSync_operationFailed:(id)arg0 error:(id)arg1 ;
-(void)cloudSync_operationFinished:(id)arg0 ;
-(void)cloudSync_operationStarted:(id)arg0 ;
-(void)cloudSync_reportDailyAnalyticForProfileType:(NSInteger)arg0 syncEnabled:(BOOL)arg1 syncDisabledError:(id)arg2 primaryContainer:(id)arg3 restoreComplete:(BOOL)arg4 timeSinceRestoreStart:(id)arg5 journalSize:(id)arg6 timeSinceLastSuccessfulPull:(id)arg7 timeSinceLastSuccessfulPush:(id)arg8 timeSinceLastPushForwardProgress:(id)arg9 storeCount:(NSInteger)arg10 zoneCount:(NSInteger)arg11 hasUnifiedZone:(BOOL)arg12 hasMasterZone:(BOOL)arg13 hasMedicalID:(BOOL)arg14 errorRequiringUserAction:(id)arg15 ;
-(void)cloudSync_reportMissingManateeIdentityDuringFetchInContainer:(id)arg0 zoneName:(id)arg1 databaseScope:(NSInteger)arg2 ;
-(void)cloudSync_reportOwnershipChangeForMissingManateeIdentityDuringPush;
-(void)cloudSync_reportOwnershipChangeForProfile:(id)arg0 reason:(id)arg1 ;
-(void)cloudSync_reportPeriodicSyncFailureWithError:(id)arg0 duration:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(void)cloudSync_reportPeriodicSyncStartForType:(NSInteger)arg0 ;
-(void)cloudSync_reportPeriodicSyncSuccessAfterDuration:(CGFloat)arg0 type:(NSInteger)arg1 ;
-(void)cloudSync_reportPipelineFailed:(id)arg0 error:(id)arg1 ;
-(void)cloudSync_reportPipelineFinished:(id)arg0 ;
-(void)cloudSync_reportPipelineStarted:(id)arg0 ;
-(void)cloudSync_reportRebaseTriggeredByDeletionByUser:(BOOL)arg0 ;
-(void)cloudSync_reportRestoreForProfile:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 duration:(CGFloat)arg3 finishedJournalMerge:(BOOL)arg4 ;
-(void)database_reportCachedQueryEvent:(id)arg0 cacheHits:(NSInteger)arg1 cacheMisses:(NSInteger)arg2 estimatedTotalBuckets:(NSUInteger)arg3 ;
-(void)database_reportDatabaseMigrationStatus:(NSInteger)arg0 database:(id)arg1 schemaVersion:(NSInteger)arg2 error:(id)arg3 profileType:(NSInteger)arg4 ;
-(void)database_reportHFDCorruptionWithFailureType:(NSInteger)arg0 code:(int)arg1 description:(id)arg2 profile:(id)arg3 initialRebuildStage:(int)arg4 newRebuildStage:(int)arg5 ;
-(void)database_reportHFDRebuildWithDuration:(CGFloat)arg0 didDecompressArchivedHFD:(BOOL)arg1 didOpenArchivedHFD:(BOOL)arg2 didOpenMovedAsideHFD:(BOOL)arg3 additionalAnalytics:(id)arg4 ;
-(void)database_reportJournalEntryInsertedForJournal:(NSInteger)arg0 entryClass:(id)arg1 entrySize:(id)arg2 ;
-(void)database_reportSQLiteCorruptionWithExtendedErrorCode:(int)arg0 type:(NSInteger)arg1 profile:(id)arg2 description:(id)arg3 sqlStatement:(id)arg4 failedObliterationAttempt:(BOOL)arg5 ;
-(void)database_reportUnprotectedDatabaseIdentifier:(id)arg0 doesNotMatchProtectedDatabaseIdentifier:(id)arg1 ;
-(void)healthService_reportCountForAllServices:(id)arg0 profileType:(NSInteger)arg1 ;
-(void)healthService_reportServiceType:(id)arg0 duration:(CGFloat)arg1 profileType:(NSInteger)arg2 ;
-(void)healthService_reportServiceTypeAdded:(id)arg0 profileType:(NSInteger)arg1 ;
-(void)healthService_reportServiceTypeRemoved:(id)arg0 profileType:(NSInteger)arg1 ;
-(void)heartDaily_reportHeartDailyAnalytics:(id)arg0 ;
-(void)heartRate_reportDailyRestingHeartRate:(CGFloat)arg0 sedentaryHeartRateCount:(int)arg1 filteredSedentaryHeartRateCount:(int)arg2 profileType:(NSInteger)arg3 ;
-(void)medicalID_dailyReport:(id)arg0 sosContactStatus:(BOOL)arg1 profileType:(NSInteger)arg2 ;
-(void)medicalID_reportHasBeenDeletedForProfileType:(NSInteger)arg0 ;
-(void)medicalID_reportHasBeenSetForProfileType:(NSInteger)arg0 ;
-(void)nanoSync_reportResponseStatusCode:(int)arg0 profileType:(NSInteger)arg1 ;
-(void)nanoSync_reportSyncFailureWithReason:(id)arg0 options:(NSUInteger)arg1 duration:(CGFloat)arg2 profileType:(NSInteger)arg3 error:(id)arg4 ;
-(void)nanoSync_reportSyncSuccessWithReason:(id)arg0 options:(NSUInteger)arg1 duration:(CGFloat)arg2 profileType:(NSInteger)arg3 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sendDailyAnalyticsWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)sendEvent:(id)arg0 block:(id)arg1 ;
-(void)summarySharing_reportDailyAnalytics:(id)arg0 activeWatchProductType:(id)arg1 age:(NSInteger)arg2 sex:(id)arg3 ;
-(void)summarySharing_reportSetupOperation:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)tinker_pairingDidFailWithError:(id)arg0 configuration:(id)arg1 duration:(CGFloat)arg2 stage:(NSInteger)arg3 ;
-(void)tinker_pairingDidFinishForConfiguration:(id)arg0 duration:(CGFloat)arg1 ;
-(void)tinker_syncFailedWithError:(id)arg0 configuration:(id)arg1 ;
-(void)tinker_syncFinishedWithLatency:(id)arg0 timeSinceLastSuccessfullPull:(id)arg1 configuration:(id)arg2 ;
-(void)workout_reportGymKitWorkoutWithFitnessMachineType:(id)arg0 manufacturer:(id)arg1 timeToBeginExperience:(NSInteger)arg2 workoutEndError:(NSInteger)arg3 ;
-(void)workout_reportWorkoutCondenserEventWithReason:(NSInteger)arg0 batchSize:(NSInteger)arg1 hasWatchSource:(BOOL)arg2 duration:(CGFloat)arg3 success:(BOOL)arg4 error:(id)arg5 workoutsToCondense:(NSInteger)arg6 workoutsToRecondense:(NSInteger)arg7 condensedWorkouts:(NSInteger)arg8 processedWorkouts:(NSInteger)arg9 createdSeries:(NSInteger)arg10 deletedSamples:(NSInteger)arg11 ;


@end


#endif