// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPBPEERSTABLEINFOX_H
#define TPPBPEERSTABLEINFOX_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "TPPBSecureElementIdentity.h"
#import "TPPBPeerStableInfoSetting.h"

@interface TPPBPeerStableInfoX : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger clock; // ivar: _clock
@property (retain, nonatomic) NSMutableArray *custodianRecoveryKeys; // ivar: _custodianRecoveryKeys
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *flexiblePolicyHash; // ivar: _flexiblePolicyHash
@property (nonatomic) NSUInteger flexiblePolicyVersion; // ivar: _flexiblePolicyVersion
@property (retain, nonatomic) NSString *frozenPolicyHash; // ivar: _frozenPolicyHash
@property (nonatomic) NSUInteger frozenPolicyVersion; // ivar: _frozenPolicyVersion
@property (nonatomic) BOOL hasClock;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly, nonatomic) BOOL hasFlexiblePolicyHash;
@property (nonatomic) BOOL hasFlexiblePolicyVersion;
@property (readonly, nonatomic) BOOL hasFrozenPolicyHash;
@property (nonatomic) BOOL hasFrozenPolicyVersion;
@property (nonatomic) BOOL hasIsInheritedAccount;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (readonly, nonatomic) BOOL hasRecoveryEncryptionPublicKey;
@property (readonly, nonatomic) BOOL hasRecoverySigningPublicKey;
@property (readonly, nonatomic) BOOL hasSecureElementIdentity;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (nonatomic) BOOL hasUserControllableViewStatus;
@property (readonly, nonatomic) BOOL hasWalrus;
@property (nonatomic) BOOL isInheritedAccount; // ivar: _isInheritedAccount
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (retain, nonatomic) NSMutableArray *policySecrets; // ivar: _policySecrets
@property (retain, nonatomic) NSData *recoveryEncryptionPublicKey; // ivar: _recoveryEncryptionPublicKey
@property (retain, nonatomic) NSData *recoverySigningPublicKey; // ivar: _recoverySigningPublicKey
@property (retain, nonatomic) TPPBSecureElementIdentity *secureElementIdentity; // ivar: _secureElementIdentity
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) int userControllableViewStatus; // ivar: _userControllableViewStatus
@property (retain, nonatomic) TPPBPeerStableInfoSetting *walrus; // ivar: _walrus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)custodianRecoveryKeysAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)policySecretsAtIndex:(NSUInteger)arg0 ;
-(id)userControllableViewStatusAsString:(int)arg0 ;
-(int)StringAsUserControllableViewStatus:(id)arg0 ;
-(void)addCustodianRecoveryKeys:(id)arg0 ;
-(void)addPolicySecrets:(id)arg0 ;
-(void)clearCustodianRecoveryKeys;
-(void)clearPolicySecrets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif