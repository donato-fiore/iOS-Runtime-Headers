// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKSYNCCONTROLLER_H
#define IMDCKSYNCCONTROLLER_H

@class NSString, NSDate, NSTimer, IMTimer;
@protocol IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate;


#import "IMDCKAbstractSyncController.h"

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialSyncAttempts; // ivar: _initialSyncAttempts
@property (retain, nonatomic) NSDate *lastLogDumpDate; // ivar: _lastLogDumpDate
@property (retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate; // ivar: _lastRestoreFailureLogDumpDate
@property (retain, nonatomic) NSTimer *longRunningSyncTimer; // ivar: _longRunningSyncTimer
@property (retain, nonatomic) IMTimer *nightlySyncTimer; // ivar: _nightlySyncTimer
@property (retain) NSTimer *reloadTimer; // ivar: _reloadTimer
@property BOOL shouldReloadConversations; // ivar: _shouldReloadConversations
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *syncStartDate; // ivar: _syncStartDate


+(id)sharedInstance;
-(BOOL)_accountHasMultipleDevices;
-(BOOL)_chatSyncedRecently;
-(BOOL)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg0 firstFullSyncCompletedDate:(id)arg1 ;
-(BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg0 ;
-(BOOL)_handleSyncFailureType:(NSInteger)arg0 step:(NSInteger)arg1 activity:(id)arg2 attemptCount:(NSUInteger)arg3 startTime:(id)arg4 error:(id)arg5 retry:(id)arg6 ;
-(BOOL)_hasDumpedLogsInPastHour;
-(BOOL)_hasDumpedRestoreFailureLogsInPastHour;
-(BOOL)_serverAllowsUIRefreshTimerWhileSyncing;
-(BOOL)_serverAllowsUIRefreshWhileSyncing;
-(BOOL)_serverDeniesDailySyncStateAnalytics;
-(BOOL)_serverDeniesPeriodicSyncAnalytics;
-(BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
-(BOOL)_serverDoesNotSingleDeviceLimitation;
-(BOOL)_syncNotCompletedRecently;
-(BOOL)_withinAnHourOfLogDumpHour;
-(BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
-(BOOL)logCloudKitAnalytics;
-(BOOL)shouldMarkAllIncompatibleMessagesForDeletion;
-(CGFloat)_IMAHDAgentFallbackIntervalInSeconds;
-(CGFloat)_minimumChatComingOnlineSyncInterval;
-(CGFloat)reloadTimeInterval;
-(NSInteger)_manualSyncAttemptCount;
-(NSInteger)_periodicSyncAttemptCount;
-(NSInteger)syncControllerRecordType;
-(NSUInteger)_currentHour;
-(NSUInteger)_maxTimeToDeferInSeconds;
-(id)_dailySyncStateDictionary;
-(id)_dateForNext24LogDumpAtHour:(NSInteger)arg0 timeNow:(id)arg1 dumpNow:(*BOOL)arg2 ;
-(id)_keychainError;
-(id)_keychainErrorWithCause:(id)arg0 ;
-(id)_periodicSyncStateDictionary;
-(id)_recordManager;
-(id)_retryError;
-(id)_sharedDatabaseManager;
-(id)attachmentSyncController;
-(id)backupController;
-(id)chatSyncController;
-(id)exitManager;
-(id)init;
-(id)initialAttachmentSyncController;
-(id)initialMessageSyncController;
-(id)messageSyncController;
-(id)rampManager;
-(id)syncStateDebuggingInfo:(id)arg0 ;
-(id)updateSyncController;
-(void)_accountDidChange:(id)arg0 ;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg0 ;
-(void)_addDatesDefaultsIfNeededToDictionary:(id)arg0 keys:(id)arg1 ;
-(void)_autoBugCaptureWithSubType:(id)arg0 debugDescription:(id)arg1 ;
-(void)_beginExitStateCleanupIfNeededWithActivity:(id)arg0 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg0 attemptCount:(NSUInteger)arg1 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg0 attemptCount:(NSUInteger)arg1 syncChatsCompletionBlock:(id)arg2 ;
// -(void)_callSyncWithCompletion:(id)arg0 activity:(unk)arg1  ;
-(void)_deleteRestoreFailuresDirectory;
-(void)_didPassAccountAndIdentityUpdateNeeds;
-(void)_dispatchNotification:(id)arg0 withBlock:(id)arg1 ;
-(void)_ifCloudKitAbleToSyncWithActivity:(id)arg0 callBlock:(id)arg1 ;
-(void)_kickOffNightlyPeriodicSyncIfApplicable;
-(void)_needsSyncOnAccountUpdate;
-(void)_needsSyncOnIdentityUpdate;
-(void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg0 ;
-(void)_noteMetricsForSyncStartFrom:(id)arg0 fullSync:(BOOL)arg1 ;
-(void)_noteSyncStarted:(BOOL)arg0 ;
-(void)_nukeCKData;
-(void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
-(void)_refreshUIWhileSyncing;
-(void)_reloadChatRegistryOnMainThread;
-(void)_resetSyncStateAndAttemptCounts;
-(void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg0 analyticDictionary:(id)arg1 ;
-(void)_syncChatsWithActivity:(id)arg0 ;
-(void)_syncDeletesOrClearTombstones;
-(void)_writeDownSyncDate;
-(void)beginChatSyncPeriodic:(BOOL)arg0 activity:(id)arg1 ;
-(void)beginComingBackOnlineSync;
-(void)beginInitialSync;
-(void)beginInitialSyncAttemptCount:(NSUInteger)arg0 ;
-(void)beginPeriodicSyncWithActivity:(id)arg0 ;
-(void)beginPeriodicSyncWithChecks:(NSUInteger)arg0 priority:(char *)arg1 reason:(id)arg2 ;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(void)clearCKRelatedDefaults;
-(void)clearLocalCloudKitSyncState;
-(void)collectLogsIfNeeded;
-(void)dealloc;
-(void)eventStreamHandler:(id)arg0 didReceiveEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)handleAKUserInfoChangedNotification:(id)arg0 ;
-(void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
-(void)kickOffEagerSyncIfApplicable;
-(void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
-(void)performOneTimeAccountUpgradeCheckIfNeeded;
-(void)recordMetricIsCloudKitEnabled;
-(void)refreshUIIfApplicableWithBatchCount:(NSUInteger)arg0 ;
-(void)registerForAccountNotifications;
-(void)sendRestoreFailuresLogDumps;
-(void)sendRestoreFailuresLogDumpsIfNeeded;
-(void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg0 deviceConditionsToCheck:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)syncChatsWithMessageContext:(id)arg0 ;
-(void)syncController:(id)arg0 syncBatchCompleted:(NSUInteger)arg1 ;
-(void)syncDeletesToCloudKitWithCompletion:(id)arg0 ;
-(void)systemDidUnlock;
-(void)updateSecurityLevelDowngradedIfNeeded:(id)arg0 ;


@end


#endif