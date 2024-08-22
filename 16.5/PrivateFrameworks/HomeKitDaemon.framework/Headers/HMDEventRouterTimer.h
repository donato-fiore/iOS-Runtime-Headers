// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTROUTERTIMER_H
#define HMDEVENTROUTERTIMER_H

@class NSString, HMFTimer;
@protocol HMETimer, HMFTimerDelegate;

#import <Foundation/Foundation.h>


@interface HMDEventRouterTimer : NSObject <HMETimer, HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *timer; // ivar: _timer
@property (readonly) id *timerFireHandler; // ivar: _timerFireHandler


-(id)initWithQueue:(id)arg0 interval:(CGFloat)arg1 timerFireHandler:(id)arg2 ;
-(void)resume;
-(void)suspend;
-(void)timerDidFire:(id)arg0 ;


@end


#endif