// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSIGNWITHFIDOKEYREQUEST_H
#define NPKPROTOSIGNWITHFIDOKEYREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKProtoSignWithFidoKeyRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *challenge; // ivar: _challenge
@property (retain, nonatomic) NSData *externalizedAuth; // ivar: _externalizedAuth
@property (retain, nonatomic) NSData *fidoKeyHash; // ivar: _fidoKeyHash
@property (readonly, nonatomic) BOOL hasChallenge;
@property (readonly, nonatomic) BOOL hasExternalizedAuth;
@property (readonly, nonatomic) BOOL hasFidoKeyHash;
@property (readonly, nonatomic) BOOL hasPublicKeyIdentifier;
@property (readonly, nonatomic) BOOL hasRelyingParty;
@property (readonly, nonatomic) BOOL hasRelyingPartyAccountHash;
@property (retain, nonatomic) NSString *publicKeyIdentifier; // ivar: _publicKeyIdentifier
@property (retain, nonatomic) NSString *relyingParty; // ivar: _relyingParty
@property (retain, nonatomic) NSString *relyingPartyAccountHash; // ivar: _relyingPartyAccountHash


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