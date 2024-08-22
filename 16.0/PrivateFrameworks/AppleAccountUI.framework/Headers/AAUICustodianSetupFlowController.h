// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICUSTODIANSETUPFLOWCONTROLLER_H
#define AAUICUSTODIANSETUPFLOWCONTROLLER_H

@class AIDAAccountManager, AACustodianController, NSDictionary, AALocalContactInfo, NSUUID, NSString, UINavigationController;
@protocol AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate, AAUICustodianSetupFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "AAUIContactsProvider.h"
#import "AAUIOBWelcomeController.h"
#import "AAUIGrandSlamRemoteUIPresenter.h"
#import "AAUIInviteMessageFlowController.h"
#import "AAUIChooseContactController.h"

@interface AAUICustodianSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate>

 {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    AACustodianController *_custodianController;
    AAUIOBWelcomeController *_firstTimeSetupVC;
    NSDictionary *_authResults;
    AALocalContactInfo *_invitedContact;
    NSUUID *_custodianshipID;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUIInviteMessageFlowController *_inviteFlowController;
    AAUIChooseContactController *_chooseContactController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUICustodianSetupFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation; // ivar: _forceInlinePresentation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 navigationController:(id)arg1 ;
-(void)_beginAddRecoveryContactFlow;
-(void)_cancelCustodianInvite;
-(void)_dismiss;
-(void)_dismissCFUIfNeeded;
-(void)_displayAlertForNotReachableContact:(id)arg0 ;
-(void)_fetchSuggestedContacts;
-(void)_hideActivityIndicator;
-(void)_inviteContact:(id)arg0 ;
-(void)_loadRemoteUIPresenterRequest:(id)arg0 ;
-(void)_showActivityIndicator;
-(void)_showAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_showChooseContact;
-(void)_showChooseContactWithCancel;
-(void)_showDeviceUpgradeUI;
-(void)_showFirstTimeSetup;
-(void)_showSuggestedContactSelector:(id)arg0 ;
-(void)_startInviteMessageFlow;
-(void)_validateAccountWithCompletion:(id)arg0 ;
-(void)_verifyAndInviteContact:(id)arg0 ;
-(void)_verifyCDPWithCompletion:(id)arg0 ;
-(void)accountContactSelector:(id)arg0 didSelectContact:(id)arg1 ;
-(void)accountContactSelectorShowOtherContacts:(id)arg0 ;
-(void)chooseContactController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)inviteMessageFlowDidFinish:(id)arg0 ;
-(void)inviteMessageFlowWasCancelled:(id)arg0 ;
-(void)remoteUIDidDismiss:(id)arg0 ;
-(void)remoteUIRequestComplete:(id)arg0 error:(id)arg1 ;
-(void)start;


@end


#endif