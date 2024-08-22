// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOREANALYTICSLOGOBSERVER_H
#define HMDCOREANALYTICSLOGOBSERVER_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging, HMMLogEventObserver, HMDCoreAnalyticsLogObserverDataSource;



@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>



@property (readonly, nonatomic) NSObject<HMDCoreAnalyticsLogObserverDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions; // ivar: _homeConfigurationCommonDimensions
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dictionaryFromEvent:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)addAccessoryDetailsFromLogEvent:(id)arg0 toEventDictionary:(id)arg1 ;
-(void)addDeviceCapabilitiesAndEnablementsCommonDimensionsToEventDictionary:(id)arg0 ;
-(void)addErrorDetailsFromLogEvent:(id)arg0 toEventDictionary:(id)arg1 ;
-(void)addEventDurationInMillisecondsFromLogEvent:(id)arg0 toEventDictionary:(id)arg1 ;
-(void)addHistogrammedCommonConfigurationDimensionsForLogEvent:(id)arg0 toEventDictionary:(id)arg1 ;
-(void)addHomesCategorizationCommonDimensionToEventDictionary:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif