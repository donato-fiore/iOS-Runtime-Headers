// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKACCOUNTPAGEVIEWCONTROLLER_H
#define SKACCOUNTPAGEVIEWCONTROLLER_H

@class UIViewController, NSURL, _UIAsyncInvocation, SURedeemCameraViewController, SKInvocationQueueProxy<SKUIServiceAccountPageViewController>, ACAccount, NSString;
@protocol SKUIRedeemViewCameraOverrideDelegate, PSStateRestoration, SKAccountPageViewControllerDelegate;


#import "SKRemoteAccountPageViewController.h"
#import "SKAccountPageViewController.h"

@interface SKAccountPageViewController : UIViewController <SKUIRedeemViewCameraOverrideDelegate, PSStateRestoration>

 {
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    id *_prepareBlock;
    id *_loadBlock;
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
    BOOL _isRemoteViewControllerReady;
    BOOL _financeInterruptionCalled;
    BOOL _cameraDidShow;
    BOOL _viewHasAppeared;
    BOOL _isRemoteViewControllerSetup;
    id *redeemCompletionHandler;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAccountPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKAccountPageViewController *preWarmedViewController; // ivar: _preWarmedViewController
@property (weak, nonatomic) SKAccountPageViewController *presentingAccountPageViewController; // ivar: _presentingAccountPageViewController
@property (retain, nonatomic) NSString *referrer; // ivar: _referrer
@property (nonatomic) BOOL showAccountGlyph; // ivar: _showAccountGlyph
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(void)isCommerceUIURL:(id)arg0 completion:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(NSUInteger)_indexForFirstBridgedNavigationViewController;
-(id)_overrideScheme:(id)arg0 ;
-(id)initWithAccountURL:(id)arg0 ;
-(void)_addRemoteView;
-(void)_bridgedRightButtonPressed:(id)arg0 ;
-(void)_didFinishLoading;
-(void)_didPrepareWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_dismissBridgedViewController;
-(void)_dismissViewControllerWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_financeInterruptionResolved:(BOOL)arg0 ;
-(void)_keyboardDidChangeNotification:(id)arg0 ;
-(void)_keyboardWillChangeNotification:(id)arg0 ;
-(void)_overrideCreditCardPresentationWithCompletion:(id)arg0 ;
-(void)_overrideRedeemCameraPerformAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)_overrideRedeemCameraWithCompletion:(id)arg0 ;
-(void)_popAllBridgedNavigationViewControllers;
-(void)_popBridgedViewControllersToIndex:(NSUInteger)arg0 ;
-(void)_presentBridgedViewController;
-(void)_pushBridgedViewControllerAnimated:(BOOL)arg0 options:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)_setBridgedNavigationItemWithOptions:(id)arg0 ;
-(void)_setupNavigationItem;
-(void)_setupNotificationCenter;
-(void)_setupPreWarmedViewController;
-(void)_setupRemoteViewController:(BOOL)arg0 ;
-(void)_sk_applicationDidEnterBackground:(id)arg0 ;
-(void)_sk_applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)loadWithCompletionBlock:(id)arg0 ;
-(void)overrideRedeemOperationWithCode:(id)arg0 cameraRecognized:(BOOL)arg1 completion:(id)arg2 ;
-(void)prepareWithCompletionBlock:(id)arg0 ;
-(void)redeemCameraViewController:(id)arg0 didFinishWithRedeem:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif