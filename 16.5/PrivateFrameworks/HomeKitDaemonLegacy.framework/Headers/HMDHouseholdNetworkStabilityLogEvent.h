// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDNETWORKSTABILITYLOGEVENT_H
#define HMDHOUSEHOLDNETWORKSTABILITYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHouseholdNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numAPChanges; // ivar: _numAPChanges
@property (readonly, nonatomic) NSUInteger numGatewayChanges; // ivar: _numGatewayChanges
@property (readonly, nonatomic) NSUInteger numNetworkSignatures; // ivar: _numNetworkSignatures
@property (readonly, nonatomic) NSUInteger numReadErrors; // ivar: _numReadErrors
@property (readonly, nonatomic) NSUInteger numReadWrites; // ivar: _numReadWrites
@property (readonly, nonatomic) NSUInteger numSessionErrors; // ivar: _numSessionErrors
@property (readonly, nonatomic) NSUInteger numStabilityReporters; // ivar: _numStabilityReporters
@property (readonly, nonatomic) NSUInteger numWifiAssociations; // ivar: _numWifiAssociations
@property (readonly, nonatomic) NSUInteger numWifiDisassociations; // ivar: _numWifiDisassociations
@property (readonly, nonatomic) NSUInteger numWriteErrors; // ivar: _numWriteErrors
@property (readonly) Class superclass;


-(id)initWithHomeUUID:(id)arg0 numStabilityReporters:(NSUInteger)arg1 WifiAssociations:(NSUInteger)arg2 wifiDisassociations:(NSUInteger)arg3 apChanges:(NSUInteger)arg4 gatewayChanges:(NSUInteger)arg5 numReadWrites:(NSUInteger)arg6 numReadErrors:(NSUInteger)arg7 numWriteErrors:(NSUInteger)arg8 numSessionErrors:(NSUInteger)arg9 numNetworkSignatures:(NSUInteger)arg10 ;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif