// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIMYPENDINGBENEFICIARYACTIONHANDLER_H
#define AAUIMYPENDINGBENEFICIARYACTIONHANDLER_H

@class UINavigationController, NSString;
@protocol AAUIInheritanceSetupFlowDelegate, AAUIInviteMessageFlowControllerDelegate;


#import "AAUIMyBeneficiaryActionHandler.h"
#import "AAUIInheritanceShareAccessKeyOptionsViewController.h"
#import "AAUIInviteMessageFlowController.h"

@interface AAUIMyPendingBeneficiaryActionHandler : AAUIMyBeneficiaryActionHandler <AAUIInheritanceSetupFlowDelegate, AAUIInviteMessageFlowControllerDelegate>

 {
    UINavigationController *_navigationController;
    AAUIInheritanceShareAccessKeyOptionsViewController *_shareAccessKeyOptionsViewController;
    AAUIInviteMessageFlowController *_inviteFlowController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_appleAccount;
-(id)_doneButton;
-(void)_checkMessageEligibility;
-(void)_dismiss;
-(void)_dismissAndNavigateToDateOfBirthSettings;
-(void)_showAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_showIncompatibleDeviceAlert;
-(void)_showPrintPreview;
-(void)_showSetupCompleteWithShareTypePrint;
-(void)_startInviteMessageFlow;
-(void)doPrimaryAction:(id)arg0 specifier:(id)arg1 ;
-(void)inheritanceDidSelectSharingOption:(NSUInteger)arg0 ;
-(void)inviteMessageCompleteSecondaryButtonTapped:(id)arg0 ;
-(void)inviteMessageFlowDidFinish:(id)arg0 ;
-(void)inviteMessageWasSent:(id)arg0 completion:(id)arg1 ;


@end


#endif