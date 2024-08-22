// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKROUNDEDHEADERVIEW_H
#define HKROUNDEDHEADERVIEW_H

@class UIView, UIColor, UIImageView, NSString, UILabel, NSLayoutConstraint, UIImage, NSArray;


#import "HKGradient.h"
#import "HKGradientView.h"

@interface HKRoundedHeaderView : UIView

@property (retain, nonatomic) UIColor *chevronColor; // ivar: _chevronColor
@property (retain, nonatomic) UIImageView *chevronRightImageView; // ivar: _chevronRightImageView
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (nonatomic) NSString *detailTextCompositingFilter; // ivar: _detailTextCompositingFilter
@property (retain, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelBottomConstraint; // ivar: _detailTextLabelBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelFirstBaselineConstraint; // ivar: _detailTextLabelFirstBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelWidthConstraint; // ivar: _detailTextLabelWidthConstraint
@property (retain, nonatomic) HKGradient *gradient; // ivar: _gradient
@property (retain, nonatomic) HKGradientView *gradientView; // ivar: _gradientView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) BOOL isInteractive; // ivar: _isInteractive
@property (retain, nonatomic) NSLayoutConstraint *largeTextChevronCenterYConstraint; // ivar: _largeTextChevronCenterYConstraint
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) CGFloat textHorizontalInset;
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSLayoutConstraint *textLabelBottomConstraint; // ivar: _textLabelBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *textLabelFirstBaselineConstraint; // ivar: _textLabelFirstBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *textLabelWidthConstraint; // ivar: _textLabelWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToImageView; // ivar: _textLeadingConstraintToImageView
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToView; // ivar: _textLeadingConstraintToView


+(CGFloat)_topToTextFirstBaseline;
+(CGFloat)estimatedHeight;
+(id)_accessibilityContentSizeCategory;
-(BOOL)_isLayingOutForAccessibility;
-(BOOL)_isTextLabelTruncated;
-(CGFloat)_headerViewWidth;
-(id)initWithColor:(id)arg0 ;
-(id)initWithColor:(id)arg0 isInteractive:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithGradient:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupUI;
-(void)_updateForCurrentSizeCategory;
-(void)_updateTextConstraints;
-(void)_updateTextLabel;
-(void)_updateUI;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif