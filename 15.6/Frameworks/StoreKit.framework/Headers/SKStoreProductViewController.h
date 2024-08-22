// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTOREPRODUCTVIEWCONTROLLER_H
#define SKSTOREPRODUCTVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, NSString, NSDictionary;
@protocol SKScreenTrackingDelegate, UIViewControllerTransitioningDelegate, SKRemoteDismissingViewController, SKObservableViewDelegate, SKStoreProductViewControllerDelegate;


#import "SKRemoteProductViewController.h"
#import "SKScrollDetector.h"

@interface SKStoreProductViewController : UIViewController <SKScreenTrackingDelegate, UIViewControllerTransitioningDelegate, SKRemoteDismissingViewController, SKObservableViewDelegate>

 {
    _UIAsyncInvocation *_cancelRequest;
    id *_loadBlock;
    NSInteger _originalStatusBarStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    SKScrollDetector *_scrollDetector;
    BOOL _viewWasOnScreen;
    id *_dismissalCompleted;
}


@property (copy, nonatomic) NSString *additionalBuyParameters; // ivar: _additionalBuyParameters
@property (copy, nonatomic) NSString *affiliateIdentifier; // ivar: _affiliateIdentifier
@property (nonatomic) BOOL askToBuy; // ivar: _askToBuy
@property (nonatomic) BOOL automaticallyDismisses; // ivar: _automaticallyDismisses
@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKStoreProductViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostBundleIdentifier; // ivar: _hostBundleIdentifier
@property (nonatomic) NSInteger productPageStyle; // ivar: _productPageStyle
@property (copy, nonatomic) NSString *promptString; // ivar: _promptString
@property (copy, nonatomic) NSString *rightBarButtonTitle; // ivar: _rightBarButtonTitle
@property (copy, nonatomic) NSDictionary *scriptContextDictionary; // ivar: _scriptContextDictionary
@property (nonatomic) BOOL showsRightBarButton; // ivar: _showsRightBarButton
@property (nonatomic) BOOL showsStoreButton; // ivar: _showsStoreButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *usageContext; // ivar: _usageContext


+(id)_defaultIXStoreSheetDictionary;
+(void)_validateURL:(id)arg0 withSheetInfo:(id)arg1 completionBlock:(id)arg2 ;
+(void)getCanLoadURL:(id)arg0 completionBlock:(id)arg1 ;
+(void)getCanLoadURL:(id)arg0 withURLBag:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)_isPeeking;
-(BOOL)dismissRemoteViewControllerWithCompletion:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)_addRemoteView;
-(void)_configureForFullScreenPresentationOrThrowException;
-(void)_didFinish;
-(void)_didFinishDismissal;
-(void)_didFinishWithResult:(NSInteger)arg0 ;
-(void)_fireLoadBlockBeforeFinishing;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_loadDidFinishWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_presentPageWithRequest:(id)arg0 animated:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(void)_resetRemoteViewController;
-(void)_setLoadBlock:(id)arg0 ;
-(void)_throwUnsupportedPresentationException;
-(void)_viewTapped:(id)arg0 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)appWillTerminate;
-(void)dealloc;
-(void)didChangeAlpha:(CGFloat)arg0 ;
-(void)didChangeHidden;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)finishImmediately;
-(void)loadProductWithPageDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadProductWithParameters:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadProductWithRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadProductWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadView;
-(void)sceneDisconnected:(id)arg0 ;
-(void)setNoClippingIfNeeded;
-(void)setParentViewController:(id)arg0 ;
-(void)setPresentationStyleIfNeeded;
-(void)sk_didBecomeOffScreen:(id)arg0 ;
-(void)sk_didBecomeOnScreen:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif