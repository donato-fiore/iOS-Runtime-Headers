// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIDEVICETODEVICEENCRYPTIONHELPER_H
#define AAUIDEVICETODEVICEENCRYPTIONHELPER_H

@class AKAppleIDAuthenticationController, UIViewController;
@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;

#import <Foundation/Foundation.h>


@interface AAUIDeviceToDeviceEncryptionHelper : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController; // ivar: _authController
@property (weak, nonatomic) NSObject<AAUIDeviceToDeviceEncryptionHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(BOOL)_hasPasscode;
-(BOOL)_isHSA2AvailableForAuthenticationContext:(id)arg0 ;
-(id)_encryptionErrorFromError:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)_authenticateContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg0 completion:(id)arg1 ;
-(void)_validateCDPStateForAuthResults:(id)arg0 withCompletion:(id)arg1 ;
-(void)_validatePasscodeWithCompletion:(id)arg0 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif