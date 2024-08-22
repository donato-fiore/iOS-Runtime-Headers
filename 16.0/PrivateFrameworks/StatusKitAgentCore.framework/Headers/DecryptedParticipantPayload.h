// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DECRYPTEDPARTICIPANTPAYLOAD_H
#define DECRYPTEDPARTICIPANTPAYLOAD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface DecryptedParticipantPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, nonatomic) BOOL hasChannelIdentifier;
@property (readonly, nonatomic) BOOL hasPresenceIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTokenUri;
@property (retain, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *tokenUri; // ivar: _tokenUri


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