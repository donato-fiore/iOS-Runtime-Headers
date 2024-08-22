// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMENERGYSAVERDECLARATION_H
#define CEMSYSTEMENERGYSAVERDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMSystemEnergySaverDeclaration_PowerSettings.h"
#import "CEMSystemEnergySaverDeclaration_EnergySaverSchedule.h"

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower; // ivar: _payloadComappleEnergySaverdesktopACPower
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule; // ivar: _payloadComappleEnergySaverdesktopSchedule
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower; // ivar: _payloadComappleEnergySaverportableACPower
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower; // ivar: _payloadComappleEnergySaverportableBatteryPower
@property (copy, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby; // ivar: _payloadDestroyFVKeyOnStandby
@property (copy, nonatomic) NSNumber *payloadSleepDisabled; // ivar: _payloadSleepDisabled
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withComappleEnergySaverdesktopACPower:(id)arg1 withComappleEnergySaverportableACPower:(id)arg2 withComappleEnergySaverportableBatteryPower:(id)arg3 withComappleEnergySaverdesktopSchedule:(id)arg4 withSleepDisabled:(id)arg5 withDestroyFVKeyOnStandby:(id)arg6 ;
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