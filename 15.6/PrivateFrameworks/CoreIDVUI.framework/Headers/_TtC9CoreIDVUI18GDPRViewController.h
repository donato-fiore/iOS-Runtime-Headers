// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI18GDPRVIEWCONTROLLER_H
#define _TTC9COREIDVUI18GDPRVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI18GDPRViewController : UIViewController {
    ? proofingFlowManager;
    ? config;
    ? eligibilityHelper;
    ? analyticsReporter;
    ? identityProofingCardArtResolutionHelper;
    ? navBarDefaultColor;
    ? requireHSA2ForProofing;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_primaryStackView;
    ? $__lazy_storage_$_secondaryStackView;
    ? $__lazy_storage_$_bottomTray;
    ? $__lazy_storage_$_containerView;
    ? $__lazy_storage_$_backgroundView;
    ? $__lazy_storage_$_imageView;
    ? $__lazy_storage_$_iconImageView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subTitleLabel;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_secondaryButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)primaryButtonClicked;
-(void)secondaryButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif