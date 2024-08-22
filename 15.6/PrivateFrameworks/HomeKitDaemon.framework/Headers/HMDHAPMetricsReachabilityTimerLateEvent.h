// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H
#define HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H

@class NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSNumber *expectedDuration; // ivar: _expectedDuration
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithAccessory:(id)arg0 duration:(id)arg1 expectedDuration:(id)arg2 ;


@end


#endif