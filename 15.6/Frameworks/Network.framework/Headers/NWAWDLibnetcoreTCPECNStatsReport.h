// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDLIBNETCORETCPECNSTATSREPORT_H
#define NWAWDLIBNETCORETCPECNSTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTcpECNClientNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNClientSetup;
@property (nonatomic) BOOL hasTcpECNClientSuccess;
@property (nonatomic) BOOL hasTcpECNConnNoPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossNoCE;
@property (nonatomic) BOOL hasTcpECNConnRecvCE;
@property (nonatomic) BOOL hasTcpECNConnRecvECE;
@property (nonatomic) BOOL hasTcpECNFallbackCE;
@property (nonatomic) BOOL hasTcpECNFallbackReorder;
@property (nonatomic) BOOL hasTcpECNFallbackSynLoss;
@property (nonatomic) BOOL hasTcpECNNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNRecvCE;
@property (nonatomic) BOOL hasTcpECNRecvECE;
@property (nonatomic) BOOL hasTcpECNSentECE;
@property (nonatomic) BOOL hasTcpECNServerNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNServerSetup;
@property (nonatomic) BOOL hasTcpECNServerSuccess;
@property (nonatomic) BOOL hasTcpECNSynAckLost;
@property (nonatomic) BOOL hasTcpECNSynLost;
@property (nonatomic) BOOL tcpECNClientNegotiationEnabled; // ivar: _tcpECNClientNegotiationEnabled
@property (nonatomic) NSUInteger tcpECNClientSetup; // ivar: _tcpECNClientSetup
@property (nonatomic) NSUInteger tcpECNClientSuccess; // ivar: _tcpECNClientSuccess
@property (nonatomic) NSUInteger tcpECNConnNoPacketLossCE; // ivar: _tcpECNConnNoPacketLossCE
@property (nonatomic) NSUInteger tcpECNConnPacketLossCE; // ivar: _tcpECNConnPacketLossCE
@property (nonatomic) NSUInteger tcpECNConnPacketLossNoCE; // ivar: _tcpECNConnPacketLossNoCE
@property (nonatomic) NSUInteger tcpECNConnRecvCE; // ivar: _tcpECNConnRecvCE
@property (nonatomic) NSUInteger tcpECNConnRecvECE; // ivar: _tcpECNConnRecvECE
@property (nonatomic) NSUInteger tcpECNFallbackCE; // ivar: _tcpECNFallbackCE
@property (nonatomic) NSUInteger tcpECNFallbackReorder; // ivar: _tcpECNFallbackReorder
@property (nonatomic) NSUInteger tcpECNFallbackSynLoss; // ivar: _tcpECNFallbackSynLoss
@property (nonatomic) NSUInteger tcpECNNotSupportedPeer; // ivar: _tcpECNNotSupportedPeer
@property (nonatomic) NSUInteger tcpECNRecvCE; // ivar: _tcpECNRecvCE
@property (nonatomic) NSUInteger tcpECNRecvECE; // ivar: _tcpECNRecvECE
@property (nonatomic) NSUInteger tcpECNSentECE; // ivar: _tcpECNSentECE
@property (nonatomic) BOOL tcpECNServerNegotiationEnabled; // ivar: _tcpECNServerNegotiationEnabled
@property (nonatomic) NSUInteger tcpECNServerSetup; // ivar: _tcpECNServerSetup
@property (nonatomic) NSUInteger tcpECNServerSuccess; // ivar: _tcpECNServerSuccess
@property (nonatomic) NSUInteger tcpECNSynAckLost; // ivar: _tcpECNSynAckLost
@property (nonatomic) NSUInteger tcpECNSynLost; // ivar: _tcpECNSynLost


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif