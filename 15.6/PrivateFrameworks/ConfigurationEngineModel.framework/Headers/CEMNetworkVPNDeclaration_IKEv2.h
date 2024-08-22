// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKVPNDECLARATION_IKEV2_H
#define CEMNETWORKVPNDECLARATION_IKEV2_H

@class NSString, NSNumber;


#import "CEMPayloadBase.h"
#import "CEMNetworkVPNDeclaration_SecurityAssociationParameters.h"

@interface CEMNetworkVPNDeclaration_IKEv2 : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAuthName; // ivar: _payloadAuthName
@property (copy, nonatomic) NSString *payloadAuthPassword; // ivar: _payloadAuthPassword
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) NSString *payloadCertificateType; // ivar: _payloadCertificateType
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters; // ivar: _payloadChildSecurityAssociationParameters
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate; // ivar: _payloadDeadPeerDetectionRate
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE; // ivar: _payloadDisableMOBIKE
@property (copy, nonatomic) NSNumber *payloadDisableRedirect; // ivar: _payloadDisableRedirect
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck; // ivar: _payloadEnableCertificateRevocationCheck
@property (copy, nonatomic) NSNumber *payloadEnablePFS; // ivar: _payloadEnablePFS
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled; // ivar: _payloadExtendedAuthEnabled
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters; // ivar: _payloadIKESecurityAssociationParameters
@property (copy, nonatomic) NSString *payloadLocalIdentifier; // ivar: _payloadLocalIdentifier
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval; // ivar: _payloadNATKeepAliveInterval
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable; // ivar: _payloadNATKeepAliveOffloadEnable
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSString *payloadRemoteAddress; // ivar: _payloadRemoteAddress
@property (copy, nonatomic) NSString *payloadRemoteIdentifier; // ivar: _payloadRemoteIdentifier
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName; // ivar: _payloadServerCertificateCommonName
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName; // ivar: _payloadServerCertificateIssuerCommonName
@property (copy, nonatomic) NSString *payloadSharedSecret; // ivar: _payloadSharedSecret
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion; // ivar: _payloadTLSMaximumVersion
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion; // ivar: _payloadTLSMinimumVersion
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet; // ivar: _payloadUseConfigurationAttributeInternalIPSubnet


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithRemoteAddress:(id)arg0 withLocalIdentifier:(id)arg1 withRemoteIdentifier:(id)arg2 withAuthenticationMethod:(id)arg3 ;
+(id)buildWithRemoteAddress:(id)arg0 withLocalIdentifier:(id)arg1 withRemoteIdentifier:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withSharedSecret:(id)arg5 withExtendedAuthEnabled:(id)arg6 withAuthName:(id)arg7 withDisableRedirect:(id)arg8 withDisableMOBIKE:(id)arg9 withUseConfigurationAttributeInternalIPSubnet:(id)arg10 withEnablePFS:(id)arg11 withEnableCertificateRevocationCheck:(id)arg12 withAuthPassword:(id)arg13 withDeadPeerDetectionRate:(id)arg14 withCertificateType:(id)arg15 withServerCertificateIssuerCommonName:(id)arg16 withServerCertificateCommonName:(id)arg17 withIKESecurityAssociationParameters:(id)arg18 withChildSecurityAssociationParameters:(id)arg19 withTLSMinimumVersion:(id)arg20 withTLSMaximumVersion:(id)arg21 withNATKeepAliveOffloadEnable:(id)arg22 withNATKeepAliveInterval:(id)arg23 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif