// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONPASSCODECONTROLLER_H
#define CDPUIDEVICETODEVICEENCRYPTIONPASSCODECONTROLLER_H

@class UIViewController, BFFPasscodeViewController;
@protocol BFFPasscodeViewControllerDelegate, CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol, CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate;

#import <Foundation/Foundation.h>


@interface CDPUIDeviceToDeviceEncryptionPasscodeController : NSObject <BFFPasscodeViewControllerDelegate>

 {
    UIViewController *_presentingViewController;
    BFFPasscodeViewController *_passcodeViewController;
    id *_passcodeValidationCompletion;
    os_unfair_lock_s _completionLock;
    id<CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> *_vm;
}


@property (weak, nonatomic) NSObject<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> *delegate; // ivar: _delegate


+(id)passcodeControllerWithPresenter:(id)arg0 vm:(id)arg1 ;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg0 ;
-(id)passcodeValidationCompletion:(SEL)arg0 ;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg0 ;
-(void)_userTappedCancel:(id)arg0 ;
-(void)createPasscodeStateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)dismissFlowWithLocalSecret:(id)arg0 error:(id)arg1 ;
-(void)passcodeViewController:(id)arg0 didFinishWithPasscodeCreation:(id)arg1 ;
-(void)setPasscodeValidationCompletion:(id)arg0 ;


@end


#endif