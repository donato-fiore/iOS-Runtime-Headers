// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTENABLEMENTLOGEVENT_H
#define HMDSIRIENDPOINTENABLEMENTLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numCapableSiriEndpointAccessories; // ivar: _numCapableSiriEndpointAccessories
@property (readonly, nonatomic) NSUInteger numEnabledSiriEndpointAccessories; // ivar: _numEnabledSiriEndpointAccessories
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithConfigurationDataSource:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 numCapableSiriEndpoints:(NSUInteger)arg1 numEnabledSiriEndpoints:(NSUInteger)arg2 ;
-(id)serializedMetric;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif