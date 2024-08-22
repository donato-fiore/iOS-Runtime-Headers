// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI42IDENTITYPROOFINGSTATEPENDINGVIEWCONTROLLER_H
#define _TTC9COREIDVUI42IDENTITYPROOFINGSTATEPENDINGVIEWCONTROLLER_H

@class TtC9CoreIDVUI34IdentityProofingBaseViewController;



@interface _TtC9CoreIDVUI42IdentityProofingStatePendingViewController : TtC9CoreIDVUI34IdentityProofingBaseViewController {
    ? primaryButtonClickedAction;
    ? secondaryButtonClickedAction;
    ? tertiaryButtonClickedAction;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_primaryLabel;
    ? $__lazy_storage_$_secondaryLabel;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_secondaryButton;
    ? $__lazy_storage_$_tertiaryButton;
    ? imageView;
    ? imageViewContainer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)primaryButtonClicked;
-(void)secondaryButtonClicked;
-(void)tertiaryButtonClicked;
-(void)viewDidLayoutSubviews;


@end


#endif