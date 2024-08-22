// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONUIPROVIDERIMP_H
#define CDPUIDEVICETODEVICEENCRYPTIONUIPROVIDERIMP_H

@protocol CDPUIDeviceToDeviceEncryptionUIProvider;

#import <Foundation/Foundation.h>


@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider>



@property (copy, nonatomic) id *cancelActionHandler; // ivar: _cancelActionHandler
@property (copy, nonatomic) id *continueActionHandler; // ivar: _continueActionHandler


-(id)_upgradeAlertControllerWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(id)_upgradeCardUINavigationControllerWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(id)_upgradeCardUIViewControllerWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(id)_upgradeViewControllerWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(void)cancelTapped:(id)arg0 ;
-(void)continueTapped:(id)arg0 ;
-(void)dealloc;
-(void)promptForCancelWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(void)promptForUpgradeWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;
-(void)promptIneligibilityWithContext:(id)arg0 vm:(id)arg1 completion:(id)arg2 ;


@end


#endif