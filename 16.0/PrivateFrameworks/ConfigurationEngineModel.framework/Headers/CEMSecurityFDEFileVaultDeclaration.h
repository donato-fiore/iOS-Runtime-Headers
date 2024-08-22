// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYFDEFILEVAULTDECLARATION_H
#define CEMSECURITYFDEFILEVAULTDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCertificateIdentifier; // ivar: _payloadCertificateIdentifier
@property (copy, nonatomic) NSNumber *payloadDefer; // ivar: _payloadDefer
@property (copy, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout; // ivar: _payloadDeferDontAskAtUserLogout
@property (copy, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts; // ivar: _payloadDeferForceAtUserLoginMaxBypassAttempts
@property (copy, nonatomic) NSString *payloadEnable; // ivar: _payloadEnable
@property (copy, nonatomic) NSString *payloadOutputPath; // ivar: _payloadOutputPath
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSNumber *payloadShowRecoveryKey; // ivar: _payloadShowRecoveryKey
@property (copy, nonatomic) NSNumber *payloadUseKeychain; // ivar: _payloadUseKeychain
@property (copy, nonatomic) NSNumber *payloadUseRecoveryKey; // ivar: _payloadUseRecoveryKey
@property (copy, nonatomic) NSNumber *payloadUserEntersMissingInfo; // ivar: _payloadUserEntersMissingInfo
@property (copy, nonatomic) NSString *payloadUsername; // ivar: _payloadUsername
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withEnable:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withEnable:(id)arg1 withDefer:(id)arg2 withUserEntersMissingInfo:(id)arg3 withUseRecoveryKey:(id)arg4 withShowRecoveryKey:(id)arg5 withOutputPath:(id)arg6 withUsername:(id)arg7 withPassword:(id)arg8 withUseKeychain:(id)arg9 withDeferForceAtUserLoginMaxBypassAttempts:(id)arg10 withDeferDontAskAtUserLogout:(id)arg11 withCertificateIdentifier:(id)arg12 ;
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