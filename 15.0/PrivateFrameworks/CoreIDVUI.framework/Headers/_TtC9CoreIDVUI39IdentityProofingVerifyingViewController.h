// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI39IDENTITYPROOFINGVERIFYINGVIEWCONTROLLER_H
#define _TTC9COREIDVUI39IDENTITYPROOFINGVERIFYINGVIEWCONTROLLER_H

@class TtC9CoreIDVUI34IdentityProofingBaseViewController;



@interface _TtC9CoreIDVUI39IdentityProofingVerifyingViewController : TtC9CoreIDVUI34IdentityProofingBaseViewController {
    ? proofingFlowManager;
    ? titleText;
    ? primaryLabelText;
    ? secondaryLabelText;
    ? tertiaryLabelText;
    ? primaryButtonTitle;
    ? secondaryButtonTitle;
    ? config;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_primaryLabel;
    ? $__lazy_storage_$_secondaryLabel;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_secondaryButton;
    ? imageView;
    ? imageViewContainer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)primaryButtonClicked;
-(void)secondaryButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif