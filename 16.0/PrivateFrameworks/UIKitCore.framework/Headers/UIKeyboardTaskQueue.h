// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDTASKQUEUE_H
#define UIKEYBOARDTASKQUEUE_H

@class NSConditionLock, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UIKeyboardTaskEntry.h"
#import "UIKeyboardTaskExecutionContext.h"

@interface UIKeyboardTaskQueue : NSObject {
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskEntry *_mainThreadContinuation;
}


@property (retain, nonatomic) NSArray *activeOriginator; // ivar: _activeOriginator
@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // ivar: _executionContext


-(BOOL)isEmpty;
-(BOOL)isMainThreadExecutingTask;
-(BOOL)tryLockWhenReadyForMainThread;
-(id)addAndReturnTask:(id)arg0 ;
-(id)init;
// -(id)scheduleTask:(id)arg0 timeInterval:(unk)arg1 repeats:(CGFloat)arg2  ;
-(void)addDeferredTask:(id)arg0 ;
-(void)addTask:(id)arg0 ;
-(void)continueExecutionOnMainThread;
-(void)finishExecution;
-(void)lock;
-(void)lockWhenReadyForMainThread;
-(void)performDeferredTaskIfIdle;
-(void)performSingleTask:(id)arg0 ;
-(void)performTask:(id)arg0 ;
// -(void)performTaskOnMainThread:(id)arg0 waitUntilDone:(unk)arg1  ;
-(void)promoteDeferredTaskIfIdle;
-(void)unlock;
-(void)waitUntilAllTasksAreFinished;
-(void)waitUntilTaskIsFinished:(id)arg0 ;


@end


#endif