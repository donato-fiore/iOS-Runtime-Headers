// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETDEBUGNETWORKINTERFACE_H
#define NETSCHEMANETDEBUGNETWORKINTERFACE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETDebugNetworkInterface : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger bytesReceived; // ivar: _bytesReceived
@property (nonatomic) NSUInteger bytesRetransmitted; // ivar: _bytesRetransmitted
@property (nonatomic) NSUInteger bytesSent; // ivar: _bytesSent
@property (nonatomic) NSUInteger bytesUnacked; // ivar: _bytesUnacked
@property (nonatomic) NSUInteger duplicateBytesReceived; // ivar: _duplicateBytesReceived
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasBytesUnacked;
@property (nonatomic) BOOL hasDuplicateBytesReceived;
@property (nonatomic) BOOL hasOutOfOrderBytesReceived;
@property (nonatomic) BOOL hasPacketsReceived;
@property (nonatomic) BOOL hasPacketsSent;
@property (nonatomic) BOOL hasRttBest;
@property (nonatomic) BOOL hasRttCurrent;
@property (nonatomic) BOOL hasRttSmoothed;
@property (nonatomic) BOOL hasRttVariance;
@property (nonatomic) BOOL hasSendBandwidth;
@property (nonatomic) BOOL hasSendBufferBytes;
@property (nonatomic) BOOL hasSubflowSwitchCount;
@property (nonatomic) BOOL hasSynRetransmits;
@property (nonatomic) BOOL hasTfoSynDataAcked;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger outOfOrderBytesReceived; // ivar: _outOfOrderBytesReceived
@property (nonatomic) NSUInteger packetsReceived; // ivar: _packetsReceived
@property (nonatomic) NSUInteger packetsSent; // ivar: _packetsSent
@property (nonatomic) unsigned int rttBest; // ivar: _rttBest
@property (nonatomic) unsigned int rttCurrent; // ivar: _rttCurrent
@property (nonatomic) unsigned int rttSmoothed; // ivar: _rttSmoothed
@property (nonatomic) unsigned int rttVariance; // ivar: _rttVariance
@property (nonatomic) NSUInteger sendBandwidth; // ivar: _sendBandwidth
@property (nonatomic) NSUInteger sendBufferBytes; // ivar: _sendBufferBytes
@property (nonatomic) unsigned int subflowSwitchCount; // ivar: _subflowSwitchCount
@property (nonatomic) unsigned int synRetransmits; // ivar: _synRetransmits
@property (nonatomic) unsigned int tfoSynDataAcked; // ivar: _tfoSynDataAcked


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBytesReceived;
-(void)deleteBytesRetransmitted;
-(void)deleteBytesSent;
-(void)deleteBytesUnacked;
-(void)deleteDuplicateBytesReceived;
-(void)deleteOutOfOrderBytesReceived;
-(void)deletePacketsReceived;
-(void)deletePacketsSent;
-(void)deleteRttBest;
-(void)deleteRttCurrent;
-(void)deleteRttSmoothed;
-(void)deleteRttVariance;
-(void)deleteSendBandwidth;
-(void)deleteSendBufferBytes;
-(void)deleteSubflowSwitchCount;
-(void)deleteSynRetransmits;
-(void)deleteTfoSynDataAcked;
-(void)writeTo:(id)arg0 ;


@end


#endif