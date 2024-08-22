// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIVOICEOVERBLUETOOTHDEVICECONFIGCONTROLLER_H
#define AXUIVOICEOVERBLUETOOTHDEVICECONFIGCONTROLLER_H

@class NSArray, SCROBrailleClient;
@protocol VOSBluetoothConnectableDevice;


#import "AXUISettingsSetupCapableListController.h"

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {
    NSArray *_forgetGroupSpecifiers;
    NSArray *_additionalConfigGroupSpecifiers;
    BOOL _dismissed;
    SCROBrailleClient *_brailleClient;
}


@property (retain, nonatomic) NSObject<VOSBluetoothConnectableDevice> *device; // ivar: _device


-(id)init;
-(id)specifiers;
-(void)_allowUSBRM;
-(void)_clearVOUSBRMDisabler;
-(void)_doReallyForgetDevice;
-(void)dealloc;
-(void)deviceConnectedHandler:(id)arg0 ;
-(void)deviceRemoved:(id)arg0 ;
-(void)deviceUpdated:(id)arg0 ;
-(void)forgetDevice:(id)arg0 ;


@end


#endif