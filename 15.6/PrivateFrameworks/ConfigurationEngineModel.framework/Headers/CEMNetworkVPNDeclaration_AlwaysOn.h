// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKVPNDECLARATION_ALWAYSON_H
#define CEMNETWORKVPNDECLARATION_ALWAYSON_H

@class NSNumber, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAllowAllCaptiveNetworkPlugins; // ivar: _payloadAllowAllCaptiveNetworkPlugins
@property (copy, nonatomic) NSNumber *payloadAllowCaptiveWebSheet; // ivar: _payloadAllowCaptiveWebSheet
@property (copy, nonatomic) NSArray *payloadAllowedCaptiveNetworkPlugins; // ivar: _payloadAllowedCaptiveNetworkPlugins
@property (copy, nonatomic) NSArray *payloadServiceExceptions; // ivar: _payloadServiceExceptions
@property (copy, nonatomic) NSArray *payloadTunnelConfigurations; // ivar: _payloadTunnelConfigurations
@property (copy, nonatomic) NSNumber *payloadUIToggleEnabled; // ivar: _payloadUIToggleEnabled


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTunnelConfigurations:(id)arg0 ;
+(id)buildWithTunnelConfigurations:(id)arg0 withUIToggleEnabled:(id)arg1 withServiceExceptions:(id)arg2 withAllowCaptiveWebSheet:(id)arg3 withAllowAllCaptiveNetworkPlugins:(id)arg4 withAllowedCaptiveNetworkPlugins:(id)arg5 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif