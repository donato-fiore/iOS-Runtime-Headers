// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREDENTIALPICKERPANEVIEWCONTROLLER_H
#define ASCREDENTIALPICKERPANEVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, NSArray, AKASAuthorizationProvider, ASCPasswordCredential, NSString, UIWindow;
@protocol SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _ASAuthenticationPresentationProvider, ASCredentialRequestSubPaneConfirmButtonDelegate, UITableViewDataSource, ASCLoginChoiceProtocol, OS_dispatch_queue;


#import "ASCredentialRequestPaneViewController.h"
#import "ASCredentialRequestImageSubPane.h"
#import "ASCredentialRequestConfirmButtonSubPane.h"
#import "_ASPasswordCredentialAuthenticationViewController.h"

@interface ASCredentialPickerPaneViewController : ASCredentialRequestPaneViewController <SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _ASAuthenticationPresentationProvider, ASCredentialRequestSubPaneConfirmButtonDelegate, UITableViewDataSource>

 {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCredentialRequestImageSubPane *_imageSubPane;
    ASCredentialRequestConfirmButtonSubPane *_confirmButtonSubPane;
    NSInteger _currentlySelectedRow;
    id<ASCLoginChoiceProtocol> *_previouslySelectedLoginChoice;
    BOOL _shouldExpandOtherLoginChoices;
    NSArray *_tableViewLoginChoices;
    NSArray *_otherLoginChoices;
    AKASAuthorizationProvider *_authKitAuthorizationProvider;
    NSObject<OS_dispatch_queue> *_alertQueue;
    _ASPasswordCredentialAuthenticationViewController *_credentialProviderViewController;
    ASCPasswordCredential *_externalPasswordCredentialForSelectedLoginChoice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIWindow *presentationAnchor;
@property (readonly) Class superclass;


-(BOOL)_errorIsPINRequiredError:(id)arg0 ;
-(BOOL)_shouldShowLoginChoicesInTableView;
-(BOOL)validateReadyForAuthorization:(id)arg0 ;
-(CGFloat)_secondaryButtonBottomMargin;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)numberOfTableRows;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForRow:(NSInteger)arg0 ;
-(id)_iconImage;
-(id)_infoLabelStringForPassword;
-(id)_infoLabelStringForPlatformPublicKeyCredentialAssertion;
-(id)_infoLabelStringForPlatformPublicKeyCredentialRegistration;
-(id)_infoLabelStringForSecurityKeyCredentialAssertion;
-(id)_infoLabelStringForSignInWithApple;
-(id)_localizedInfoString;
-(id)_serviceName;
-(id)initWithPresentationContext:(id)arg0 ;
-(id)initWithPresentationContext:(id)arg0 shouldExpandOtherLoginChoices:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addAuthorizationButtonToPaneContext:(id)arg0 ;
-(void)_addManuallyEnterPasswordButtonIfNeeded;
-(void)_addOtherLoginChoicesButtonIfNeeded;
-(void)_configureAuthenticationPaneForSelectedLoginChoice:(id)arg0 ;
-(void)_createIconViewWithIconImage:(id)arg0 ;
-(void)_manuallyEnterPasswordButtonTapped;
-(void)_otherLoginChoicesButtonTapped;
-(void)_performAuthorizationWithAuthenticatedContext:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_presentAlert:(id)arg0 primaryAction:(id)arg1 alternateAction:(unk)arg2  ;
-(void)_selectInitialLoginChoice;
-(void)_selectPreviouslySelectedLoginChoiceIfPossible:(id)arg0 ;
-(void)_setCancelButtonEnabled:(BOOL)arg0 ;
-(void)_setUpIconViewIfNecessary;
-(void)_setUpInfoLabel;
-(void)_setUpView;
-(void)_updateCachedLoginChoices;
-(void)_updateSelectedRow:(NSInteger)arg0 ;
-(void)_useCABLEButtonTapped;
-(void)_useSecurityKeyButtonTapped;
-(void)_userSelectedExternalPasswordCredential;
-(void)_userTappedContinueButtonForCABLELoginChoice:(id)arg0 ;
-(void)_userTappedContinueButtonForPasskeyLoginChoice:(id)arg0 ;
-(void)_userTappedContinueButtonForPasswordLoginChoice:(id)arg0 ;
-(void)_userTappendContinueButtonForSecurityKeyLoginChoice:(id)arg0 ;
-(void)authenticationProvider:(id)arg0 hideViewController:(id)arg1 ;
// -(void)authenticationProvider:(id)arg0 presentAlert:(id)arg1 primaryAction:(id)arg2 alternateAction:(unk)arg3  ;
-(void)authenticationProvider:(id)arg0 showViewController:(id)arg1 ;
-(void)confirmButtonSubPaneDidEnterProcessingState:(id)arg0 withAuthenticatedContext:(id)arg1 ;
-(void)confirmButtonSubPaneDidFailBiometry:(id)arg0 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg0 didFinishWithCredential:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)performAuthorization:(id)arg0 withAuthenticatedLAContext:(id)arg1 ;
-(void)performPasswordAuthentication:(id)arg0 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg0 ;
-(void)reloadLoginChoices;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)userTappedContinueButton;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif