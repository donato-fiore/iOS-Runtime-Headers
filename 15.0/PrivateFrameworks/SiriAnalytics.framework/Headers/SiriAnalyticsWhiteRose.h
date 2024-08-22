// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSWHITEROSE_H
#define SIRIANALYTICSWHITEROSE_H

@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsLogicalClock.h"

@interface SiriAnalyticsWhiteRose : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> *_delegate;
    SiriAnalyticsLogicalClock *_activeClock;
    SiriAnalyticsLogicalClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    CGFloat _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    CGFloat _maximumClockLifeInterval;
}




-(id)_ensureActiveClock;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelInactivityTimer;
-(void)_cancelMaximumClockLifeTimer;
-(void)_destroyActiveClock;
-(void)_inactivityTimerElapsed;
-(void)_maximumClockLifeExpired;
-(void)_startInactivityTimer;
-(void)_startMaximumClockLifeTimer;
-(void)markTimeForAnnotatedMessages:(id)arg0 completion:(id)arg1 ;


@end


#endif