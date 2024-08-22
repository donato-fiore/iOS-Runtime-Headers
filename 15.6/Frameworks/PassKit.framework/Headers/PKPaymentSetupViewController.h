// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPVIEWCONTROLLER_H
#define PKPAYMENTSETUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentSetupRequest, _UIAsyncInvocation, UIActivityIndicatorView, UILabel, UIButton;


#import "PKRemotePaymentSetupViewController.h"

@interface PKPaymentSetupViewController : UIViewController {
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
}




+(BOOL)_shouldForwardViewWillTransitionToSize;
+(void)paymentSetupFeaturesForConfiguration:(id)arg0 completion:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPaymentSetupRequest:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_cancelTapped;
-(void)_hideLoadingContent;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)paymentSetupDidFinish;
-(void)viewWillLayoutSubviews;


@end


#endif