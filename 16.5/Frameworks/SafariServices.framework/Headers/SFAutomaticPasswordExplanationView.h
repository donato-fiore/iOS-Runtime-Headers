// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTOMATICPASSWORDEXPLANATIONVIEW_H
#define SFAUTOMATICPASSWORDEXPLANATIONVIEW_H

@class UIView, UIScrollView, UIImageView, NSLayoutConstraint, NSArray, UILayoutGuide, NSString, UILabel, UIButton;
@protocol _UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate;


#import "SFAutomaticPasswordScrollViewContentView.h"

@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate>

 {
    BOOL _isPad;
    NSInteger _keyboardType;
    UIScrollView *_scrollView;
    SFAutomaticPasswordScrollViewContentView *_scrollableContentView;
    UIImageView *_shadowImageView;
    NSLayoutConstraint *_strongPasswordButtonWidthConstraint;
    NSLayoutConstraint *_strongPasswordButtonHeightConstraint;
    NSLayoutConstraint *_useCustomPasswordButtonWidthConstraint;
    NSLayoutConstraint *_useCustomPasswordBaselineToBottomConstraint;
    NSArray *_wideShadowImageViewConstraints;
    NSArray *_narrowShadowImageViewConstraints;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_contentLayoutGuideBottomConstraint;
    UILayoutGuide *_scrollableContentCenterLayoutGuide;
    BOOL _requiresWideAppearance;
    CGFloat _wideContentMaximumPadding;
    NSLayoutConstraint *_wideContentLeadingConstraint;
    NSLayoutConstraint *_wideContentTrailingConstraint;
    NSLayoutConstraint *_narrowContentLeadingConstraint;
    NSLayoutConstraint *_narrowContentTrailingConstraint;
    NSLayoutConstraint *_iPadWidthConstraint;
    BOOL _scrollViewNeedsShadowCachedValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *explanationLabel; // ivar: _explanationLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (readonly, nonatomic) UILabel *passwordRetrievalExpalantionLabel; // ivar: _passwordRetrievalExpalantionLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIButton *useOtherPasswordButton; // ivar: _useOtherPasswordButton
@property (readonly, nonatomic) UIButton *useStrongPasswordButton; // ivar: _useStrongPasswordButton


-(BOOL)_scrollViewNeedsShadow:(BOOL)arg0 ;
-(id)initWithKeyboardType:(NSInteger)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_createLayoutConstraints;
-(void)_createSubviews;
-(void)_scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)_updateContentLayoutGuideBottomConstraint;
-(void)_updateMaximumPadding;
-(void)_updateShadowViewAlpha;
-(void)_updateStrongPasswordHeightConstraint;
-(void)_updateUseCustomPasswordBaselineToBottomConstraint;
-(void)_updateWideAppearanceRequirement;
-(void)automaticPasswordScrollContentViewDidLayout:(id)arg0 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateConstraints;


@end


#endif