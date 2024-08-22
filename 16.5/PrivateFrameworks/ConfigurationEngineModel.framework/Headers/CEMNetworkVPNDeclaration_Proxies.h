// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMNETWORKVPNDECLARATION_PROXIES_H
#define CEMNETWORKVPNDECLARATION_PROXIES_H

@class NSNumber, NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadHTTPEnable; // ivar: _payloadHTTPEnable
@property (copy, nonatomic) NSNumber *payloadHTTPPort; // ivar: _payloadHTTPPort
@property (copy, nonatomic) NSString *payloadHTTPProxy; // ivar: _payloadHTTPProxy
@property (copy, nonatomic) NSString *payloadHTTPProxyPassword; // ivar: _payloadHTTPProxyPassword
@property (copy, nonatomic) NSString *payloadHTTPProxyUsername; // ivar: _payloadHTTPProxyUsername
@property (copy, nonatomic) NSNumber *payloadHTTPSEnable; // ivar: _payloadHTTPSEnable
@property (copy, nonatomic) NSNumber *payloadHTTPSPort; // ivar: _payloadHTTPSPort
@property (copy, nonatomic) NSString *payloadHTTPSProxy; // ivar: _payloadHTTPSProxy
@property (copy, nonatomic) NSNumber *payloadProxyAutoConfigEnable; // ivar: _payloadProxyAutoConfigEnable
@property (copy, nonatomic) NSString *payloadProxyAutoConfigURLString; // ivar: _payloadProxyAutoConfigURLString
@property (copy, nonatomic) NSNumber *payloadProxyAutoDiscoveryEnable; // ivar: _payloadProxyAutoDiscoveryEnable
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains; // ivar: _payloadSupplementalMatchDomains


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithHTTPEnable:(id)arg0 withHTTPPort:(id)arg1 withHTTPProxy:(id)arg2 withHTTPProxyPassword:(id)arg3 withHTTPProxyUsername:(id)arg4 withHTTPSEnable:(id)arg5 withHTTPSPort:(id)arg6 withHTTPSProxy:(id)arg7 withProxyAutoConfigEnable:(id)arg8 withProxyAutoDiscoveryEnable:(id)arg9 withProxyAutoConfigURLString:(id)arg10 withSupplementalMatchDomains:(id)arg11 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif