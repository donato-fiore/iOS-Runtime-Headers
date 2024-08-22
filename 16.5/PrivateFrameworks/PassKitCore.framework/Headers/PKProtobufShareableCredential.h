// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFSHAREABLECREDENTIAL_H
#define PKPROTOBUFSHAREABLECREDENTIAL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PKProtobufShareableCredential : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *cardConfigurationIdentifier; // ivar: _cardConfigurationIdentifier
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSString *credentialIdentifierHash; // ivar: _credentialIdentifierHash
@property (retain, nonatomic) NSString *encryptedPushProvisioningTarget; // ivar: _encryptedPushProvisioningTarget
@property (readonly, nonatomic) BOOL hasCardConfigurationIdentifier;
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (readonly, nonatomic) BOOL hasCredentialIdentifierHash;
@property (readonly, nonatomic) BOOL hasEncryptedPushProvisioningTarget;
@property (readonly, nonatomic) BOOL hasNonce;
@property (readonly, nonatomic) BOOL hasOwnerDisplayName;
@property (readonly, nonatomic) BOOL hasSharingInstanceIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *ownerDisplayName; // ivar: _ownerDisplayName
@property (retain, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif