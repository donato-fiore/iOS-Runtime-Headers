// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKGLOBALHTTPPROXYDECLARATION_H
#define CEMNETWORKGLOBALHTTPPROXYDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMNetworkGlobalHTTPProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadProxyCaptiveLoginAllowed; // ivar: _payloadProxyCaptiveLoginAllowed
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed; // ivar: _payloadProxyPACFallbackAllowed
@property (copy, nonatomic) NSString *payloadProxyPACURL; // ivar: _payloadProxyPACURL
@property (copy, nonatomic) NSString *payloadProxyPassword; // ivar: _payloadProxyPassword
@property (copy, nonatomic) NSString *payloadProxyServer; // ivar: _payloadProxyServer
@property (copy, nonatomic) NSNumber *payloadProxyServerPort; // ivar: _payloadProxyServerPort
@property (copy, nonatomic) NSString *payloadProxyType; // ivar: _payloadProxyType
@property (copy, nonatomic) NSString *payloadProxyUsername; // ivar: _payloadProxyUsername
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withProxyServer:(id)arg1 withProxyServerPort:(id)arg2 withProxyPACURL:(id)arg3 ;
+(id)buildWithIdentifier:(id)arg0 withProxyType:(id)arg1 withProxyServer:(id)arg2 withProxyServerPort:(id)arg3 withProxyUsername:(id)arg4 withProxyPassword:(id)arg5 withProxyPACURL:(id)arg6 withProxyPACFallbackAllowed:(id)arg7 withProxyCaptiveLoginAllowed:(id)arg8 ;
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