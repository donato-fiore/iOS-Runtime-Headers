// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSBUSINESSLINKREGISTEREDMETRIC_H
#define BCSBUSINESSLINKREGISTEREDMETRIC_H

@class NSString, NSDictionary;
@protocol BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol, BCSBusinessLinkChoppingMetric;


#import "BCSMetric.h"
#import "BCSTimingMeasurement.h"

@interface BCSBusinessLinkRegisteredMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol, BCSBusinessLinkChoppingMetric>



@property (nonatomic, getter=isChoppingEnabled) BOOL choppingEnabled; // ivar: choppingEnabled
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: errorCode
@property (nonatomic) BOOL errorEncountered; // ivar: errorEncountered
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger successfulChop; // ivar: successfulChop
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // ivar: timingMeasurement


+(id)metricWithPostProcessingMetricHandlers:(id)arg0 ;


@end


#endif