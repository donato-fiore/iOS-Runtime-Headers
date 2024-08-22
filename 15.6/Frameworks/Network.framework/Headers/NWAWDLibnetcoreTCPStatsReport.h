// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDLIBNETCORETCPSTATSREPORT_H
#define NWAWDLIBNETCORETCPSTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreTCPStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTcpConnectionAccepts;
@property (nonatomic) BOOL hasTcpConnectionAttempts;
@property (nonatomic) BOOL hasTcpIPv4AvgRTT;
@property (nonatomic) BOOL hasTcpIPv6AvgRTT;
@property (nonatomic) BOOL hasTcpRecvPLR;
@property (nonatomic) BOOL hasTcpSendPLR;
@property (nonatomic) BOOL hasTcpSendReorderRate;
@property (nonatomic) BOOL hasTcpSendTLRTO;
@property (nonatomic) NSUInteger tcpConnectionAccepts; // ivar: _tcpConnectionAccepts
@property (nonatomic) NSUInteger tcpConnectionAttempts; // ivar: _tcpConnectionAttempts
@property (nonatomic) NSUInteger tcpIPv4AvgRTT; // ivar: _tcpIPv4AvgRTT
@property (nonatomic) NSUInteger tcpIPv6AvgRTT; // ivar: _tcpIPv6AvgRTT
@property (nonatomic) NSUInteger tcpRecvPLR; // ivar: _tcpRecvPLR
@property (nonatomic) NSUInteger tcpSendPLR; // ivar: _tcpSendPLR
@property (nonatomic) NSUInteger tcpSendReorderRate; // ivar: _tcpSendReorderRate
@property (nonatomic) NSUInteger tcpSendTLRTO; // ivar: _tcpSendTLRTO


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