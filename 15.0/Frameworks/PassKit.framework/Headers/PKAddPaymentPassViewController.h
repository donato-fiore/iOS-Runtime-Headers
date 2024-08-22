// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDPAYMENTPASSVIEWCONTROLLER_H
#define PKADDPAYMENTPASSVIEWCONTROLLER_H

@class UIViewController, PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation;
@protocol PKAddPaymentPassViewControllerDelegate;


#import "PKRemoteAddPaymentPassViewController.h"

@interface PKAddPaymentPassViewController : UIViewController {
    id<PKAddPaymentPassViewControllerDelegate> *_delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddPaymentPassViewController *_remoteVC;
}


@property (weak, nonatomic) NSObject<PKAddPaymentPassViewControllerDelegate> *delegate;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPaymentPass;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRequestConfiguration:(id)arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif