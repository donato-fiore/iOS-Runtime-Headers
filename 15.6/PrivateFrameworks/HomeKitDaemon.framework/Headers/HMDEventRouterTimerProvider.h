// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVENTROUTERTIMERPROVIDER_H
#define HMDEVENTROUTERTIMERPROVIDER_H

@protocol HMETimerProvider;

#import <Foundation/Foundation.h>


@interface HMDEventRouterTimerProvider : NSObject <HMETimerProvider>





-(id)currentDate;
-(id)dateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(id)timerWithQueue:(id)arg0 interval:(CGFloat)arg1 timerFireHandler:(id)arg2 ;


@end


#endif