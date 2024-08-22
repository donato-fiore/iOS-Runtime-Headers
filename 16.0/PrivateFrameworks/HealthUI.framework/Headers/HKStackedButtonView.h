// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSTACKEDBUTTONVIEW_H
#define HKSTACKEDBUTTONVIEW_H

@class UIView, UIBlurEffect, NSLayoutConstraint, NSString, NSArray, NSLayoutYAxisAnchor, UILabel;
@protocol HKStackedButtonViewDelegate;



@interface HKStackedButtonView : UIView

@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // ivar: _backgroundBlurEffect
@property (retain, nonatomic) UIView *backgroundBlurView; // ivar: _backgroundBlurView
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // ivar: _backgroundBlurViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // ivar: _backgroundBlurViewTrailingConstraint
@property (nonatomic, getter=isBlurHidden) BOOL blurHidden; // ivar: _blurHidden
@property (copy, nonatomic) NSString *boldFooterText; // ivar: _boldFooterText
@property (nonatomic) BOOL bottomAdjustsForHomeButtonlessScreen; // ivar: _bottomAdjustsForHomeButtonlessScreen
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic) NSInteger buttonMode; // ivar: _buttonMode
@property (copy, nonatomic) NSArray *buttonSpacingConstraints; // ivar: _buttonSpacingConstraints
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (weak, nonatomic) NSObject<HKStackedButtonViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // ivar: _firstTopAnchor
@property (nonatomic) CGFloat firstTopConstant; // ivar: _firstTopConstant
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (nonatomic) NSInteger footerTextAlignment; // ivar: _footerTextAlignment
@property (retain, nonatomic) UILabel *footerTextLabel; // ivar: _footerTextLabel
@property (nonatomic) NSInteger lastButtonMode; // ivar: _lastButtonMode
@property (copy, nonatomic) NSArray *styles; // ivar: _styles
@property (copy, nonatomic) NSArray *titles; // ivar: _titles


+(CGFloat)_buttonSpacingForValue:(CGFloat)arg0 ;
+(CGFloat)_footerTextSpacingForValue:(CGFloat)arg0 ;
+(id)_footerFontTextStyle;
+(id)buddyStackedButtonViewWithTitles:(id)arg0 footerText:(id)arg1 boldFooterText:(id)arg2 delegate:(id)arg3 ;
+(id)buddyStackedButtonViewWithTitles:(id)arg0 footerText:(id)arg1 boldFooterText:(id)arg2 footerTextAlignment:(NSInteger)arg3 delegate:(id)arg4 ;
+(id)createButtonBackgroundView;
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
-(void)_updateConstraintsForButtons;
-(void)_updateForCurrentSizeCategory;
-(void)actionButtonTapped:(id)arg0 ;
-(void)alignBlurViewHorizontalConstraintsWithView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif