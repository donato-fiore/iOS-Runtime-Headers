// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H
#define HMDHAPMETRICSREACHABILITYTIMERLATEEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *expectedDuration; // ivar: _expectedDuration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccessory:(id)arg0 duration:(id)arg1 expectedDuration:(id)arg2 ;


@end


#endif