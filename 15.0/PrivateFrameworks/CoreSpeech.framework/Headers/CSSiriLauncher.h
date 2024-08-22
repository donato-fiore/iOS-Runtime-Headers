// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRILAUNCHER_H
#define CSSIRILAUNCHER_H


#import <Foundation/Foundation.h>


@interface CSSiriLauncher : NSObject



+(id)sharedLauncher;
-(void)deactivateSiriActivationConnectionWithReason:(NSInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(void)notifyBluetoothDeviceVoiceTrigger:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)notifyBuiltInVoiceTrigger:(id)arg0 myriadPHash:(id)arg1 completion:(id)arg2 ;
-(void)notifyBuiltInVoiceTriggerPrewarm:(id)arg0 completion:(id)arg1 ;
-(void)notifyCarPlayVoiceTrigger:(id)arg0 deviceId:(id)arg1 myriadPHash:(id)arg2 completion:(id)arg3 ;
-(void)notifyCarPlayVoiceTriggerPrewarm:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)notifyRemoraVoiceTrigger:(id)arg0 myriadPHash:(id)arg1 deviceId:(id)arg2 completion:(id)arg3 ;
-(void)notifyRemoraVoiceTriggerPrewarm:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)notifyWakeKeywordSpokenBluetoothDevice:(id)arg0 deviceId:(id)arg1 ;
-(void)notifyWakeKeywordSpokenCarPlay:(id)arg0 deviceId:(id)arg1 ;
-(void)notifyWakeKeywordSpokenInBuiltInMic:(id)arg0 ;
-(void)notifyWakeKeywordSpokenRemora:(id)arg0 deviceId:(id)arg1 ;


@end


#endif