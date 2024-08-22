// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLINKBANNER_H
#define SFLINKBANNER_H

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, NSString, UIColor;


#import "SFPinnableBanner.h"
#import "SFThemeColorEffectView.h"
#import "_SFDimmingButton.h"

@interface SFLinkBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_messageTopConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    UIButton *_dismissButton;
    NSLayoutConstraint *_iconLeadingConstraintToSuperview;
    NSLayoutConstraint *_backdropTopConstraint;
}


@property (nonatomic) CGFloat backdropTopExtension; // ivar: _backdropTopExtension
@property (copy, nonatomic) id *dismissButtonHandler; // ivar: _dismissButtonHandler
@property (retain, nonatomic) UIImageView *icon; // ivar: _icon
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) NSString *messageLabelText;
@property (copy, nonatomic) id *openActionHandler; // ivar: _openActionHandler
@property (retain, nonatomic) _SFDimmingButton *openButton; // ivar: _openButton
@property (readonly, nonatomic) UIColor *preferredButtonBackgroundColor;
@property (readonly, nonatomic) UIColor *preferredButtonTintColor;
@property (nonatomic) BOOL shouldHideIcon; // ivar: _shouldHideIcon
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dismiss;
-(void)_open;
-(void)_setShowsDismissButton:(BOOL)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)invalidateBannerLayout;
-(void)layoutSubviews;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)themeDidChange;


@end


#endif