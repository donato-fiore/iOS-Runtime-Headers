// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKSTABILITYLOGEVENT_H
#define HMDNETWORKSTABILITYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *apOUI; // ivar: _apOUI
@property (readonly, nonatomic) NSUInteger collectionDurationMinutes; // ivar: _collectionDurationMinutes
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *gatewayMACAddress; // ivar: _gatewayMACAddress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger localHourOfDay; // ivar: _localHourOfDay
@property (readonly, nonatomic) NSUInteger numAPChanges; // ivar: _numAPChanges
@property (readonly, nonatomic) NSUInteger numGatewayChanges; // ivar: _numGatewayChanges
@property (readonly, nonatomic) NSUInteger numReadErrors; // ivar: _numReadErrors
@property (readonly, nonatomic) NSUInteger numReadWrites; // ivar: _numReadWrites
@property (readonly, nonatomic) NSUInteger numSessionErrors; // ivar: _numSessionErrors
@property (readonly, nonatomic) NSUInteger numWifiAssociations; // ivar: _numWifiAssociations
@property (readonly, nonatomic) NSUInteger numWifiDisassociations; // ivar: _numWifiDisassociations
@property (readonly, nonatomic) NSUInteger numWriteErrors; // ivar: _numWriteErrors
@property (readonly, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *topReadWriteError; // ivar: _topReadWriteError
@property (readonly, nonatomic) NSString *topSessionError; // ivar: _topSessionError


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 numWifiAssociations:(NSUInteger)arg1 wifiDisassociations:(NSUInteger)arg2 apChanges:(NSUInteger)arg3 gatewayChanges:(NSUInteger)arg4 numReadWrites:(NSUInteger)arg5 numReadErrors:(NSUInteger)arg6 numWriteErrors:(NSUInteger)arg7 topReadWriteError:(id)arg8 topSessionError:(id)arg9 numSessionErrors:(NSUInteger)arg10 apOUI:(id)arg11 ssid:(id)arg12 gatewayMACAddress:(id)arg13 localHourOfDay:(NSInteger)arg14 collectionDurationMinutes:(NSUInteger)arg15 ;
-(id)serializedLogEvent;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif