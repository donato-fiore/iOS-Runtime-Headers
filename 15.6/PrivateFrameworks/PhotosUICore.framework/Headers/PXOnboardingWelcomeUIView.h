// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXONBOARDINGWELCOMEUIVIEW_H
#define PXONBOARDINGWELCOMEUIVIEW_H

@class UIView, UIFont, NSString, NSArray, UILabel, NSLayoutConstraint, UILayoutGuide, UIButton;



@interface PXOnboardingWelcomeUIView : UIView {
    ? _needsUpdateFlags;
}


@property (retain, nonatomic) UIFont *buttonFont; // ivar: _buttonFont
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) NSLayoutConstraint *iconTopCnst; // ivar: _iconTopCnst
@property (retain, nonatomic) UIView *iconView; // ivar: _iconView
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) UILayoutGuide *leadingWhitespace; // ivar: _leadingWhitespace
@property (readonly, nonatomic) UILayoutGuide *middleWhitespace; // ivar: _middleWhitespace
@property (retain, nonatomic) NSLayoutConstraint *startBottomCnst; // ivar: _startBottomCnst
@property (readonly, nonatomic) UIButton *startButton; // ivar: _startButton
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) UILayoutGuide *trailingWhitespace; // ivar: _trailingWhitespace


-(id)_createLandscapeConstraintsPhone;
-(id)_createPadConstraints;
-(id)_createPortraitConstraintsPhone;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateButton;
-(void)_invalidateConstraints;
-(void)_updateButtonIfNeeded;
-(void)commonInit;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif