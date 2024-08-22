// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCCOORDINATOR_H
#define HDCLOUDSYNCCOORDINATOR_H

@class ACAccountStore, NSDate, NSProgress, NSMutableArray, NSString, APSConnection, HDXPCGatedActivity;
@protocol APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDCloudSyncManagerTaskQueue.h"
#import "HDPeriodicActivity.h"
#import "HDProfile.h"

@interface HDCloudSyncCoordinator : NSObject <APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver>

 {
    HDDaemon *_daemon;
    os_unfair_lock_s _lock;
    BOOL _lock_cloudSyncEnabled;
    BOOL _lock_hasComputedCloudSyncEnabled;
    BOOL _lock_cloudSyncSupportEnabled;
    BOOL _lock_cloudSyncSupportValueLoaded;
    ACAccountStore *_lock_accountStore;
    BOOL _lock_syncInProgress;
    BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    HDCloudSyncManagerTaskQueue *_syncTaskQueue;
    NSProgress *_activeSyncProgress;
    NSMutableArray *_activeSyncCompletions;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSMutableArray *_progressCompletionBlocks;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_source> *_periodicActivityCriteriaUpdateSource;
    HDPeriodicActivity *_primaryPeriodicActivity;
    HDPeriodicActivity *_secondaryPeriodicActivity;
    HDPeriodicActivity *_userRequestedBackupActivity;
    HDXPCGatedActivity *_subscriptionBasedSyncActivity;
    BOOL _lock_requiresTinkerUpload;
    BOOL _lock_requiresTinkerDownload;
    CGFloat _lock_lastTinkerDataDownloadTriggerTime;
    CGFloat _lock_lastTinkerDataUploadTriggerTime;
    HDXPCGatedActivity *_sharedSummaryPullActivity;
    HDXPCGatedActivity *_sharedSummaryPushActivity;
    CGFloat _lock_nextAvailableOperationStartTime;
    HDProfile *_unitTest_primaryProfileOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)arg0 ;
-(BOOL)_unitTest_shouldSyncProfile:(id)arg0 ;
-(BOOL)canPerformCloudSyncWithError:(*id)arg0 ;
-(BOOL)isDeviceInManateeUnavailableCFUState;
-(CGFloat)nextCloudKitOperationDelay;
-(NSInteger)compareTask:(id)arg0 withTask:(id)arg1 queue:(id)arg2 ;
-(id)addCloudSyncProgressCompletion:(id)arg0 ;
-(id)currentSyncProgress;
-(id)diagnosticDescription;
-(id)disableAndDeleteAllSyncDataWithCompletion:(id)arg0 ;
-(id)fetchCloudDescriptionWithContext:(id)arg0 completion:(id)arg1 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)lastSuccessfulPullDate;
-(id)lastSuccessfulPushDate;
-(id)resetAllProfilesWithContext:(id)arg0 completion:(id)arg1 ;
-(id)syncAllProfilesWithContext:(id)arg0 completion:(id)arg1 ;
-(id)unitTest_periodicActivity;
-(void)accountConfigurationDidChangeWithCompletion:(id)arg0 ;
-(void)addManagerTask:(id)arg0 ;
-(void)cloudSyncSupportStatusDidChange;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)daemonReady:(id)arg0 ;
-(void)databaseJournalMergeDidCompleteForProfile:(id)arg0 ;
-(void)dealloc;
-(void)delayNextCloudKitOperation:(CGFloat)arg0 ;
-(void)disableSyncLocallyWithCompletion:(id)arg0 ;
-(void)enableSyncLocallyWithCompletion:(id)arg0 ;
-(void)fetchSyncStatusWithCompletion:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)resetSubscriptionSyncBackoff;
-(void)scheduleSharedSummaryPushWithMaximumDelay:(CGFloat)arg0 ;
-(void)triggerSubscription:(id)arg0 ;
-(void)unitTest_performPeriodicSyncWithCompletion:(id)arg0 ;
-(void)unitTest_setPeriodicActivity:(id)arg0 ;
-(void)unitTest_setPrimaryProfileOverride:(id)arg0 ;


@end


#endif