// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSSHARDRESOLUTIONMETRIC_H
#define BCSSHARDRESOLUTIONMETRIC_H

@class NSString, NSDictionary;
@protocol BCSCoreAnalyticsEventDescribing, BCSShardItemIdentifierProviding, BCSResolutionMetricProtocol, BCSShardItemIdentifying;


#import "BCSMetric.h"
#import "BCSFlagMeasurement.h"
#import "BCSTimingMeasurement.h"

@interface BCSShardResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSShardItemIdentifierProviding, BCSResolutionMetricProtocol>



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
@property (readonly, nonatomic) NSObject<BCSShardItemIdentifying> *shardItemIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // ivar: timingMeasurement


+(id)metricForShardIdentifier:(id)arg0 postProcessingMetricHandlers:(id)arg1 ;


@end


#endif