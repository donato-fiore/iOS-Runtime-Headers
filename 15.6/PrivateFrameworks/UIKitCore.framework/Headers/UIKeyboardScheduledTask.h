// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDSCHEDULEDTASK_H
#define UIKEYBOARDSCHEDULEDTASK_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "_UIActionWhenIdle.h"
#import "UIKeyboardTaskQueue.h"

@interface UIKeyboardScheduledTask : NSObject

@property (retain, nonatomic) _UIActionWhenIdle *deferredAction; // ivar: _deferredAction
@property (copy, nonatomic) id *enqueuedTask; // ivar: _enqueuedTask
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) id *task; // ivar: _task
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue; // ivar: _taskQueue
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(BOOL)isValid;
-(id)initWithTaskQueue:(id)arg0 timeInterval:(CGFloat)arg1 repeats:(BOOL)arg2 task:(id)arg3 ;
-(void)dealloc;
-(void)handleDeferredTimerFiredEvent;
-(void)invalidate;
-(void)timerFired:(id)arg0 ;


@end


#endif