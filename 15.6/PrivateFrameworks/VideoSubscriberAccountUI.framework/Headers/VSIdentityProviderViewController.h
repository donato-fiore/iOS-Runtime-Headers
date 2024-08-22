// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSIDENTITYPROVIDERVIEWCONTROLLER_H
#define VSIDENTITYPROVIDERVIEWCONTROLLER_H

@class UIViewController, VSAuditToken, UIBarButtonItem, NSString, VSIdentityProvider, NSOperationQueue;
@protocol VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, PSStateRestoration, VSIdentityProviderViewControllerDelegate;


#import "VSImageLoadOperation.h"
#import "VSIdentityProviderRequestManager.h"
#import "VSViewModel.h"

@interface VSIdentityProviderViewController : UIViewController <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, PSStateRestoration>



@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (nonatomic) BOOL canIssuePrivacyVouchers; // ivar: _canIssuePrivacyVouchers
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem; // ivar: _cancelButtonItem
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (retain, nonatomic) UIViewController *currentlyPresentedIdentityProviderAlert; // ivar: _currentlyPresentedIdentityProviderAlert
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSIdentityProviderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) VSImageLoadOperation *logoLoadOperation; // ivar: _logoLoadOperation
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager; // ivar: _requestManager
@property (retain, nonatomic) UIBarButtonItem *signInButtonItem; // ivar: _signInButtonItem
@property (readonly) Class superclass;
@property (retain, nonatomic) VSViewModel *viewModel; // ivar: _viewModel


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)currentAuthenticationViewControllerSupportsPreAuth;
-(BOOL)identityProviderRequestManager:(id)arg0 requestsAlert:(id)arg1 ;
-(id)_logoLoadOperationForPreferredImageSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityProvider:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_didCancel;
-(void)_dismiss;
-(void)_hideNavigationBarButtons;
-(void)_showNavigationBarButtons;
-(void)_showValidationAlertForError:(id)arg0 ;
-(void)_showViewController:(id)arg0 ;
-(void)_signInButtonPressed:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_startValidation;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)_stopValidationAndShowButtons:(BOOL)arg0 ;
-(void)authenticationViewControllerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)enqueueRequest:(id)arg0 ;
-(void)identityProviderRequestManager:(id)arg0 didAuthenticateAccount:(id)arg1 forRequest:(id)arg2 ;
-(void)identityProviderRequestManager:(id)arg0 finishedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendErrorMessage:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif