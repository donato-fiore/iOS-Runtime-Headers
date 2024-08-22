// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPMETRICSREACHABILITYADDREMOVEEVENT_H
#define HMDHAPMETRICSREACHABILITYADDREMOVEEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDHAPMetrics.h"

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSUInteger addRemoveEvent; // ivar: _addRemoveEvent
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *linkType; // ivar: _linkType
@property (readonly) Class superclass;


-(id)initWithAccessory:(id)arg0 hmdAddRemoveEvent:(NSUInteger)arg1 forLinkType:(id)arg2 ;


@end


#endif