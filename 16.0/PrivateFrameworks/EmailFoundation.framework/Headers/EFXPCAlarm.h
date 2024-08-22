// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFXPCALARM_H
#define EFXPCALARM_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EFXPCAlarmScheduler.h"

@interface EFXPCAlarm : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue; // ivar: _eventHandlerQueue
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) EFXPCAlarmScheduler *scheduler; // ivar: _scheduler
@property (copy, nonatomic) id *test_schedulerObserver; // ivar: _test_schedulerObserver


-(id)description;
-(id)initWithScheduler:(id)arg0 eventName:(id)arg1 eventHandlerQueue:(id)arg2 ;
-(void)beginReceivingEventsWithHandler:(id)arg0 ;
-(void)eventDidFire:(id)arg0 ;
-(void)invalidate;
-(void)setNextFireDate:(id)arg0 isUserVisible:(BOOL)arg1 ;
-(void)test_fireEventImmediatelyWithDate:(id)arg0 isUserVisible:(BOOL)arg1 ;
-(void)unschedule;


@end


#endif