// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYCATEGORYLOGEVENT_H
#define HMDACCESSORYCATEGORYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary, NSData, NSUUID;
@protocol HMMCoreAnalyticsLogging, HMDLogEventFilterSpecifying;



@interface HMDAccessoryCategoryLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging, HMDLogEventFilterSpecifying>



@property (readonly, nonatomic) NSString *accessoryCategoryIdentifier; // ivar: _accessoryCategoryIdentifier
@property (readonly) NSUInteger accessoryDetailsType; // ivar: _accessoryDetailsType
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL enableEventFilterSpecifying;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDenominatorSpecifying; // ivar: _isDenominatorSpecifying
@property (readonly, nonatomic) NSString *sampledCategory;
@property (readonly, nonatomic) NSData *sampledData;
@property (readonly, nonatomic) NSUUID *sampledUUID;
@property (readonly) Class superclass;


+(id)denominatorSpecifyingEvent;
-(id)initWithAccessoryDetailsType:(NSUInteger)arg0 accessoryCategoryIdentifier:(id)arg1 homeUUID:(id)arg2 ;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif