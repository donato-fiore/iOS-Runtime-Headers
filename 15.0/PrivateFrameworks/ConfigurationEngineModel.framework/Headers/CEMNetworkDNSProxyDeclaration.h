// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKDNSPROXYDECLARATION_H
#define CEMNETWORKDNSPROXYDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAnyPayload.h"

@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAppBundleIdentifier; // ivar: _payloadAppBundleIdentifier
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier; // ivar: _payloadProviderBundleIdentifier
@property (copy, nonatomic) CEMAnyPayload *payloadProviderConfiguration; // ivar: _payloadProviderConfiguration
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withAppBundleIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withAppBundleIdentifier:(id)arg1 withProviderBundleIdentifier:(id)arg2 withProviderConfiguration:(id)arg3 ;
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