// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYREACHABILITYCHANGEDLOGEVENT_H
#define HMDACCESSORYREACHABILITYCHANGEDLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryTransportReachabilityReport.h"

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) BOOL accessoryBatteryPowered; // ivar: _accessoryBatteryPowered
@property (readonly, nonatomic) BOOL accessoryBridged; // ivar: _accessoryBridged
@property (readonly, copy, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (readonly, copy, nonatomic) NSString *accessoryFirmwareVersion; // ivar: _accessoryFirmwareVersion
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryManufacturer; // ivar: _accessoryManufacturer
@property (readonly, copy, nonatomic) NSString *accessoryModel; // ivar: _accessoryModel
@property (readonly, copy, nonatomic) NSNumber *accessoryNumber; // ivar: _accessoryNumber
@property (readonly, nonatomic) BOOL batteryLow; // ivar: _batteryLow
@property (readonly, nonatomic) BOOL changed; // ivar: _changed
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL reachable; // ivar: _reachable
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport; // ivar: _transportReport


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
+(id)eventWithReachable:(BOOL)arg0 changed:(BOOL)arg1 duration:(CGFloat)arg2 accessory:(id)arg3 transportReport:(id)arg4 ;
-(id)__initWithReachable:(BOOL)arg0 changed:(BOOL)arg1 duration:(CGFloat)arg2 accessory:(id)arg3 transportReport:(id)arg4 ;
-(id)init;


@end


#endif