// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDNWPROTOCOLESTABLISHMENTREPORT_H
#define NWAWDNWPROTOCOLESTABLISHMENTREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWAWDNWProtocolEstablishmentReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger handshakeMilliseconds; // ivar: _handshakeMilliseconds
@property (nonatomic) NSUInteger handshakeRTTMilliseconds; // ivar: _handshakeRTTMilliseconds
@property (nonatomic) BOOL hasHandshakeMilliseconds;
@property (nonatomic) BOOL hasHandshakeRTTMilliseconds;
@property (nonatomic) BOOL hasProtocolIndex;
@property (readonly, nonatomic) BOOL hasProtocolName;
@property (nonatomic) int protocolIndex; // ivar: _protocolIndex
@property (retain, nonatomic) NSString *protocolName; // ivar: _protocolName


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