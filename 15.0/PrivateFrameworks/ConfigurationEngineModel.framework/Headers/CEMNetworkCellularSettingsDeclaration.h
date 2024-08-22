// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKCELLULARSETTINGSDECLARATION_H
#define CEMNETWORKCELLULARSETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAppCellularDataModification; // ivar: _payloadAllowAppCellularDataModification
@property (copy, nonatomic) NSNumber *payloadAllowCellularPlanModification; // ivar: _payloadAllowCellularPlanModification
@property (copy, nonatomic) NSNumber *payloadAllowDataRoaming; // ivar: _payloadAllowDataRoaming
@property (copy, nonatomic) NSNumber *payloadAllowGlobalBackgroundFetchWhenRoaming; // ivar: _payloadAllowGlobalBackgroundFetchWhenRoaming
@property (copy, nonatomic) NSNumber *payloadAllowPersonalHotspot; // ivar: _payloadAllowPersonalHotspot
@property (copy, nonatomic) NSNumber *payloadAllowVoiceRoaming; // ivar: _payloadAllowVoiceRoaming
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowDataRoaming:(id)arg1 withAllowVoiceRoaming:(id)arg2 withAllowPersonalHotspot:(id)arg3 withAllowGlobalBackgroundFetchWhenRoaming:(id)arg4 withAllowCellularPlanModification:(id)arg5 withAllowAppCellularDataModification:(id)arg6 ;
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