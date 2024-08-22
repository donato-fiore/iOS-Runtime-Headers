// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPNETWORKTIMINGDATA_H
#define _CPNETWORKTIMINGDATA_H

@class PBCodable, NSString, NSData;
@protocol _CPNetworkTimingData, NSSecureCoding;


#import "_CPTCPInfo.h"

@interface _CPNetworkTimingData : PBCodable <_CPNetworkTimingData, NSSecureCoding>



@property (nonatomic) BOOL QUICWhitelistedDomain; // ivar: _QUICWhitelistedDomain
@property (nonatomic) BOOL TFOSuccess; // ivar: _TFOSuccess
@property (nonatomic) unsigned int connectEnd; // ivar: _connectEnd
@property (nonatomic) unsigned int connectStart; // ivar: _connectStart
@property (nonatomic) BOOL connectionRace; // ivar: _connectionRace
@property (nonatomic) BOOL connectionReused; // ivar: _connectionReused
@property (copy, nonatomic) NSString *connectionUUID; // ivar: _connectionUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int domainLookupEnd; // ivar: _domainLookupEnd
@property (nonatomic) unsigned int domainLookupStart; // ivar: _domainLookupStart
@property (nonatomic) unsigned int fetchStart; // ivar: _fetchStart
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interfaceIdentifier; // ivar: _interfaceIdentifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *networkProtocolName; // ivar: _networkProtocolName
@property (copy, nonatomic) NSData *peerAddress; // ivar: _peerAddress
@property (nonatomic) unsigned int redirectCount; // ivar: _redirectCount
@property (nonatomic) unsigned int redirectCountW3C; // ivar: _redirectCountW3C
@property (nonatomic) unsigned int redirectEnd; // ivar: _redirectEnd
@property (nonatomic) unsigned int redirectStart; // ivar: _redirectStart
@property (nonatomic) unsigned int requestEnd; // ivar: _requestEnd
@property (nonatomic) unsigned int requestHeaderSize; // ivar: _requestHeaderSize
@property (nonatomic) unsigned int requestStart; // ivar: _requestStart
@property (nonatomic) unsigned int responseBodyBytesDecoded; // ivar: _responseBodyBytesDecoded
@property (nonatomic) unsigned int responseBodyBytesReceived; // ivar: _responseBodyBytesReceived
@property (nonatomic) unsigned int responseEnd; // ivar: _responseEnd
@property (nonatomic) unsigned int responseHeaderSize; // ivar: _responseHeaderSize
@property (nonatomic) unsigned int responseStart; // ivar: _responseStart
@property (nonatomic) unsigned int secureConnectStart; // ivar: _secureConnectStart
@property (retain, nonatomic) _CPTCPInfo *startTimeCounts; // ivar: _startTimeCounts
@property (retain, nonatomic) _CPTCPInfo *stopTimeCounts; // ivar: _stopTimeCounts
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timingDataInit; // ivar: _timingDataInit


+(id)startMetricsForNormalization;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithTelemetryDictionary:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif