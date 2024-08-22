// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI30IDENTITYPROOFINGVIEWCONTROLLER_H
#define _TTC9COREIDVUI30IDENTITYPROOFINGVIEWCONTROLLER_H

@class UIViewController, UIImageView, UILabel;



@interface _TtC9CoreIDVUI30IdentityProofingViewController : UIViewController {
    ? primaryButtonTargetAction;
    ? secondaryButtonTargetAction;
    ? cancelButtonTargetAction;
    ? tertiaryButtonTargetAction;
    ? primaryButtonHeight;
    ? secondaryButtonHeight;
    ? secondaryButtonDefaultFontSize;
    ? tertiaryButtonHeight;
    ? tertiaryButtonDefaultFontSize;
    ? configuration;
    ? textContainerStackViewSpacing;
    ? botomTraySpacing;
    ? headerViewDefaultHeightMultiplier;
    ? orangeTint;
    ? $__lazy_storage_$_bottomTray;
    ? $__lazy_storage_$_textContainerStackView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subTitleLabel;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_mainStackView;
    ? $__lazy_storage_$_secondaryButton;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_tertiaryButton;
    ? $__lazy_storage_$_footerCaption;
    ? cancelButton;
    ? $__lazy_storage_$_headerView;
    ? $__lazy_storage_$_imageView;
}


@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *titleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelButtonClicked;
-(void)primaryButtonClicked;
-(void)secondaryButtonClicked;
-(void)tertiaryButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif