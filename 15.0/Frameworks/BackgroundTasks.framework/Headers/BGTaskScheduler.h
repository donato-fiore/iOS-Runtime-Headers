// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BGTASKSCHEDULER_H
#define BGTASKSCHEDULER_H

@class NSSet, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;
@protocol _DASActivityBackgroundTasksSchedulerDelegate, _DASActivityBackgroundTasksScheduler;

#import <Foundation/Foundation.h>


@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate>



@property (nonatomic, setter=_setLock:) os_unfair_lock_s _lock; // ivar: __lock
@property (retain, nonatomic, setter=_setPermittedIdentifiers:) NSSet *_permittedIdentifiers; // ivar: __permittedIdentifiers
@property (retain, nonatomic, setter=_setQueuedExpiredLaunchActivities:) NSMutableSet *_queuedExpiredLaunchActivities; // ivar: __queuedExpiredLaunchActivities
@property (retain, nonatomic, setter=_setQueuedLaunchActivities:) NSMutableSet *_queuedLaunchActivities; // ivar: __queuedLaunchActivities
@property (retain, nonatomic, setter=_setRegistrations:) NSMutableDictionary *_registrations; // ivar: __registrations
@property (retain, nonatomic, setter=_setRunningTasksMap:) NSMapTable *_runningTasksMap; // ivar: __runningTasksMap
@property (retain, nonatomic, setter=_setScheduler:) NSObject<_DASActivityBackgroundTasksScheduler> *_scheduler; // ivar: __scheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isRunningInExtension;
+(id)_log;
+(id)_sharedSchedulerIfExists;
+(id)sharedScheduler;
+(void)_applicationDidFinishLaunching:(id)arg0 ;
+(void)load;
-(BOOL)_isRunningTaskOfClass:(Class)arg0 ;
-(BOOL)_unsafe_registerForTaskWithIdentifier:(id)arg0 usingQueue:(id)arg1 launchHandler:(id)arg2 ;
-(BOOL)_unsafe_submitTaskRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerForTaskWithIdentifier:(id)arg0 usingQueue:(id)arg1 launchHandler:(id)arg2 ;
-(BOOL)submitTaskRequest:(id)arg0 error:(*id)arg1 ;
-(id)_init;
-(id)_queueForRegistration:(id)arg0 ;
-(id)_runningTasks;
-(id)_unsafe_registrationForIdentifier:(id)arg0 ;
-(id)init;
-(void)_callExpirationHandlersForActivities:(id)arg0 shouldQueue:(BOOL)arg1 ;
-(void)_callRegisteredHandlersForActivities:(id)arg0 ;
-(void)_handleAppLaunch;
-(void)_runTask:(id)arg0 registration:(id)arg1 ;
-(void)_simulateExpirationForTaskWithIdentifier:(id)arg0 ;
-(void)_simulateLaunchForTaskWithIdentifier:(id)arg0 ;
-(void)cancelAllTaskRequests;
-(void)cancelTaskRequestWithIdentifier:(id)arg0 ;
-(void)getPendingTaskRequestsWithCompletionHandler:(id)arg0 ;
-(void)scheduler:(id)arg0 handleLaunchForActivities:(id)arg1 ;
-(void)scheduler:(id)arg0 willExpireActivities:(id)arg1 ;


@end


#endif