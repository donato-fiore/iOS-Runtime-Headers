// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSROOTCLOCK_H
#define SIRIANALYTICSROOTCLOCK_H

@class NSMutableDictionary;
@protocol SiriAnalyticsSensitiveConditionsObserverDelegate;


#import "SiriAnalyticsLogicalClock.h"
#import "SiriAnalyticsSensitiveConditionsLedger.h"

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock <SiriAnalyticsSensitiveConditionsObserverDelegate>

 {
    NSMutableDictionary *_derivativeClocksByStreamUUID;
}


@property (readonly, nonatomic) SiriAnalyticsSensitiveConditionsLedger *sensitiveConditionsLedger; // ivar: _sensitiveConditionsLedger


-(BOOL)isTrackingDerivativeClockByStreamUUID:(id)arg0 ;
-(id)derivativeClockForStreamUUID:(id)arg0 ;
-(id)derivativeClocks;
-(id)initWithClockIdentifier:(id)arg0 timestampOffset:(NSUInteger)arg1 startedOn:(NSUInteger)arg2 metastore:(id)arg3 ;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 ;


@end


#endif