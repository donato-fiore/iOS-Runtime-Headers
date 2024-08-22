// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITTHROTTLER_H
#define AXAUDITTHROTTLER_H

@class NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXAuditThrottler : NSObject

@property (nonatomic) BOOL _alwaysReschedule; // ivar: __alwaysReschedule
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_dispatchTimer; // ivar: __dispatchTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_fireQueue; // ivar: __fireQueue
@property (nonatomic) CGFloat _interval; // ivar: __interval
@property (retain, nonatomic) NSDate *_lastFireTime; // ivar: __lastFireTime
@property (nonatomic) BOOL _pendingFire; // ivar: __pendingFire
@property (nonatomic) SEL _selector; // ivar: __selector
@property (weak, nonatomic) NSObject *_target; // ivar: __target


+(id)throttlerWithInterval:(CGFloat)arg0 target:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 alwaysReschedule:(BOOL)arg4 ;
-(void)_fire;
-(void)_scheduleTimerAfterDelay:(CGFloat)arg0 ;
-(void)scheduleNow;


@end


#endif