// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYADCERTIFICATEDECLARATION_H
#define CEMSECURITYADCERTIFICATEDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess; // ivar: _payloadAllowAllAppsAccess
@property (copy, nonatomic) NSString *payloadCertServer; // ivar: _payloadCertServer
@property (copy, nonatomic) NSString *payloadCertTemplate; // ivar: _payloadCertTemplate
@property (copy, nonatomic) NSString *payloadCertificateAcquisitionMechanism; // ivar: _payloadCertificateAcquisitionMechanism
@property (copy, nonatomic) NSString *payloadCertificateAuthority; // ivar: _payloadCertificateAuthority
@property (copy, nonatomic) NSNumber *payloadCertificateRenewalTimeInterval; // ivar: _payloadCertificateRenewalTimeInterval
@property (copy, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (copy, nonatomic) NSNumber *payloadEnableAutoRenewal; // ivar: _payloadEnableAutoRenewal
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable; // ivar: _payloadKeyIsExtractable
@property (copy, nonatomic) NSNumber *payloadKeysize; // ivar: _payloadKeysize
@property (copy, nonatomic) NSNumber *payloadPromptForCredentials; // ivar: _payloadPromptForCredentials
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withCertServer:(id)arg1 withCertTemplate:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withCertServer:(id)arg1 withCertTemplate:(id)arg2 withDescription:(id)arg3 withCertificateRenewalTimeInterval:(id)arg4 withCertificateAuthority:(id)arg5 withCertificateAcquisitionMechanism:(id)arg6 withAllowAllAppsAccess:(id)arg7 withPromptForCredentials:(id)arg8 withKeyIsExtractable:(id)arg9 withKeysize:(id)arg10 withEnableAutoRenewal:(id)arg11 ;
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