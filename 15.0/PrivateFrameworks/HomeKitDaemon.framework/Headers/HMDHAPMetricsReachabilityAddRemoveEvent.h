// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMETRICSREACHABILITYADDREMOVEEVENT_H
#define HMDHAPMETRICSREACHABILITYADDREMOVEEVENT_H

@class NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSUInteger addRemoveEvent; // ivar: _addRemoveEvent
@property (readonly, nonatomic) NSNumber *linkType; // ivar: _linkType


-(id)eventName;
-(id)initWithAccessory:(id)arg0 hmdAddRemoveEvent:(NSUInteger)arg1 forLinkType:(id)arg2 ;
-(id)serializedEvent;


@end


#endif