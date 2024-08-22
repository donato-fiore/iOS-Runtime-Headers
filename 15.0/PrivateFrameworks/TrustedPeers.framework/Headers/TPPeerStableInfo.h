// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPEERSTABLEINFO_H
#define TPPEERSTABLEINFO_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "TPPolicyVersion.h"
#import "TPPBSecureElementIdentity.h"
#import "TPPBPeerStableInfoSetting.h"

@interface TPPeerStableInfo : NSObject

@property (readonly, nonatomic) NSUInteger clock; // ivar: _clock
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) TPPolicyVersion *flexiblePolicyVersion; // ivar: _flexiblePolicyVersion
@property (readonly) TPPolicyVersion *frozenPolicyVersion; // ivar: _frozenPolicyVersion
@property (nonatomic) BOOL isInheritedAccount; // ivar: _isInheritedAccount
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSDictionary *policySecrets; // ivar: _policySecrets
@property (readonly, nonatomic) NSData *recoveryEncryptionPublicKey; // ivar: _recoveryEncryptionPublicKey
@property (readonly, nonatomic) NSData *recoverySigningPublicKey; // ivar: _recoverySigningPublicKey
@property (readonly, nonatomic) TPPBSecureElementIdentity *secureElementIdentity; // ivar: _secureElementIdentity
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSData *sig; // ivar: _sig
@property (readonly, nonatomic) int syncUserControllableViews; // ivar: _syncUserControllableViews
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *walrusSetting; // ivar: _walrusSetting


-(BOOL)checkSignatureWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerStableInfo:(id)arg0 ;
-(id)bestPolicyVersion;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithClock:(NSUInteger)arg0 frozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 syncUserControllableViews:(int)arg4 secureElementIdentity:(id)arg5 walrusSetting:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 recoverySigningPubKey:(id)arg10 recoveryEncryptionPubKey:(id)arg11 isInheritedAccount:(BOOL)arg12 data:(id)arg13 sig:(id)arg14 ;
-(id)initWithClock:(NSUInteger)arg0 frozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 syncUserControllableViews:(int)arg4 secureElementIdentity:(id)arg5 walrusSetting:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 signingKeyPair:(id)arg10 recoverySigningPubKey:(id)arg11 recoveryEncryptionPubKey:(id)arg12 isInheritedAccount:(BOOL)arg13 error:(*id)arg14 ;
-(id)initWithData:(id)arg0 sig:(id)arg1 ;


@end


#endif