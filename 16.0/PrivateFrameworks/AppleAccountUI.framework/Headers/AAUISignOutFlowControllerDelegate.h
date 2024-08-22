// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUISIGNOUTFLOWCONTROLLERDELEGATE_H
#define AAUISIGNOUTFLOWCONTROLLERDELEGATE_H

@class ACAccountStore, AIDAAccountManager, NSString, UIViewController;
@protocol AAUISignOutControllerDelegate, AAUIRecoveryFactorControllerDelegate, AASignOutFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AAUIRecoveryFactorControllerDelegate, AASignOutFlowControllerDelegate>

 {
    id *_pendingSignOutCompletion;
    ACAccountStore *_accountStore;
}


@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_completedRestoreFromiCloud:(id)arg0 ;
-(void)_disableDeviceLocatorForAccount:(id)arg0 inViewController:(id)arg1 completion:(id)arg2 ;
-(void)recoveryFactorController:(id)arg0 didFinishAddingRecoveryContactWithError:(id)arg1 ;
-(void)signOutController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signOutControllerDidCancel:(id)arg0 ;
-(void)signOutFlowController:(id)arg0 disableFindMyDeviceForAccount:(id)arg1 completion:(id)arg2 ;
-(void)signOutFlowController:(id)arg0 showAlertWithTitle:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)signOutFlowController:(id)arg0 signOutAccount:(id)arg1 completion:(id)arg2 ;


@end


#endif