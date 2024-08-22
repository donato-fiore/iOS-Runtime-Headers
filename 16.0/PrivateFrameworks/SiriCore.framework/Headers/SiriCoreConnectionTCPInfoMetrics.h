// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORECONNECTIONTCPINFOMETRICS_H
#define SIRICORECONNECTIONTCPINFOMETRICS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SiriCoreConnectionTCPInfoMetrics : NSObject

@property (readonly, copy, nonatomic) NSNumber *bytesReceived; // ivar: _bytesReceived
@property (readonly, copy, nonatomic) NSNumber *bytesRetransmitted; // ivar: _bytesRetransmitted
@property (readonly, copy, nonatomic) NSNumber *bytesSent; // ivar: _bytesSent
@property (readonly, copy, nonatomic) NSNumber *bytesUnacked; // ivar: _bytesUnacked
@property (readonly, copy, nonatomic) NSNumber *duplicateBytesReceived; // ivar: _duplicateBytesReceived
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, copy, nonatomic) NSNumber *outOfOrderBytesReceived; // ivar: _outOfOrderBytesReceived
@property (readonly, copy, nonatomic) NSNumber *packetsReceived; // ivar: _packetsReceived
@property (readonly, copy, nonatomic) NSNumber *packetsSent; // ivar: _packetsSent
@property (readonly, copy, nonatomic) NSNumber *rttBest; // ivar: _rttBest
@property (readonly, copy, nonatomic) NSNumber *rttCurrent; // ivar: _rttCurrent
@property (readonly, copy, nonatomic) NSNumber *rttSmoothed; // ivar: _rttSmoothed
@property (readonly, copy, nonatomic) NSNumber *rttVariance; // ivar: _rttVariance
@property (readonly, copy, nonatomic) NSNumber *sendBandwidth; // ivar: _sendBandwidth
@property (readonly, copy, nonatomic) NSNumber *sendBufferBytes; // ivar: _sendBufferBytes
@property (readonly, copy, nonatomic) NSNumber *synRetransmits; // ivar: _synRetransmits
@property (readonly, copy, nonatomic) NSNumber *tfoSynDataAcked; // ivar: _tfoSynDataAcked


-(id)description;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 rttCurrent:(id)arg1 rttSmoothed:(id)arg2 rttVariance:(id)arg3 rttBest:(id)arg4 packetsSent:(id)arg5 bytesSent:(id)arg6 bytesRetransmitted:(id)arg7 bytesUnacked:(id)arg8 packetsReceived:(id)arg9 bytesReceived:(id)arg10 duplicateBytesReceived:(id)arg11 outOfOrderBytesReceived:(id)arg12 sendBufferBytes:(id)arg13 sendBandwidth:(id)arg14 synRetransmits:(id)arg15 tfoSynDataAcked:(id)arg16 ;


@end


#endif