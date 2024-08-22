// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKWIFIDECLARATION_EAPCLIENTCONFIGURATION_H
#define CEMNETWORKWIFIDECLARATION_EAPCLIENTCONFIGURATION_H

@class NSArray, NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadAcceptEAPTypes; // ivar: _payloadAcceptEAPTypes
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPAC; // ivar: _payloadEAPFASTProvisionPAC
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPACAnonymously; // ivar: _payloadEAPFASTProvisionPACAnonymously
@property (copy, nonatomic) NSNumber *payloadEAPFASTUsePAC; // ivar: _payloadEAPFASTUsePAC
@property (copy, nonatomic) NSNumber *payloadEAPSIMAKAEncryptedIdentityEnabled; // ivar: _payloadEAPSIMAKAEncryptedIdentityEnabled
@property (copy, nonatomic) NSNumber *payloadEAPSIMNumberOfRANDs; // ivar: _payloadEAPSIMNumberOfRANDs
@property (copy, nonatomic) NSNumber *payloadOneTimePassword; // ivar: _payloadOneTimePassword
@property (copy, nonatomic) NSNumber *payloadOneTimeUserPassword; // ivar: _payloadOneTimeUserPassword
@property (copy, nonatomic) NSString *payloadOuterIdentity; // ivar: _payloadOuterIdentity
@property (copy, nonatomic) NSArray *payloadPayloadCertificateAnchorUUID; // ivar: _payloadPayloadCertificateAnchorUUID
@property (copy, nonatomic) NSString *payloadSystemModeCredentialsSource; // ivar: _payloadSystemModeCredentialsSource
@property (copy, nonatomic) NSNumber *payloadSystemModeUseOpenDirectoryCredentials; // ivar: _payloadSystemModeUseOpenDirectoryCredentials
@property (copy, nonatomic) NSNumber *payloadTLSAllowTrustExceptions; // ivar: _payloadTLSAllowTrustExceptions
@property (copy, nonatomic) NSNumber *payloadTLSCertificateIsRequired; // ivar: _payloadTLSCertificateIsRequired
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion; // ivar: _payloadTLSMaximumVersion
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion; // ivar: _payloadTLSMinimumVersion
@property (copy, nonatomic) NSArray *payloadTLSTrustedCertificates; // ivar: _payloadTLSTrustedCertificates
@property (copy, nonatomic) NSArray *payloadTLSTrustedServerNames; // ivar: _payloadTLSTrustedServerNames
@property (copy, nonatomic) NSString *payloadTTLSInnerAuthentication; // ivar: _payloadTTLSInnerAuthentication
@property (copy, nonatomic) NSString *payloadUserName; // ivar: _payloadUserName
@property (copy, nonatomic) NSString *payloadUserPassword; // ivar: _payloadUserPassword


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithAcceptEAPTypes:(id)arg0 ;
+(id)buildWithAcceptEAPTypes:(id)arg0 withUserName:(id)arg1 withUserPassword:(id)arg2 withOneTimePassword:(id)arg3 withPayloadCertificateAnchorUUID:(id)arg4 withTLSTrustedCertificates:(id)arg5 withTLSTrustedServerNames:(id)arg6 withTLSAllowTrustExceptions:(id)arg7 withTLSCertificateIsRequired:(id)arg8 withTTLSInnerAuthentication:(id)arg9 withTLSMinimumVersion:(id)arg10 withTLSMaximumVersion:(id)arg11 withOuterIdentity:(id)arg12 withEAPFASTUsePAC:(id)arg13 withEAPFASTProvisionPAC:(id)arg14 withEAPFASTProvisionPACAnonymously:(id)arg15 withEAPSIMNumberOfRANDs:(id)arg16 withSystemModeCredentialsSource:(id)arg17 withSystemModeUseOpenDirectoryCredentials:(id)arg18 withOneTimeUserPassword:(id)arg19 withEAPSIMAKAEncryptedIdentityEnabled:(id)arg20 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif