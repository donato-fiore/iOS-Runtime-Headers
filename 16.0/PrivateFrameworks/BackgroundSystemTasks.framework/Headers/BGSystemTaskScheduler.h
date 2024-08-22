// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BGSYSTEMTASKSCHEDULER_H
#define BGSYSTEMTASKSCHEDULER_H

@class NSMutableDictionary, _DASScheduler;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BGSystemTaskScheduler : NSObject

@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *pendingTasksMap; // ivar: _pendingTasksMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *registrations; // ivar: _registrations
@property (retain, nonatomic) NSMutableDictionary *runningTasksMap; // ivar: _runningTasksMap
@property (retain, nonatomic) _DASScheduler *scheduler; // ivar: _scheduler


+(id)sharedScheduler;
-(BOOL)cancelTaskRequestWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerForTaskWithIdentifier:(id)arg0 usingQueue:(id)arg1 launchHandler:(id)arg2 ;
-(BOOL)submitTaskRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateTaskRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)taskRequestForIdentifier:(id)arg0 ;
-(void)getTaskStatusForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)installEventStreamHandler;
-(void)processEvent:(id)arg0 forRegistration:(id)arg1 ;
-(void)runTaskWithRegistration:(id)arg0 ;
-(void)suspendTaskWithRegistration:(id)arg0 ;


@end


#endif