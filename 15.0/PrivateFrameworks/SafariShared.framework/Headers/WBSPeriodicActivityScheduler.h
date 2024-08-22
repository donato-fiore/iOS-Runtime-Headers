// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPERIODICACTIVITYSCHEDULER_H
#define WBSPERIODICACTIVITYSCHEDULER_H

@class NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPeriodicActivityScheduler : NSObject {
    id *_block;
    BOOL _invalidated;
    CGFloat _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}




-(id)init;
-(id)initWithInterval:(CGFloat)arg0 minimumDelay:(CGFloat)arg1 lastFireDate:(id)arg2 block:(id)arg3 ;
-(void)_performActivity;
-(void)_scheduleActivityWithInterval:(CGFloat)arg0 ;
-(void)_timerDidFire:(id)arg0 ;
-(void)invalidate;


@end


#endif