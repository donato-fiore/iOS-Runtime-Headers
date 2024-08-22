// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUISIGNINCONTROLLER_H
#define AAUISIGNINCONTROLLER_H

@class UINavigationController, NSDictionary, CDPUIController, UMUserPersona, UMUserPersonaContext, NSString, NSArray;
@protocol AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate, AIDAServiceOwnerProtocol, AAUISignInControllerDelegate;


#import "AAUISignInFlowControllerDelegate.h"

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate>

 {
    NSDictionary *_authenticationResults;
    id<AIDAServiceOwnerProtocol> *_serviceOwnersManager;
    NSInteger _aidaOperationUIPermissions;
    CDPUIController *_cdpUIController;
    AAUISignInFlowControllerDelegate *_flowControllerDelegate;
    UMUserPersona *_originalPersona;
    UMUserPersonaContext *_originalPersonaContext;
    NSInteger _currentStyle;
}


@property (retain, nonatomic, setter=_setAuthenticationResults:) NSDictionary *_authenticationResults;
@property (retain, nonatomic, setter=_setServiceOwnersManager:) NSObject<AIDAServiceOwnerProtocol> *_serviceOwnersManager;
@property (nonatomic, setter=_setShouldForceOperation:) BOOL _shouldForceOperation; // ivar: __shouldForceOperation
@property (nonatomic) BOOL canEditUsername; // ivar: _canEditUsername
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISignInControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *privacyLinkIdentifiers; // ivar: _privacyLinkIdentifiers
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)_allowsAccountCreationForService:(id)arg0 ;
-(BOOL)_isAuthenticatingPrimary:(id)arg0 ;
-(BOOL)_showsServiceIconsForService:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_continueUsingControllerForAccount:(id)arg0 serviceType:(id)arg1 inViewController:(id)arg2 completion:(id)arg3 ;
-(id)_messageStringForService:(id)arg0 ;
-(id)_signInViewController;
-(id)_spinnerMessageForService:(id)arg0 ;
-(id)_spinnerViewController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)serviceContextWithResults:(id)arg0 parentViewController:(id)arg1 ;
-(void)_attemptSignInForCloudAndInactiveStoreWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_attemptSignInForService:(id)arg0 withAuthenticationResults:(id)arg1 parentViewController:(id)arg2 completion:(id)arg3 ;
-(void)_commonInit;
-(void)_delegate_signInControllerDidCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg0 parentViewController:(id)arg1 ;
-(void)_mainQueue_presentAlertForError:(id)arg0 inViewController:(id)arg1 completion:(id)arg2 ;
-(void)_mainQueue_presentContinueUsingInViewController:(id)arg0 account:(id)arg1 serviceType:(id)arg2 completion:(id)arg3 ;
-(void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)_performAuthenticationForAccount:(id)arg0 serviceType:(id)arg1 inViewController:(id)arg2 completion:(id)arg3 ;
-(void)_updateStyleIfNeeded;
-(void)prepareInViewController:(id)arg0 completion:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)signInViewController:(id)arg0 didCompleteWithAuthenticationResults:(id)arg1 ;
-(void)signInViewControllerDidCancel:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willAuthenticateWithContext:(id)arg0 ;


@end


#endif