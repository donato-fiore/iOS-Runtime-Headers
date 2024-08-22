// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI30BIOMETRICBINDINGVIEWCONTROLLER_H
#define _TTC9COREIDVUI30BIOMETRICBINDINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI30BiometricBindingViewController : UIViewController {
    ? titleLabel;
    ? textLabel;
    ? primaryButton;
    ? passcodeView;
    ? authType;
    ? domain;
    ? target;
    ? unboundACL;
    ? biometricsHelper;
    ? biometricBindingController;
    ? proofingManager;
    ? context;
    ? analyticsReporter;
    ? eligibilityHelper;
    ? delegate;
    ? $__lazy_storage_$_cancelButton;
    ? $__lazy_storage_$_activityIndicator;
    ? $__lazy_storage_$_activityIndicatorBarButtonItem;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelBarButtonClicked;
-(void)loadView;
-(void)performBinding;


@end


#endif