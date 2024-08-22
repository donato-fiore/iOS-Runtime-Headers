// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKCELLULARDECLARATION_APNSITEM_H
#define CEMNETWORKCELLULARDECLARATION_APNSITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkCellularDeclaration_APNsItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMask; // ivar: _payloadAllowedProtocolMask
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMaskInRoaming; // ivar: _payloadAllowedProtocolMaskInRoaming
@property (copy, nonatomic) NSString *payloadAuthenticationType; // ivar: _payloadAuthenticationType
@property (copy, nonatomic) NSNumber *payloadDefaultProtocolMask; // ivar: _payloadDefaultProtocolMask
@property (copy, nonatomic) NSString *payloadName; // ivar: _payloadName
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSNumber *payloadProxyPort; // ivar: _payloadProxyPort
@property (copy, nonatomic) NSString *payloadProxyServer; // ivar: _payloadProxyServer
@property (copy, nonatomic) NSString *payloadUsername; // ivar: _payloadUsername


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithName:(id)arg0 ;
+(id)buildWithName:(id)arg0 withAuthenticationType:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 withProxyServer:(id)arg4 withProxyPort:(id)arg5 withDefaultProtocolMask:(id)arg6 withAllowedProtocolMask:(id)arg7 withAllowedProtocolMaskInRoaming:(id)arg8 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif