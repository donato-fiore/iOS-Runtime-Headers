// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCCLIENTHOMEDATALOGEVENT_H
#define HMDRESIDENTSYNCCLIENTHOMEDATALOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDResidentSyncClientHomeDataLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger encodedDataSize; // ivar: _encodedDataSize
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger homeDataType; // ivar: _homeDataType
@property (readonly) Class superclass;
@property (readonly) int transportType; // ivar: _transportType


-(id)initWithHomeUUID:(id)arg0 encodedDataSize:(NSUInteger)arg1 homeDataType:(NSInteger)arg2 transportType:(int)arg3 ;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif