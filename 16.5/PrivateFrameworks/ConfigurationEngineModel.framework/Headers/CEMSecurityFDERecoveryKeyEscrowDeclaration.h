// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSECURITYFDERECOVERYKEYESCROWDECLARATION_H
#define CEMSECURITYFDERECOVERYKEYESCROWDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecurityFDERecoveryKeyEscrowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadDeviceKey; // ivar: _payloadDeviceKey
@property (copy, nonatomic) NSString *payloadEncryptCertPayloadUUID; // ivar: _payloadEncryptCertPayloadUUID
@property (copy, nonatomic) NSString *payloadLocation; // ivar: _payloadLocation
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withLocation:(id)arg1 withEncryptCertPayloadUUID:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withLocation:(id)arg1 withEncryptCertPayloadUUID:(id)arg2 withDeviceKey:(id)arg3 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif