// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOREANALYTICSLOGOBSERVER_H
#define HMDCOREANALYTICSLOGOBSERVER_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging, HMMLogEventObserver;


#import "HMDMetricsManager.h"

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions; // ivar: _homeConfigurationCommonDimensions
@property (readonly, nonatomic) HMDMetricsManager *metricsManager; // ivar: _metricsManager
@property (readonly) Class superclass;


+(id)logCategory;
+(void)initialize;
-(id)dictionaryFromEvent:(id)arg0 ;
-(id)initWithMetricsManager:(id)arg0 ;
-(void)addEventDurationInMillisecondsToEventDictionary:(id)arg0 logEvent:(id)arg1 ;
-(void)addHistogrammedCommonConfigurationDimensionsToEventDictionary:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif