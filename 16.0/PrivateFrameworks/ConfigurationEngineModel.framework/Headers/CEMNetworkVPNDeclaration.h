// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_H
#define CEMNETWORKVPNDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMNetworkVPNDeclaration_AlwaysOn.h"
#import "CEMNetworkVPNDeclaration_DNS.h"
#import "CEMNetworkVPNDeclaration_IKEv2.h"
#import "CEMNetworkVPNDeclaration_IPSec.h"
#import "CEMNetworkVPNDeclaration_IPv4.h"
#import "CEMNetworkVPNDeclaration_PPP.h"
#import "CEMNetworkVPNDeclaration_Proxies.h"
#import "CEMNetworkVPNDeclaration_VPN.h"
#import "CEMNetworkVPNDeclaration_VendorConfig.h"

@interface CEMNetworkVPNDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_AlwaysOn *payloadAlwaysOn; // ivar: _payloadAlwaysOn
@property (copy, nonatomic) CEMNetworkVPNDeclaration_DNS *payloadDNS; // ivar: _payloadDNS
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // ivar: _payloadDisconnectOnIdle
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // ivar: _payloadDisconnectOnIdleTimer
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IKEv2 *payloadIKEv2; // ivar: _payloadIKEv2
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPSec *payloadIPSec; // ivar: _payloadIPSec
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPv4 *payloadIPv4; // ivar: _payloadIPv4
@property (copy, nonatomic) CEMNetworkVPNDeclaration_PPP *payloadPPP; // ivar: _payloadPPP
@property (copy, nonatomic) CEMNetworkVPNDeclaration_Proxies *payloadProxies; // ivar: _payloadProxies
@property (copy, nonatomic) NSString *payloadUserDefinedName; // ivar: _payloadUserDefinedName
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VPN *payloadVPN; // ivar: _payloadVPN
@property (copy, nonatomic) NSString *payloadVPNSubType; // ivar: _payloadVPNSubType
@property (copy, nonatomic) NSString *payloadVPNType; // ivar: _payloadVPNType
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VendorConfig *payloadVendorConfig; // ivar: _payloadVendorConfig
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withVPNType:(id)arg1 withUserDefinedName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withVPNType:(id)arg1 withVPNSubType:(id)arg2 withUserDefinedName:(id)arg3 withVendorConfig:(id)arg4 withVPN:(id)arg5 withIPv4:(id)arg6 withPPP:(id)arg7 withIPSec:(id)arg8 withIKEv2:(id)arg9 withProxies:(id)arg10 withAlwaysOn:(id)arg11 withDisconnectOnIdle:(id)arg12 withDisconnectOnIdleTimer:(id)arg13 withDNS:(id)arg14 ;
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