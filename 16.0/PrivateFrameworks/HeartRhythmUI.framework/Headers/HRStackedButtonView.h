// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRSTACKEDBUTTONVIEW_H
#define HRSTACKEDBUTTONVIEW_H

@class UIView, UIBlurEffect, NSLayoutConstraint, NSString, NSArray, NSLayoutYAxisAnchor, UILabel;
@protocol HRStackedButtonViewDelegate;



@interface HRStackedButtonView : UIView

@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // ivar: _backgroundBlurEffect
@property (retain, nonatomic) UIView *backgroundBlurView; // ivar: _backgroundBlurView
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // ivar: _backgroundBlurViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // ivar: _backgroundBlurViewTrailingConstraint
@property (nonatomic, getter=isBlurHidden) BOOL blurHidden; // ivar: _blurHidden
@property (copy, nonatomic) NSString *boldFooterText; // ivar: _boldFooterText
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic) NSInteger buttonMode; // ivar: _buttonMode
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (weak, nonatomic) NSObject<HRStackedButtonViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // ivar: _firstTopAnchor
@property (nonatomic) CGFloat firstTopConstant; // ivar: _firstTopConstant
@property (nonatomic) BOOL fixedBottomButtonSpacing; // ivar: _fixedBottomButtonSpacing
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (nonatomic) NSInteger footerTextAlignment; // ivar: _footerTextAlignment
@property (retain, nonatomic) UILabel *footerTextLabel; // ivar: _footerTextLabel
@property (nonatomic) NSInteger lastButtonMode; // ivar: _lastButtonMode
@property (copy, nonatomic) NSArray *styles; // ivar: _styles
@property (copy, nonatomic) NSArray *titles; // ivar: _titles


+(CGFloat)_buttonSpacingForValue:(CGFloat)arg0 ;
+(CGFloat)_footerTextSpacingForValue:(CGFloat)arg0 ;
+(CGFloat)topPadding;
+(id)_footerFontTextStyle;
+(id)buddyStackedButtonViewWithTitles:(id)arg0 footerText:(id)arg1 boldFooterText:(id)arg2 delegate:(id)arg3 ;
+(id)buddyStackedButtonViewWithTitles:(id)arg0 footerText:(id)arg1 boldFooterText:(id)arg2 footerTextAlignment:(NSInteger)arg3 delegate:(id)arg4 ;
-(id)_attributedFooterText;
-(id)_createButtons;
-(id)firstBaselineAnchor;
-(id)initWithButtonTitles:(id)arg0 styles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(NSInteger)arg4 delegate:(id)arg5 ;
-(id)lastBaselineAnchor;
-(void)_assignConstraintsForButtons;
-(void)_createViewBottomConstraint;
-(void)_setUpBlurEffect;
-(void)_setUpButtons;
-(void)_setUpFooterText;
-(void)_updateBottomConstraint;
-(void)_updateForCurrentSizeCategory;
-(void)actionButtonTapped:(id)arg0 ;
-(void)alignBlurViewHorizontalConstraintsWithView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif