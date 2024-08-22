// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIACCOUNTRECOVERYCONTROLLER_H
#define CDPUIACCOUNTRECOVERYCONTROLLER_H



#import "CDPUIController.h"

@interface CDPUIAccountRecoveryController : CDPUIController



-(BOOL)performingAccountRecovery;
-(id)_accountRecoveryDevicePickerEscapeOffer;
-(id)_accountRecoveryEscapeOfferForDevice:(id)arg0 ;
-(id)devicePicker:(id)arg0 escapeOffersForDevices:(id)arg1 ;
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg0 ;
-(void)_setupDevicePickerController:(id)arg0 ;
-(void)devicePicker:(id)arg0 didSelectDevice:(id)arg1 ;


@end


#endif