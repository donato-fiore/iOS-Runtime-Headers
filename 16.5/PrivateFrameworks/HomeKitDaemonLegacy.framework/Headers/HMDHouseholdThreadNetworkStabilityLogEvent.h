// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDTHREADNETWORKSTABILITYLOGEVENT_H
#define HMDHOUSEHOLDTHREADNETWORKSTABILITYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxSimuIPPrefixesDetected; // ivar: _maxSimuIPPrefixesDetected
@property (readonly, nonatomic) NSUInteger numAdvertisedBRs; // ivar: _numAdvertisedBRs
@property (readonly, nonatomic) NSUInteger numAppleBRs; // ivar: _numAppleBRs
@property (readonly, nonatomic) NSUInteger numNetworkSignatures; // ivar: _numNetworkSignatures
@property (readonly, nonatomic) NSUInteger numReadErrors; // ivar: _numReadErrors
@property (readonly, nonatomic) NSUInteger numReadWrites; // ivar: _numReadWrites
@property (readonly, nonatomic) NSUInteger numSessionErrors; // ivar: _numSessionErrors
@property (readonly, nonatomic) NSUInteger numStabilityReporters; // ivar: _numStabilityReporters
@property (readonly, nonatomic) NSUInteger numThirdPartyBRs; // ivar: _numThirdPartyBRs
@property (readonly, nonatomic) NSUInteger numThreadNetworks; // ivar: _numThreadNetworks
@property (readonly, nonatomic) NSUInteger numWriteErrors; // ivar: _numWriteErrors
@property (readonly, nonatomic) NSUInteger reportDuration; // ivar: _reportDuration
@property (readonly, nonatomic) NSUInteger rxSuccess; // ivar: _rxSuccess
@property (readonly, nonatomic) NSUInteger rxTotal; // ivar: _rxTotal
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger threadNetworkDowntime; // ivar: _threadNetworkDowntime
@property (readonly, nonatomic) NSUInteger threadNetworkUptime; // ivar: _threadNetworkUptime
@property (readonly, nonatomic) NSUInteger txDelayAvg; // ivar: _txDelayAvg
@property (readonly, nonatomic) NSUInteger txSuccess; // ivar: _txSuccess
@property (readonly, nonatomic) NSUInteger txTotal; // ivar: _txTotal


-(id)initWithHomeUUID:(id)arg0 numStabilityReporters:(NSUInteger)arg1 numAdvertisedBRs:(NSUInteger)arg2 numAppleBRs:(NSUInteger)arg3 numThirdPartyBRs:(NSUInteger)arg4 numThreadNetworks:(NSUInteger)arg5 maxSimuIPPrefixesDetected:(NSUInteger)arg6 txTotal:(NSUInteger)arg7 txSuccess:(NSUInteger)arg8 txDelayAvg:(NSUInteger)arg9 rxTotal:(NSUInteger)arg10 rxSuccess:(NSUInteger)arg11 reportDuration:(NSUInteger)arg12 threadNetworkUptime:(NSUInteger)arg13 threadNetworkDowntime:(NSUInteger)arg14 numReadWrites:(NSUInteger)arg15 numReadErrors:(NSUInteger)arg16 numWriteErrors:(NSUInteger)arg17 numSessionErrors:(NSUInteger)arg18 ;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif