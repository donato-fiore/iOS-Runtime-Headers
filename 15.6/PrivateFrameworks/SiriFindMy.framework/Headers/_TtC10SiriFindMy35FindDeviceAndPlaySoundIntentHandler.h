// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10SIRIFINDMY35FINDDEVICEANDPLAYSOUNDINTENTHANDLER_H
#define _TTC10SIRIFINDMY35FINDDEVICEANDPLAYSOUNDINTENTHANDLER_H

@class INExtension;
@protocol FindDeviceAndPlaySoundIntentHandling;



@interface _TtC10SiriFindMy35FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling>

 {
    ? deviceState;
    ? deviceLockStateProvider;
    ? findDeviceSession;
}




-(id)handlerForIntent:(id)arg0 ;
-(id)init;
-(void)confirmFindDeviceAndPlaySound:(id)arg0 completion:(id)arg1 ;
-(void)handleFindDeviceAndPlaySound:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForFindDeviceAndPlaySound:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif