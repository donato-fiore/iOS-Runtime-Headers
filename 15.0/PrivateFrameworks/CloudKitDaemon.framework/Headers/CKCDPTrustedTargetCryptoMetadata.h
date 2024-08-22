// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCDPTRUSTEDTARGETCRYPTOMETADATA_H
#define CKCDPTRUSTEDTARGETCRYPTOMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CKCDPTrustedTargetCryptoMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *encryptedInvocationKey; // ivar: _encryptedInvocationKey
@property (readonly, nonatomic) BOOL hasEncryptedInvocationKey;
@property (nonatomic) BOOL hasKeyVersion;
@property (readonly, nonatomic) BOOL hasProtectionSource;
@property (nonatomic) BOOL hasScheme;
@property (nonatomic) NSInteger keyVersion; // ivar: _keyVersion
@property (retain, nonatomic) NSString *protectionSource; // ivar: _protectionSource
@property (nonatomic) int scheme; // ivar: _scheme


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)schemeAsString:(int)arg0 ;
-(int)StringAsScheme:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif