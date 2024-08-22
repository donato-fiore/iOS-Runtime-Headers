// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMAIRPRINTSETTINGSDECLARATION_H
#define CEMSYSTEMAIRPRINTSETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrint; // ivar: _payloadAllowAirPrint
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage; // ivar: _payloadAllowAirPrintCredentialsStorage
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery; // ivar: _payloadAllowAirPrintiBeaconDiscovery
@property (copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement; // ivar: _payloadForceAirPrintTrustedTLSRequirement
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowAirPrint:(id)arg1 withForceAirPrintTrustedTLSRequirement:(id)arg2 withAllowAirPrintiBeaconDiscovery:(id)arg3 withAllowAirPrintCredentialsStorage:(id)arg4 ;
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