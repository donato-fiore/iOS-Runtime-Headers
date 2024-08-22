// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDGROUPABLECELL_H
#define WDMEDICALRECORDGROUPABLECELL_H

@class UITableViewCell, NSLayoutConstraint, UIColor, UIView, HKSeparatorLineView;



@interface WDMedicalRecordGroupableCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic) BOOL extraTopPadding; // ivar: _extraTopPadding
@property (nonatomic) NSInteger intendedPlacement; // ivar: _intendedPlacement
@property (retain, nonatomic) UIColor *pillBackgroundColor; // ivar: _pillBackgroundColor
@property (retain, nonatomic) UIColor *pillBackgroundColorOverride; // ivar: _pillBackgroundColorOverride
@property (retain, nonatomic) UIView *pillBackgroundView; // ivar: _pillBackgroundView
@property (nonatomic) CGFloat sectionTopPadding; // ivar: _sectionTopPadding
@property (nonatomic) UIEdgeInsets separatorInsets; // ivar: _separatorInsets
@property (retain, nonatomic) NSLayoutConstraint *separatorLeadingConstant; // ivar: _separatorLeadingConstant
@property (retain, nonatomic) NSLayoutConstraint *separatorTrailingConstraint; // ivar: _separatorTrailingConstraint
@property (retain, nonatomic) HKSeparatorLineView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint


+(CGFloat)defaultGap;
+(id)defaultReuseIdentifier;
-(CGFloat)_cornerRadius;
-(CGFloat)_topPadding;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg0 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)_updateForIntendedPlacement;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSeparatorDashStyle:(NSInteger)arg0 hidden:(BOOL)arg1 ;
-(void)setUpConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif