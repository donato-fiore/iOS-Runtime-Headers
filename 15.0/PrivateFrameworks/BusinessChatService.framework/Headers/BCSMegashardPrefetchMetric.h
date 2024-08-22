// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSMEGASHARDPREFETCHMETRIC_H
#define BCSMEGASHARDPREFETCHMETRIC_H

@class NSString, NSDictionary;
@protocol BCSCoreAnalyticsEventDescribing, BCSPrefetchMetricProtocol;


#import "BCSMetric.h"

@interface BCSMegashardPrefetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSPrefetchMetricProtocol>



@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: errorCode
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hoursSinceLastSuccessfulPrefetch; // ivar: hoursSinceLastSuccessfulPrefetch
@property (nonatomic) NSUInteger reason; // ivar: reason
@property (nonatomic) BOOL successful; // ivar: successful
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(id)metricForMegashardType:(NSInteger)arg0 postProcessingMetricHandlers:(id)arg1 ;


@end


#endif