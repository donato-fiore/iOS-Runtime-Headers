// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITASKQUEUE_H
#define TRITASKQUEUE_H

@class _PASLock, TRIClient;
@protocol TRITaskQueuing, TRITaskQueueStateProviding, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding>

 {
    _PASLock *_lock;
    TRIServerContext *_serverContext;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_opGroup;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    TRIClient *_client;
}




-(BOOL)_cancelDependenciesAndTaskWithId:(id)arg0 guardedData:(id)arg1 ;
-(BOOL)_cancelTask:(id)arg0 guardedData:(id)arg1 ;
-(BOOL)_cancelTaskWithId:(id)arg0 guardedData:(id)arg1 persistCancel:(BOOL)arg2 ;
-(BOOL)_isTaskWithId:(id)arg0 inTaskGroup:(id)arg1 runnableGivenCapabilities:(NSUInteger)arg2 atDate:(id)arg3 cachedRunnability:(id)arg4 visitedPath:(id)arg5 topoSortedRunnable:(id)arg6 allowOnlyRootTasksRunnable:(BOOL)arg7 ;
-(BOOL)_removeTaskWithId:(id)arg0 guardedData:(id)arg1 persistRemove:(BOOL)arg2 ;
-(BOOL)cancelTask:(id)arg0 ;
-(BOOL)cancelTasksWithTag:(id)arg0 ;
-(BOOL)cancelTasksWithTag:(id)arg0 excludingTasks:(id)arg1 ;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg0 block:(id)arg1 ;
-(BOOL)finishXPCActivitiesWithGuardedData:(id)arg0 ;
-(BOOL)ifNotPresentAddTask:(id)arg0 ;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg0 executeWhenSuspended:(id)arg1 ;
-(BOOL)updateActivity:(id)arg0 withStartDate:(id)arg1 ;
-(NSUInteger)count;
-(id)_addTask:(id)arg0 withDependencies:(id)arg1 guardedData:(id)arg2 ;
-(id)_createOperationWithTask:(id)arg0 withId:(id)arg1 dependencies:(id)arg2 taskMap:(id)arg3 ;
-(id)_earliestStartDateFromTaskList:(id)arg0 ;
-(id)_runTask:(id)arg0 ;
-(id)activeActivityDescriptorGrantingCapability:(NSUInteger)arg0 ;
-(id)activeActivityGrantingCapability:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithServerContext:(id)arg0 operationQueue:(id)arg1 operationGroup:(id)arg2 asyncQueue:(id)arg3 ;
-(struct ? )_addTask:(id)arg0 options:(id)arg1 guardedData:(id)arg2 taskId:(*id)arg3 ;
-(struct ? )_addTask:(id)arg0 options:(id)arg1 guardedData:(id)arg2 taskIdOut:(*id)arg3 accumulatedNewTaskRecords:(id)arg4 ;
-(struct ? )addTask:(id)arg0 options:(id)arg1 ;
-(struct ? )addTask:(id)arg0 options:(id)arg1 taskId:(*id)arg2 ;
-(void)_evaluateRunConditionsWithGuardedData:(id)arg0 shouldContinueWork:(*BOOL)arg1 ;
-(void)_finalizeTask:(id)arg0 withId:(id)arg1 runResult:(id)arg2 ;
-(void)_partitionTaskGroup:(id)arg0 byRunnabilityGivenCapabilities:(NSUInteger)arg1 runnableAtDate:(id)arg2 topoSortedCurrentlyRunnable:(*id)arg3 blocked:(*id)arg4 allowOnlyRootTasksRunnable:(BOOL)arg5 ;
-(void)_registerRetryActivityForDate:(id)arg0 ;
-(void)_registerTaskQueueActivityForDate:(id)arg0 ;
-(void)_scheduleFutureActivitiesWithGuardedData:(id)arg0 ;
-(void)_scheduleFutureRecurrentRollbackActivityWithTasks:(id)arg0 ;
-(void)_startImmediateTasksIfNotAlreadyQueued:(id)arg0 guardedData:(id)arg1 didStartNewWork:(*BOOL)arg2 ;
-(void)_startRunnableTasksIfNecessaryWithGuardedData:(id)arg0 ;
-(void)registerFinalizeBlock:(id)arg0 ;
-(void)registerFinalizeBlockToRetryWithBlock:(id)arg0 ;
-(void)waitForAsyncQueue;


@end


#endif