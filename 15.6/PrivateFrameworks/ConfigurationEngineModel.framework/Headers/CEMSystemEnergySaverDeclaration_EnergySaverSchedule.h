// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMENERGYSAVERDECLARATION_ENERGYSAVERSCHEDULE_H
#define CEMSYSTEMENERGYSAVERDECLARATION_ENERGYSAVERSCHEDULE_H



#import "CEMPayloadBase.h"
#import "CEMSystemEnergySaverDeclaration_RepeatingPowerItem.h"

@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOff; // ivar: _payloadRepeatingPowerOff
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOn; // ivar: _payloadRepeatingPowerOn


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRepeatingPowerOn:(id)arg0 withRepeatingPowerOff:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif