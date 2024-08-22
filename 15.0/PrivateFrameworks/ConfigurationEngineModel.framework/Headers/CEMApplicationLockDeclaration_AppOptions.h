// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONLOCKDECLARATION_APPOPTIONS_H
#define CEMAPPLICATIONLOCKDECLARATION_APPOPTIONS_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMApplicationLockDeclaration_AppOptions : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadDisableAutoLock; // ivar: _payloadDisableAutoLock
@property (copy, nonatomic) NSNumber *payloadDisableDeviceRotation; // ivar: _payloadDisableDeviceRotation
@property (copy, nonatomic) NSNumber *payloadDisableRingerSwitch; // ivar: _payloadDisableRingerSwitch
@property (copy, nonatomic) NSNumber *payloadDisableSleepWakeButton; // ivar: _payloadDisableSleepWakeButton
@property (copy, nonatomic) NSNumber *payloadDisableTouch; // ivar: _payloadDisableTouch
@property (copy, nonatomic) NSNumber *payloadDisableVolumeButtons; // ivar: _payloadDisableVolumeButtons
@property (copy, nonatomic) NSNumber *payloadEnableAssistiveTouch; // ivar: _payloadEnableAssistiveTouch
@property (copy, nonatomic) NSNumber *payloadEnableInvertColors; // ivar: _payloadEnableInvertColors
@property (copy, nonatomic) NSNumber *payloadEnableMonoAudio; // ivar: _payloadEnableMonoAudio
@property (copy, nonatomic) NSNumber *payloadEnableSpeakSelection; // ivar: _payloadEnableSpeakSelection
@property (copy, nonatomic) NSNumber *payloadEnableVoiceOver; // ivar: _payloadEnableVoiceOver
@property (copy, nonatomic) NSNumber *payloadEnableZoom; // ivar: _payloadEnableZoom


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDisableTouch:(id)arg0 withDisableDeviceRotation:(id)arg1 withDisableVolumeButtons:(id)arg2 withDisableRingerSwitch:(id)arg3 withDisableSleepWakeButton:(id)arg4 withDisableAutoLock:(id)arg5 withEnableVoiceOver:(id)arg6 withEnableZoom:(id)arg7 withEnableInvertColors:(id)arg8 withEnableAssistiveTouch:(id)arg9 withEnableSpeakSelection:(id)arg10 withEnableMonoAudio:(id)arg11 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif