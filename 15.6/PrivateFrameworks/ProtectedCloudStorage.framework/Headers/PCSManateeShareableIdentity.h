// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSMANATEESHAREABLEIDENTITY_H
#define PCSMANATEESHAREABLEIDENTITY_H

@class PBCodable;
@protocol NSCopying;


#import "PCSManateePrivateKey.h"

@interface PCSManateeShareableIdentity : PBCodable <NSCopying>



@property (retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey; // ivar: _encryptionPrivateKey
@property (readonly, nonatomic) BOOL hasEncryptionPrivateKey;
@property (readonly, nonatomic) BOOL hasSigningPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *signingPrivateKey; // ivar: _signingPrivateKey


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