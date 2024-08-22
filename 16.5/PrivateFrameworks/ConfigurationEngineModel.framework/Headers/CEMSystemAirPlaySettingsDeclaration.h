// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMAIRPLAYSETTINGSDECLARATION_H
#define CEMSYSTEMAIRPLAYSETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAirPlayIncomingRequests; // ivar: _payloadAllowAirPlayIncomingRequests
@property (copy, nonatomic) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword; // ivar: _payloadForceAirPlayIncomingRequestsPairingPassword
@property (copy, nonatomic) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword; // ivar: _payloadForceAirPlayOutgoingRequestsPairingPassword
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg1 withForceAirPlayIncomingRequestsPairingPassword:(id)arg2 withAllowAirPlayIncomingRequests:(id)arg3 ;
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