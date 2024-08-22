// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLGRACEPERIODTIMER_H
#define QLGRACEPERIODTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface QLGracePeriodTimer : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CGFloat _delay;
    NSObject<OS_dispatch_source> *_timer;
}


@property (copy) id *action; // ivar: _action


// -(id)initWithAction:(id)arg0 callbackQueue:(unk)arg1 delay:(id)arg2  ;
-(void)_createTimer;
-(void)_suppress;
-(void)arm;
-(void)suppress;


@end


#endif