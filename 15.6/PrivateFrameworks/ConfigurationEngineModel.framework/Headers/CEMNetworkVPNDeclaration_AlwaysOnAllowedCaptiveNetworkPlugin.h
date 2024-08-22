// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKVPNDECLARATION_ALWAYSONALLOWEDCAPTIVENETWORKPLUGIN_H
#define CEMNETWORKVPNDECLARATION_ALWAYSONALLOWEDCAPTIVENETWORKPLUGIN_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg0 ;
+(id)buildWithBundleIdentifier:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif