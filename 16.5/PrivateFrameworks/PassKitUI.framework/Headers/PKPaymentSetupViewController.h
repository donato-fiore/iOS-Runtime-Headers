// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPVIEWCONTROLLER_H
#define PKPAYMENTSETUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentSetupRequest, _UIAsyncInvocation, UIActivityIndicatorView, UILabel, UIButton;
@protocol PKPaymentSetupRequestViewControllerDelegate;


#import "PKRemotePaymentSetupViewController.h"

@interface PKPaymentSetupViewController : UIViewController {
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
    BOOL _explicitPresentationStyle;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupRequestViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(void)paymentSetupFeaturesForConfiguration:(id)arg0 completion:(id)arg1 ;
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
-(void)didFinishWithPasses:(id)arg0 error:(id)arg1 ;
-(void)loadView;
-(void)updateModalPresentationStyle;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif