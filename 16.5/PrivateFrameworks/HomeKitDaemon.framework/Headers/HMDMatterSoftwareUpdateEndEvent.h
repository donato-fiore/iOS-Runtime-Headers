// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERSOFTWAREUPDATEENDEVENT_H
#define HMDMATTERSOFTWAREUPDATEENDEVENT_H

@class HMMLogEvent, NSNumber, NSString, NSDictionary, NSMutableDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMatterSoftwareUpdateEndEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSNumber *accessoryFirmwareVersionNumber; // ivar: _accessoryFirmwareVersionNumber
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *accessoryProductID; // ivar: _accessoryProductID
@property (readonly, nonatomic) NSString *accessoryTransport; // ivar: _accessoryTransport
@property (readonly, nonatomic) NSNumber *accessoryVendorID; // ivar: _accessoryVendorID
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAutomaticThirdPartyAccessorySoftwareUpdateEnabled; // ivar: _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *targetFirmwareVersionNumber; // ivar: _targetFirmwareVersionNumber
@property (retain, nonatomic) NSMutableDictionary *vendorDetailsForCoreAnalytics; // ivar: _vendorDetailsForCoreAnalytics


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithAccessory:(id)arg0 transport:(id)arg1 accessorySoftwareVersionNumber:(id)arg2 updateSoftwareVersionNumber:(id)arg3 error:(id)arg4 ;


@end


#endif