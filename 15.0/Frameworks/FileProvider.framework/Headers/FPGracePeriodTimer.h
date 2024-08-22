// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPGRACEPERIODTIMER_H
#define FPGRACEPERIODTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FPGracePeriodTimer : NSObject {
    id *_action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CGFloat _delay;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _expectedFiringTimeSinceReferenceDate;
}




// -(id)initWithAction:(id)arg0 callbackQueue:(unk)arg1 delay:(id)arg2  ;
-(id)prettyDescription;
-(void)_createTimer;
-(void)arm;
-(void)suppress;


@end


#endif