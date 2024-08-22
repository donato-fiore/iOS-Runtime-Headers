// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18MOBILETIMERSUPPORT12TIMERCONTEXT_H
#define _TTC18MOBILETIMERSUPPORT12TIMERCONTEXT_H


#import <Foundation/Foundation.h>


@interface _TtC18MobileTimerSupport12TimerContext : NSObject {
    ? state;
    ? timerId;
    ? duration;
    ? remainingTime;
    ? firedDate;
    ? dismissedDate;
    ? firing;
    ? title;
}




-(id)init;
-(id)initWithState:(NSInteger)arg0 timerId:(id)arg1 duration:(CGFloat)arg2 remainingTime:(CGFloat)arg3 firing:(BOOL)arg4 title:(id)arg5 ;


@end


#endif