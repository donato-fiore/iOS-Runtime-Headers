// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARDOWNLINKIPPACKETDISCARDED_H
#define KCELLULARDOWNLINKIPPACKETDISCARDED_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface KCellularDownlinkIpPacketDiscarded : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPacket;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSData *packet; // ivar: _packet
@property (nonatomic) unsigned int port; // ivar: _port
@property (nonatomic) unsigned int protocol; // ivar: _protocol
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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