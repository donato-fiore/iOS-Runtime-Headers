// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTHREADNETWORKSTABILITYLOGEVENT_H
#define HMDTHREADNETWORKSTABILITYLOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxSimuIPPrefixesDetected; // ivar: _maxSimuIPPrefixesDetected
@property (readonly, nonatomic) NSUInteger numAdvertisedBRs; // ivar: _numAdvertisedBRs
@property (readonly, nonatomic) NSUInteger numAppleBRs; // ivar: _numAppleBRs
@property (readonly, nonatomic) NSUInteger numReadErrors; // ivar: _numReadErrors
@property (readonly, nonatomic) NSUInteger numReadWrites; // ivar: _numReadWrites
@property (readonly, nonatomic) NSUInteger numSessionErrors; // ivar: _numSessionErrors
@property (readonly, nonatomic) NSUInteger numThirdPartyBRs; // ivar: _numThirdPartyBRs
@property (readonly, nonatomic) NSUInteger numThreadNetworks; // ivar: _numThreadNetworks
@property (readonly, nonatomic) NSUInteger numWriteErrors; // ivar: _numWriteErrors
@property (readonly, nonatomic) NSUInteger reportDuration; // ivar: _reportDuration
@property (readonly, nonatomic) NSUInteger rxSuccess; // ivar: _rxSuccess
@property (readonly, nonatomic) NSUInteger rxTotal; // ivar: _rxTotal
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger threadNetworkDowntime; // ivar: _threadNetworkDowntime
@property (readonly, nonatomic) NSUInteger threadNetworkUptime; // ivar: _threadNetworkUptime
@property (readonly, nonatomic) NSString *topReadWriteError; // ivar: _topReadWriteError
@property (readonly, nonatomic) NSString *topSessionError; // ivar: _topSessionError
@property (readonly, nonatomic) NSUInteger txDelayAvg; // ivar: _txDelayAvg
@property (readonly, nonatomic) NSUInteger txSuccess; // ivar: _txSuccess
@property (readonly, nonatomic) NSUInteger txTotal; // ivar: _txTotal


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 numAdvertisedBRs:(NSUInteger)arg1 numAppleBRs:(NSUInteger)arg2 numThirdPartyBRs:(NSUInteger)arg3 numThreadNetworks:(NSUInteger)arg4 maxSimuIPPrefixesDetected:(NSUInteger)arg5 txTotal:(NSUInteger)arg6 txSuccess:(NSUInteger)arg7 txDelayAvg:(NSUInteger)arg8 rxTotal:(NSUInteger)arg9 rxSuccess:(NSUInteger)arg10 reportDuration:(NSUInteger)arg11 threadNetworkUptime:(NSUInteger)arg12 threadNetworkDowntime:(NSUInteger)arg13 numReadWrites:(NSUInteger)arg14 numReadErrors:(NSUInteger)arg15 numWriteErrors:(NSUInteger)arg16 topReadWriteError:(id)arg17 topSessionError:(id)arg18 numSessionErrors:(NSUInteger)arg19 ;
-(id)serializedLogEvent;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif