// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSWHITEROSE_H
#define SIRIANALYTICSWHITEROSE_H

@protocol SiriAnalyticsSensitiveConditionsObserverDelegate, OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsRootClock.h"

@interface SiriAnalyticsWhiteRose : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> *_delegate;
    SiriAnalyticsRootClock *_activeClock;
    SiriAnalyticsRootClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    CGFloat _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    CGFloat _maximumClockLifeInterval;
}




-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelInactivityTimer;
-(void)_cancelMaximumClockLifeTimer;
-(void)_destroyActiveClock;
-(void)_ensureActiveClockWithCompletion:(id)arg0 ;
-(void)_inactivityTimerElapsed;
-(void)_maximumClockLifeExpired;
-(void)_startInactivityTimer;
-(void)_startMaximumClockLifeTimer;
-(void)markTimeForAnnotatedMessages:(id)arg0 completion:(id)arg1 ;
-(void)sensitiveCondition:(NSUInteger)arg0 endedAt:(NSUInteger)arg1 ;
-(void)sensitiveCondition:(NSUInteger)arg0 startedAt:(NSUInteger)arg1 ;


@end


#endif