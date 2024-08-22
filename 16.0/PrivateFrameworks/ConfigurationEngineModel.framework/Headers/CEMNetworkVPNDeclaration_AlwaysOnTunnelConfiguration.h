// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_ALWAYSONTUNNELCONFIGURATION_H
#define CEMNETWORKVPNDECLARATION_ALWAYSONTUNNELCONFIGURATION_H

@class NSString, NSNumber, NSArray;


#import "CEMPayloadBase.h"
#import "CEMNetworkVPNDeclaration_SecurityAssociationParameters.h"

@interface CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAuthName; // ivar: _payloadAuthName
@property (copy, nonatomic) NSString *payloadAuthPassword; // ivar: _payloadAuthPassword
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters; // ivar: _payloadChildSecurityAssociationParameters
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate; // ivar: _payloadDeadPeerDetectionRate
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE; // ivar: _payloadDisableMOBIKE
@property (copy, nonatomic) NSNumber *payloadDisableRedirect; // ivar: _payloadDisableRedirect
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck; // ivar: _payloadEnableCertificateRevocationCheck
@property (copy, nonatomic) NSNumber *payloadEnablePFS; // ivar: _payloadEnablePFS
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled; // ivar: _payloadExtendedAuthEnabled
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters; // ivar: _payloadIKESecurityAssociationParameters
@property (copy, nonatomic) NSArray *payloadInterfaces; // ivar: _payloadInterfaces
@property (copy, nonatomic) NSString *payloadLocalIdentifier; // ivar: _payloadLocalIdentifier
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval; // ivar: _payloadNATKeepAliveInterval
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable; // ivar: _payloadNATKeepAliveOffloadEnable
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSString *payloadProtocolType; // ivar: _payloadProtocolType
@property (copy, nonatomic) NSString *payloadRemoteAddress; // ivar: _payloadRemoteAddress
@property (copy, nonatomic) NSString *payloadRemoteIdentifier; // ivar: _payloadRemoteIdentifier
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName; // ivar: _payloadServerCertificateCommonName
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName; // ivar: _payloadServerCertificateIssuerCommonName
@property (copy, nonatomic) NSString *payloadSharedSecret; // ivar: _payloadSharedSecret
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet; // ivar: _payloadUseConfigurationAttributeInternalIPSubnet


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithRemoteAddress:(id)arg0 withLocalIdentifier:(id)arg1 withRemoteIdentifier:(id)arg2 withAuthenticationMethod:(id)arg3 withProtocolType:(id)arg4 ;
+(id)buildWithRemoteAddress:(id)arg0 withLocalIdentifier:(id)arg1 withRemoteIdentifier:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withSharedSecret:(id)arg5 withExtendedAuthEnabled:(id)arg6 withDisableRedirect:(id)arg7 withDisableMOBIKE:(id)arg8 withUseConfigurationAttributeInternalIPSubnet:(id)arg9 withEnablePFS:(id)arg10 withEnableCertificateRevocationCheck:(id)arg11 withNATKeepAliveOffloadEnable:(id)arg12 withNATKeepAliveInterval:(id)arg13 withAuthName:(id)arg14 withAuthPassword:(id)arg15 withDeadPeerDetectionRate:(id)arg16 withProtocolType:(id)arg17 withServerCertificateIssuerCommonName:(id)arg18 withServerCertificateCommonName:(id)arg19 withIKESecurityAssociationParameters:(id)arg20 withChildSecurityAssociationParameters:(id)arg21 withInterfaces:(id)arg22 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif