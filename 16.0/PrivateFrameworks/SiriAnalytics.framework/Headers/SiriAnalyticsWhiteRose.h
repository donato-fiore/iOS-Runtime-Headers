// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSWHITEROSE_H
#define SIRIANALYTICSWHITEROSE_H

@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsRootClock.h"
#import "SiriAnalyticsMetastore.h"

@interface SiriAnalyticsWhiteRose : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> *_delegate;
    SiriAnalyticsRootClock *_activeClock;
    SiriAnalyticsRootClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    CGFloat _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    CGFloat _maximumClockLifeInterval;
    SiriAnalyticsMetastore *_metastore;
}




-(id)initWithQueue:(id)arg0 delegate:(id)arg1 metastore:(id)arg2 ;
-(void)_cancelInactivityTimer;
-(void)_cancelMaximumClockLifeTimer;
-(void)_destroyActiveClockWithCompletion:(id)arg0 ;
-(void)_ensureActiveClockStartingAt:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_inactivityTimerElapsed;
-(void)_maximumClockLifeExpired;
-(void)_startInactivityTimer;
-(void)_startMaximumClockLifeTimer;
-(void)destroyActiveClockWithCompletion:(id)arg0 ;
-(void)markTimeForAnnotatedMessages:(id)arg0 completion:(id)arg1 ;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif