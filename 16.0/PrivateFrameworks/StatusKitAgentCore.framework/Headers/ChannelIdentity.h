// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHANNELIDENTITY_H
#define CHANNELIDENTITY_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface ChannelIdentity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *channelId; // ivar: _channelId
@property (nonatomic) int channelOwnershipType; // ivar: _channelOwnershipType
@property (retain, nonatomic) NSData *channelToken; // ivar: _channelToken
@property (retain, nonatomic) NSString *channelTopic; // ivar: _channelTopic
@property (readonly, nonatomic) BOOL hasChannelId;
@property (nonatomic) BOOL hasChannelOwnershipType;
@property (readonly, nonatomic) BOOL hasChannelToken;
@property (readonly, nonatomic) BOOL hasChannelTopic;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelOwnershipTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChannelOwnershipType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif