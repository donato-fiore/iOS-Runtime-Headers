// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOSTATSREQUEST_H
#define IDSQRPROTOSTATSREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface IDSQRProtoStatsRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int clientLatencyMs; // ivar: _clientLatencyMs
@property (nonatomic) unsigned int clientTimestampNtp; // ivar: _clientTimestampNtp
@property (nonatomic) BOOL hasClientLatencyMs;
@property (nonatomic) BOOL hasReceivedPackets;
@property (nonatomic) BOOL hasSentPackets;
@property (nonatomic) unsigned int receivedPackets; // ivar: _receivedPackets
@property (nonatomic) unsigned int sentPackets; // ivar: _sentPackets


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