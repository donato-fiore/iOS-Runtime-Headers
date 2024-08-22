// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DASSCHEDULER_H
#define _DASSCHEDULER_H

@class NSMutableDictionary, NSString, NSXPCListenerEndpoint, NSXPCConnection;
@protocol NSXPCListenerDelegate, _DASActivitySchedulerClient, _DASActivityGroupScheduler, _DASActivitySchedulerIntrospecting, _DASActivityBackgroundLaunchScheduler, _DASActivityMetering, _DASActivityBackgroundTasksScheduler, _OSPrewarmScheduling, _DASSystemConstraintsUpdating, _DASBGSystemTaskScheduler, _DASActivityBackgroundTasksSchedulerDelegate, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "_DASSubmissionRateLimiter.h"

@interface _DASScheduler : NSObject <NSXPCListenerDelegate, _DASActivitySchedulerClient, _DASActivityGroupScheduler, _DASActivitySchedulerIntrospecting, _DASActivityBackgroundLaunchScheduler, _DASActivityMetering, _DASActivityBackgroundTasksScheduler, _OSPrewarmScheduling, _DASSystemConstraintsUpdating, _DASBGSystemTaskScheduler>



@property (retain, nonatomic) NSMutableDictionary *activityToDataMap; // ivar: _activityToDataMap
@property (weak, nonatomic) NSObject<_DASActivityBackgroundTasksSchedulerDelegate> *backgroundTaskSchedulerDelegate; // ivar: _backgroundTaskSchedulerDelegate
@property (retain) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionCreationQueue; // ivar: _connectionCreationQueue
@property (retain, nonatomic) NSObject<OS_os_log> *dasFrameworkLog; // ivar: _dasFrameworkLog
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *delayedStartTasks; // ivar: _delayedStartTasks
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) _DASSubmissionRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (nonatomic) int resubmitToken; // ivar: _resubmitToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue; // ivar: _runQueue
@property (retain, nonatomic) NSMutableDictionary *startedActivities; // ivar: _startedActivities
@property (retain, nonatomic) NSMutableDictionary *submittedActivities; // ivar: _submittedActivities
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)log;
+(id)scheduler;
+(id)schedulerWithClientName:(id)arg0 ;
+(id)schedulerWithEndpoint:(id)arg0 ;
+(id)sharedScheduler;
-(BOOL)deferActivities:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)submitActivityInternal:(id)arg0 ;
-(CGFloat)balanceForBudgetWithName:(id)arg0 ;
-(id)_resetWidgetBudgets;
-(id)activityRunStatistics;
-(id)allBudgets;
-(id)blockingPoliciesWithParameters:(id)arg0 ;
-(id)clasStatus;
-(id)currentConnection;
-(id)currentPredictions;
-(id)delayedRunningActivities;
-(id)evaluateBytesConsumed:(id)arg0 withPreviousParameters:(id)arg1 ;
-(id)extendUpdateActivityDictionary:(id)arg0 ;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)policies;
-(id)runningActivities;
-(id)runningGroupActivities;
-(id)scoresForActivityWithName:(id)arg0 ;
-(id)statistics;
-(id)submitTaskRequest:(id)arg0 ;
-(id)submittedTaskState;
-(void)acknowledgeSystemTaskLaunchWithIdentifier:(id)arg0 ;
-(void)acknowledgeSystemTaskSuspensionWithIdentifier:(id)arg0 ;
-(void)activity:(id)arg0 blockedOnPolicies:(id)arg1 ;
-(void)activity:(id)arg0 runWithoutHonoringPolicies:(id)arg1 ;
-(void)activityCanceled:(id)arg0 ;
-(void)activityCompleted:(id)arg0 ;
-(void)activityStarted:(id)arg0 ;
-(void)activityStartedWithParameters:(id)arg0 ;
-(void)activityStoppedWithParameters:(id)arg0 ;
-(void)addPauseExceptParameter:(id)arg0 ;
-(void)backgroundAppRefreshEnabledForApp:(id)arg0 withHandler:(id)arg1 ;
-(void)cancelActivities:(id)arg0 ;
-(void)cancelAllTaskRequests;
-(void)cancelTaskRequestWithIdentifier:(id)arg0 ;
-(void)completeSystemTaskWithIdentifier:(id)arg0 ;
-(void)completeTaskRequest:(id)arg0 ;
-(void)connectToDaemon:(BOOL)arg0 ;
-(void)createActivityGroup:(id)arg0 ;
-(void)dealloc;
-(void)decrementBy:(CGFloat)arg0 forBudgetWithName:(id)arg1 ;
-(void)disableAppRefreshForApps:(id)arg0 ;
-(void)endLaunchWithReason:(id)arg0 forApp:(id)arg1 ;
-(void)enterTestModeWithParameters:(id)arg0 ;
-(void)forceRunActivities:(id)arg0 ;
-(void)getPendingTaskRequestsWithCompletionHandler:(id)arg0 ;
-(void)handleEligibleActivities:(id)arg0 ;
-(void)handleLaunchFromDaemonForActivities:(id)arg0 ;
-(void)handleNoLongerRunningActivities:(id)arg0 ;
-(void)pauseWithParameters:(id)arg0 ;
-(void)prewarmApplication:(id)arg0 ;
-(void)prewarmSuspendWithHandler:(id)arg0 ;
-(void)resubmitPendingActivities;
-(void)resubmitPendingStartActivities;
-(void)resubmitRunningActivities;
-(void)runActivities:(id)arg0 ;
-(void)runActivitiesWithDelayedStart:(id)arg0 ;
-(void)setBackgroundTasksSchedulerDelegate:(id)arg0 ;
-(void)setBalance:(CGFloat)arg0 forBudgetWithName:(id)arg1 ;
-(void)setCapacity:(CGFloat)arg0 forBudgetWithName:(id)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(CGFloat)arg0 forApp:(id)arg1 ;
-(void)setupXPCConnectionWithEndpoint:(id)arg0 ;
-(void)submitActivities:(id)arg0 ;
-(void)submitActivitiesInternal:(id)arg0 ;
-(void)submitActivity:(id)arg0 ;
-(void)submitActivity:(id)arg0 inGroup:(id)arg1 ;
-(void)submitActivity:(id)arg0 inGroupWithName:(id)arg1 ;
-(void)suspendActivities:(id)arg0 ;
-(void)unprotectedEstablishDaemonConnectionIfInterrupted;
-(void)unregisterSystemTaskWithIdentifier:(id)arg0 ;
-(void)updateActivity:(id)arg0 withParameters:(id)arg1 ;
-(void)updateBytesConsumedForActivity:(id)arg0 withParameters:(id)arg1 ;
-(void)updateSystemConstraintsWithParameters:(id)arg0 ;
-(void)updateTaskRequestWithIdentifier:(id)arg0 descriptor:(id)arg1 completionHandler:(id)arg2 ;
-(void)willExpireBGTaskActivities:(id)arg0 ;


@end


#endif