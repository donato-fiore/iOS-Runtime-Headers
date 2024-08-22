// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16NEWSSUBSCRIPTION21PAYWALLVIEWCONTROLLER_H
#define _TTC16NEWSSUBSCRIPTION21PAYWALLVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16NewsSubscription21PaywallViewController : UIViewController {
    ? delegate;
    ? isBeingUsedAsPlugin;
    ? pluggableDelegate;
    ? viewProvider;
    ? eventHandler;
    ? paywallModel;
    ? layoutOptionsProvider;
    ? purchasingSpinnerViewControllerFactory;
    ? $__lazy_storage_$_verificationSpinner;
    ? $__lazy_storage_$_purchasingSpinner;
    ? purchasePresenter;
    ? sceneStateManager;
    ? webOptinFlowManager;
    ? paidAccessChecker;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handlePurchaseAddedNotificationWithNotification:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif