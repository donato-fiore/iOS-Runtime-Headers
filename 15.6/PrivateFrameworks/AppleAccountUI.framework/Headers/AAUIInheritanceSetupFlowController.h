// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIINHERITANCESETUPFLOWCONTROLLER_H
#define AAUIINHERITANCESETUPFLOWCONTROLLER_H

@class ACAccount, AALocalContactInfo, AABeneficiaryInfo, NSString, UINavigationController;
@protocol AAUIInheritanceSetupFlowDelegate, CNContactPickerDelegate, AAUIAccountContactSelectorDelegate, AAUIInviteMessageFlowControllerDelegate, UIPrintInteractionControllerDelegate;

#import <Foundation/Foundation.h>

#import "AAUIContactsProvider.h"
#import "AAUIOBWelcomeController.h"
#import "AAUIInviteMessageFlowController.h"
#import "AAUIInheritanceShareAccessKeyOptionsViewController.h"

@interface AAUIInheritanceSetupFlowController : NSObject <AAUIInheritanceSetupFlowDelegate, CNContactPickerDelegate, AAUIAccountContactSelectorDelegate, AAUIInviteMessageFlowControllerDelegate, UIPrintInteractionControllerDelegate>

 {
    ACAccount *_appleAccount;
    AALocalContactInfo *_selectedContact;
    AAUIContactsProvider *_contactsProvider;
    AABeneficiaryInfo *_selectedBeneficiary;
    NSString *_setupAuthToken;
    AAUIOBWelcomeController *_firstTimeSetupVC;
    AAUIOBWelcomeController *_shareDataVC;
    AAUIInviteMessageFlowController *_inviteFlowController;
    AAUIInheritanceShareAccessKeyOptionsViewController *_shareAccessKeyOptionsViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(id)_doneButton;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 navigationController:(id)arg1 ;
-(void)_beginAddBeneficiaryFlow;
-(void)_dismiss;
-(void)_dismissAndNavigateToDateOfBirthSettings;
-(void)_fetchSuggestedContacts;
-(void)_setupBeneficiary;
-(void)_shareDataDidContinue;
-(void)_showAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_showContactSelector:(id)arg0 ;
-(void)_showDefaultContactPicker;
-(void)_showDefaultContactPickerWithCancel;
-(void)_showIntro;
-(void)_showPrintPreview;
-(void)_showSetupCompleteWithShareTypePrint;
-(void)_showShareAccessKey;
-(void)_showShareData;
-(void)_startInviteMessageFlow;
-(void)_validateAccountWithCompletion:(id)arg0 ;
-(void)_verifyCDPWithCompletion:(id)arg0 ;
-(void)accountContactSelector:(id)arg0 didSelectContact:(id)arg1 ;
-(void)accountContactSelectorShowOtherContacts:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)inheritanceDidSelectSharingOption:(NSUInteger)arg0 ;
-(void)inviteMessageCompleteSecondaryButtonTapped:(id)arg0 ;
-(void)inviteMessageFlowDidFinish:(id)arg0 ;
-(void)inviteMessageFlowWasCancelled:(id)arg0 ;
-(void)inviteMessageWasSent:(id)arg0 completion:(id)arg1 ;
-(void)start;


@end


#endif