// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCESSORYVOICECONTROLCONTROLLER_H
#define ACCESSORYVOICECONTROLCONTROLLER_H

@class PSListController, NSMutableArray;


#import "BTSDevice.h"

@interface AccessoryVoiceControlController : PSListController {
    NSMutableArray *_volumeControlSpecifiers;
    BTSDevice *_currentDevice;
    BOOL _volumeControlEnabled;
    BOOL _setEnableVolumeControlAtStart;
    BOOL _dismissed;
}




-(BOOL)isVolumeControlEnabled;
-(id)clickHoldModeLeft;
-(id)clickHoldModeRight;
-(id)getVolumeControlEnabled:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)dealloc;
-(void)deviceDisconnectedHandler:(id)arg0 ;
-(void)deviceRemoved:(id)arg0 ;
-(void)dismissPressAndHold;
-(void)powerChangedHandler:(id)arg0 ;
-(void)setGestureMode:(id)arg0 specifier:(id)arg1 ;
-(void)setVolumeControlEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif