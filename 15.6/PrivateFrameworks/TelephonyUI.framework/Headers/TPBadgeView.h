// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPBADGEVIEW_H
#define TPBADGEVIEW_H

@class NSLayoutConstraint, NSString, UILabel;


#import "TPView.h"

@interface TPBadgeView : TPView

@property (retain, nonatomic) NSLayoutConstraint *heightAnchorLayoutConstraint; // ivar: _heightAnchorLayoutConstraint
@property (nonatomic) CGFloat heightAnchorLayoutConstraintConstantFontMultiplier; // ivar: _heightAnchorLayoutConstraintConstantFontMultiplier
@property (nonatomic) CGFloat layerCornerRadius; // ivar: _layerCornerRadius
@property (nonatomic) NSUInteger sizeCategory; // ivar: _sizeCategory
@property (nonatomic) NSUInteger theme; // ivar: _theme
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat titleLabelFontSize; // ivar: _titleLabelFontSize
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint; // ivar: _titleLabelLeadingAnchorLayoutConstraint
@property (nonatomic) CGFloat titleLabelLeadingAnchorLayoutConstraintConstant; // ivar: _titleLabelLeadingAnchorLayoutConstraintConstant
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint; // ivar: _titleLabelTrailingAnchorLayoutConstraint
@property (nonatomic) CGFloat titleLabelTrailingAnchorLayoutConstraintConstant; // ivar: _titleLabelTrailingAnchorLayoutConstraintConstant
@property (retain, nonatomic) NSLayoutConstraint *widthAnchorLayoutConstraint; // ivar: _widthAnchorLayoutConstraint


-(BOOL)_hasBaseline;
-(CGFloat)scaledLayoutValueForBaseValue:(CGFloat)arg0 ;
-(CGFloat)scaledLayoutValueForBaseValue:(CGFloat)arg0 shouldLowerBound:(BOOL)arg1 ;
-(id)firstBaselineAnchor;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 theme:(NSUInteger)arg1 ;
-(id)lastBaselineAnchor;
-(struct CGSize )_layoutSizeThatFits:(struct CGSize )arg0 fixedAxes:(NSUInteger)arg1 ;
-(void)commonInit;
-(void)loadConstraints;
-(void)unloadConstraints;
-(void)updateActiveHorizontalConstraints;
-(void)updateConstraintsConstants;
-(void)updateFonts;
-(void)updateSizeCategory;
-(void)updateTheme;


@end


#endif