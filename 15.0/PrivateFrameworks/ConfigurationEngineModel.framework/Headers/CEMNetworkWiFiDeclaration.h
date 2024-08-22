// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKWIFIDECLARATION_H
#define CEMNETWORKWIFIDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMNetworkWiFiDeclaration_EAPClientConfiguration.h"
#import "CEMNetworkWiFiDeclaration_QoSMarkingPolicy.h"

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAutoJoin; // ivar: _payloadAutoJoin
@property (copy, nonatomic) NSNumber *payloadCaptiveBypass; // ivar: _payloadCaptiveBypass
@property (copy, nonatomic) NSString *payloadDisplayedOperatorName; // ivar: _payloadDisplayedOperatorName
@property (copy, nonatomic) NSString *payloadDomainName; // ivar: _payloadDomainName
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration; // ivar: _payloadEAPClientConfiguration
@property (copy, nonatomic) NSNumber *payloadEnableIPv6; // ivar: _payloadEnableIPv6
@property (copy, nonatomic) NSString *payloadEncryptionType; // ivar: _payloadEncryptionType
@property (copy, nonatomic) NSString *payloadHESSID; // ivar: _payloadHESSID
@property (copy, nonatomic) NSNumber *payloadHIDDENNETWORK; // ivar: _payloadHIDDENNETWORK
@property (copy, nonatomic) NSString *payloadInterface; // ivar: _payloadInterface
@property (copy, nonatomic) NSNumber *payloadIsHotspot; // ivar: _payloadIsHotspot
@property (copy, nonatomic) NSArray *payloadMCCAndMNCs; // ivar: _payloadMCCAndMNCs
@property (copy, nonatomic) NSArray *payloadNAIRealmNames; // ivar: _payloadNAIRealmNames
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID; // ivar: _payloadPayloadCertificateUUID
@property (copy, nonatomic) NSNumber *payloadPriority; // ivar: _payloadPriority
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed; // ivar: _payloadProxyPACFallbackAllowed
@property (copy, nonatomic) NSString *payloadProxyPACURL; // ivar: _payloadProxyPACURL
@property (copy, nonatomic) NSString *payloadProxyPassword; // ivar: _payloadProxyPassword
@property (copy, nonatomic) NSString *payloadProxyServer; // ivar: _payloadProxyServer
@property (copy, nonatomic) NSNumber *payloadProxyServerPort; // ivar: _payloadProxyServerPort
@property (copy, nonatomic) NSString *payloadProxyType; // ivar: _payloadProxyType
@property (copy, nonatomic) NSString *payloadProxyUsername; // ivar: _payloadProxyUsername
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy; // ivar: _payloadQoSMarkingPolicy
@property (copy, nonatomic) NSArray *payloadRoamingConsortiumOIs; // ivar: _payloadRoamingConsortiumOIs
@property (copy, nonatomic) NSString *payloadSSIDSTR; // ivar: _payloadSSIDSTR
@property (copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled; // ivar: _payloadServiceProviderRoamingEnabled
@property (copy, nonatomic) NSArray *payloadSetupModes; // ivar: _payloadSetupModes
@property (copy, nonatomic) NSNumber *payloadTLSCertificateRequired; // ivar: _payloadTLSCertificateRequired
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAutoJoin:(id)arg1 withSSIDSTR:(id)arg2 withHIDDENNETWORK:(id)arg3 withProxyType:(id)arg4 withEncryptionType:(id)arg5 withPassword:(id)arg6 withPayloadCertificateUUID:(id)arg7 withEAPClientConfiguration:(id)arg8 withDisplayedOperatorName:(id)arg9 withDomainName:(id)arg10 withRoamingConsortiumOIs:(id)arg11 withServiceProviderRoamingEnabled:(id)arg12 withIsHotspot:(id)arg13 withHESSID:(id)arg14 withNAIRealmNames:(id)arg15 withMCCAndMNCs:(id)arg16 withCaptiveBypass:(id)arg17 withQoSMarkingPolicy:(id)arg18 withInterface:(id)arg19 withSetupModes:(id)arg20 withPriority:(id)arg21 withEnableIPv6:(id)arg22 withTLSCertificateRequired:(id)arg23 withProxyServer:(id)arg24 withProxyServerPort:(id)arg25 withProxyUsername:(id)arg26 withProxyPassword:(id)arg27 withProxyPACURL:(id)arg28 withProxyPACFallbackAllowed:(id)arg29 ;
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