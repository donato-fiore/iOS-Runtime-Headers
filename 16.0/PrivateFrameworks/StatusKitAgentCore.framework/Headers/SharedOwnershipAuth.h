// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDOWNERSHIPAUTH_H
#define SHAREDOWNERSHIPAUTH_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface SharedOwnershipAuth : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *channelPublicKey; // ivar: _channelPublicKey
@property (readonly, nonatomic) BOOL hasChannelPublicKey;
@property (readonly, nonatomic) BOOL hasNonce;
@property (readonly, nonatomic) BOOL hasServerEncryptionKey;
@property (readonly, nonatomic) BOOL hasSignNonce;
@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSData *nonce; // ivar: _nonce
@property (retain, nonatomic) NSData *serverEncryptionKey; // ivar: _serverEncryptionKey
@property (retain, nonatomic) NSData *signNonce; // ivar: _signNonce
@property (retain, nonatomic) NSString *simpleJwt; // ivar: _simpleJwt


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