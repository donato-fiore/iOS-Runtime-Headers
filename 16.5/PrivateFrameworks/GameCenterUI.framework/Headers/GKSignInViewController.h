// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSIGNINVIEWCONTROLLER_H
#define GKSIGNINVIEWCONTROLLER_H

@class NSString, AKAppleIDAuthenticationInAppContext, UIImageView, NSMutableArray, GKGame, AKInlineSignInViewController, UILabel, UIActivityIndicatorView, RemoteUIController, UIViewController, UIScrollView, GKDispatchGroup, UINavigationController;
@protocol AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, RemoteUIControllerDelegate, GKAuthenticateViewController, UIScrollViewDelegate;


#import "GKViewController.h"
#import "GKAccountRemoteUIController.h"
#import "GKSignInInputView.h"

@interface GKSignInViewController : GKViewController <AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, RemoteUIControllerDelegate, GKAuthenticateViewController, UIScrollViewDelegate>



@property (retain, nonatomic) GKAccountRemoteUIController *accountController; // ivar: _accountController
@property (retain, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *authContext; // ivar: _authContext
@property (retain, nonatomic) UIImageView *bubbleImageView; // ivar: _bubbleImageView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL constraintsCreated; // ivar: _constraintsCreated
@property (nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard; // ivar: _contentInsetsBeforeKeyboard
@property (nonatomic) UIEdgeInsets currentContentInsets; // ivar: _currentContentInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesSignIn; // ivar: _disablesSignIn
@property (nonatomic) CGFloat fullWidthContentWidthConstraintConstant; // ivar: _fullWidthContentWidthConstraintConstant
@property (retain, nonatomic) NSMutableArray *fullWidthViewConstraints; // ivar: _fullWidthViewConstraints
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalPaddingConstraintConstant; // ivar: _horizontalPaddingConstraintConstant
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController; // ivar: _inlineSignInViewController
@property (nonatomic) CGFloat labelWidthConstraintConstant; // ivar: _labelWidthConstraintConstant
@property (nonatomic, getter=isLoadingRemoteUI) BOOL loadingRemoteUI; // ivar: _loadingRemoteUI
@property (retain, nonatomic) UILabel *loginPromptLabel; // ivar: _loginPromptLabel
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) RemoteUIController *remoteU13Controller; // ivar: _remoteU13Controller
@property (retain, nonatomic) UIViewController *remoteUIPresentingViewController; // ivar: _remoteUIPresentingViewController
@property (nonatomic) UIEdgeInsets scrollIndicatorInsetsBeforeKeyboard; // ivar: _scrollIndicatorInsetsBeforeKeyboard
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) GKSignInInputView *signInInputView; // ivar: _signInInputView
@property (retain, nonatomic) UILabel *signInLabel; // ivar: _signInLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) GKDispatchGroup *u13Group; // ivar: _u13Group
@property (retain, nonatomic) UINavigationController *u13NavigationController; // ivar: _u13NavigationController
@property (retain, nonatomic) NSMutableArray *u13ObjectModels; // ivar: _u13ObjectModels
@property (nonatomic) BOOL userShouldSkipCreateAppleID; // ivar: _userShouldSkipCreateAppleID


-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)handleUnderlyingAuthenticationError:(id)arg0 playerID:(id)arg1 ;
-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)init;
-(void)_systemContentSizeSettingDidChange:(id)arg0 ;
-(void)accountRemoteUIController:(id)arg0 finishedWithError:(id)arg1 ;
-(void)addCancelButtonToNavigationItem:(id)arg0 ;
-(void)authenticateRequestCompletedWithErrorResponse:(id)arg0 error:(id)arg1 ;
-(void)cancelSignIn;
-(void)createAppleID;
-(void)createConstraints;
-(void)createNewAccount;
-(void)createSubviews;
-(void)dealloc;
-(void)finishAuthenticationWithError:(id)arg0 ;
-(void)iForgotTapped;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadAccountRemoteUIForPlayer:(id)arg0 mode:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)loadAccountRemoteUIForPlayer:(id)arg0 mode:(NSInteger)arg1 url:(id)arg2 postBody:(id)arg3 completionHandler:(id)arg4 ;
-(void)loadView;
-(void)presentAccountRemoteUIControllerAnimated:(BOOL)arg0 ;
-(void)presentError:(id)arg0 forAccountRemoteUIController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)setupAuthKitInlineViewController;
-(void)showAccountDisabledAlert;
-(void)showAccountRemoteUIForAccountName:(id)arg0 mode:(NSInteger)arg1 ;
-(void)showAccountRemoteUIForAccountName:(id)arg0 mode:(NSInteger)arg1 url:(id)arg2 postBody:(id)arg3 ;
-(void)showAccountRemoteUIForLocalPlayer:(id)arg0 mode:(NSInteger)arg1 url:(id)arg2 postBody:(id)arg3 ;
-(void)showAccountRemoteUIForPlayerID:(id)arg0 mode:(NSInteger)arg1 ;
-(void)showAuthKitAlertFromGreenBuddyWithAuthInfo:(id)arg0 completion:(id)arg1 ;
-(void)showConnectionFailedAlert;
-(void)showForgotPasswordAlert;
-(void)showLoginFailedAlert;
-(void)showPasswordAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showPasswordChangeAlertWithURL:(id)arg0 ;
-(void)showPasswordResetAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showViewController:(id)arg0 ;
-(void)signIn;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)startLoadingIndicator;
-(void)stopLoadingIndicator;
-(void)updateConstraintConstantsForTraitCollection:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif