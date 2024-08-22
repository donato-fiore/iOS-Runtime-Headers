// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H
#define HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H

@class NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *expectedDuration; // ivar: _expectedDuration


-(id)eventName;
-(id)initWithAccessory:(id)arg0 duration:(id)arg1 expectedDuration:(id)arg2 ;
-(id)serializedEvent;


@end


#endif