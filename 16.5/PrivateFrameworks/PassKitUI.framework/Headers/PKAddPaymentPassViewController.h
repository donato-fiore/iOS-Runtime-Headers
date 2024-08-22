// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDPAYMENTPASSVIEWCONTROLLER_H
#define PKADDPAYMENTPASSVIEWCONTROLLER_H

@class UIViewController, PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, NSString;
@protocol UIViewControllerTransitioningDelegate, PKAddPaymentPassViewControllerDelegate;


#import "PKRemoteAddPaymentPassViewController.h"
#import "PKCancelingAnimatedTransitioningHandler.h"

@interface PKAddPaymentPassViewController : UIViewController <UIViewControllerTransitioningDelegate>

 {
    id<PKAddPaymentPassViewControllerDelegate> *_delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddPaymentPassViewController *_remoteVC;
    PKCancelingAnimatedTransitioningHandler *_animatedTransitionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPaymentPassViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPaymentPass;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRequestConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_handleCanceledPresentationWithPresentingViewController:(id)arg0 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadRemoteViewController;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif