// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSROOTCLOCK_H
#define SIRIANALYTICSROOTCLOCK_H

@class NSMutableDictionary;
@protocol SiriAnalyticsSensitiveConditionsObserverDelegate;


#import "SiriAnalyticsLogicalClock.h"

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock <SiriAnalyticsSensitiveConditionsObserverDelegate>

 {
    NSMutableDictionary *_derivativeClocksByStreamUUID;
    NSMutableDictionary *_sensitiveConditionRanges;
}




-(BOOL)isTrackingDerivativeClockByStreamUUID:(id)arg0 ;
-(id)derivativeClockForStreamUUID:(id)arg0 ;
-(id)derivativeClocks;
-(id)initWithClockIdentifier:(id)arg0 timestampOffset:(NSUInteger)arg1 ;
-(id)sensitiveConditionsForTimestamp:(NSUInteger)arg0 ;
-(void)sensitiveCondition:(NSUInteger)arg0 endedAt:(NSUInteger)arg1 ;
-(void)sensitiveCondition:(NSUInteger)arg0 startedAt:(NSUInteger)arg1 ;


@end


#endif