// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLGRACEPERIODTIMER_H
#define SLGRACEPERIODTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SLGracePeriodTimer : NSObject {
    id *_action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CGFloat _delay;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _expectedFiringTimeSinceReferenceDate;
}


@property (readonly, getter=isValid) BOOL valid;


+(id)timerWithQueue:(id)arg0 delay:(CGFloat)arg1 action:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg0 delay:(CGFloat)arg1 action:(id)arg2 ;
-(void)_createTimer;
-(void)arm;
-(void)dealloc;
-(void)suppress;


@end


#endif