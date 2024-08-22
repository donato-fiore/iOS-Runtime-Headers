// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NGMPBOUTERMESSAGE_H
#define NGMPBOUTERMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NGMPBOuterMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *encryptedPayload; // ivar: _encryptedPayload
@property (retain, nonatomic) NSData *ephemeralPubKey; // ivar: _ephemeralPubKey
@property (readonly, nonatomic) BOOL hasKeyValidator;
@property (retain, nonatomic) NSData *keyValidator; // ivar: _keyValidator
@property (retain, nonatomic) NSData *signature; // ivar: _signature


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