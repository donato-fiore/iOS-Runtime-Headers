// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSCONFIGRESOLUTIONMETRIC_H
#define BCSCONFIGRESOLUTIONMETRIC_H

@class NSString, NSDictionary;
@protocol BCSCoreAnalyticsEventDescribing, BCSConfigItemIdentifying, BCSResolutionMetricProtocol;


#import "BCSMetric.h"
#import "BCSFlagMeasurement.h"
#import "BCSTimingMeasurement.h"

@interface BCSConfigResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSConfigItemIdentifying, BCSResolutionMetricProtocol>



@property (retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement; // ivar: cacheHitMeasurement
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: errorCode
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // ivar: timingMeasurement
@property (readonly, nonatomic) NSInteger type;


+(id)metricForConfigType:(NSInteger)arg0 postProcessingMetricHandlers:(id)arg1 ;


@end


#endif