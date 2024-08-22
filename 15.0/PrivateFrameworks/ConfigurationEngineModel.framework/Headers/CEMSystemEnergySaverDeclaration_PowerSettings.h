// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMENERGYSAVERDECLARATION_POWERSETTINGS_H
#define CEMSYSTEMENERGYSAVERDECLARATION_POWERSETTINGS_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAutomaticRestartOnPowerLoss; // ivar: _payloadAutomaticRestartOnPowerLoss
@property (copy, nonatomic) NSNumber *payloadDiskSleepTimer; // ivar: _payloadDiskSleepTimer
@property (copy, nonatomic) NSNumber *payloadDisplaySleepTimer; // ivar: _payloadDisplaySleepTimer
@property (copy, nonatomic) NSNumber *payloadDynamicPowerStep; // ivar: _payloadDynamicPowerStep
@property (copy, nonatomic) NSNumber *payloadReduceProcessorSpeed; // ivar: _payloadReduceProcessorSpeed
@property (copy, nonatomic) NSNumber *payloadSystemSleepTimer; // ivar: _payloadSystemSleepTimer
@property (copy, nonatomic) NSNumber *payloadWakeOnLAN; // ivar: _payloadWakeOnLAN
@property (copy, nonatomic) NSNumber *payloadWakeOnModemRing; // ivar: _payloadWakeOnModemRing


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDisplaySleepTimer:(id)arg0 withDiskSleepTimer:(id)arg1 withSystemSleepTimer:(id)arg2 withReduceProcessorSpeed:(id)arg3 withDynamicPowerStep:(id)arg4 withWakeOnLAN:(id)arg5 withWakeOnModemRing:(id)arg6 withAutomaticRestartOnPowerLoss:(id)arg7 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif