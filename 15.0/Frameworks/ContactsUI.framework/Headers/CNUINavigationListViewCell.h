// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUINAVIGATIONLISTVIEWCELL_H
#define CNUINAVIGATIONLISTVIEWCELL_H

@class UITableViewCell, UIImageView, UILayoutGuide, NSLayoutConstraint, UILabel;
@protocol CNUINavigationListStyle;


#import "CNUINavigationListStyleApplier.h"

@interface CNUINavigationListViewCell : UITableViewCell

@property (nonatomic, getter=isAccessoryControlExpanded) BOOL accessoryControlExpanded; // ivar: _accessoryControlExpanded
@property (readonly, nonatomic) UIImageView *accessoryImageView; // ivar: _accessoryImageView
@property (readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide; // ivar: _accessoryImageViewLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // ivar: _contentViewBottomAnchorConstraint
@property (nonatomic, getter=isContentViewConstraintsLoaded) BOOL contentViewConstraintsLoaded; // ivar: _contentViewConstraintsLoaded
@property (retain, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle
@property (nonatomic) BOOL showSeparator; // ivar: _showSeparator
@property (retain, nonatomic) CNUINavigationListStyleApplier *styleApplier; // ivar: _styleApplier
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint; // ivar: _subtitleLabelFirstBaselineAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint; // ivar: _subtitleLabelLeadingAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint; // ivar: _subtitleLabelTrailingAnchorConstraint
@property (readonly, nonatomic) UIImageView *titleImageView; // ivar: _titleImageView
@property (readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide; // ivar: _titleImageViewLayoutGuide
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint; // ivar: _titleLabelFirstBaselineAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint; // ivar: _titleLabelLeadingAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint; // ivar: _titleLabelTrailingAnchorConstraint


+(CGFloat)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg0 ;
+(CGFloat)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg0 navigationListStyle:(id)arg1 ;
+(CGFloat)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg0 ;
+(id)disclosureImage;
+(id)expandedAccessoryImageViewAccessibilityLabel;
+(id)highlightedDisclosureImage;
+(id)reuseIdentifier;
+(struct CGSize )desiredContentSizeForTitle:(id)arg0 subTitle:(id)arg1 navigationListStyle:(id)arg2 ;
-(CGFloat)minimumContentHeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)applyStyle;
-(void)dealloc;
-(void)loadContentView;
-(void)loadContentViewConstraints;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSeparatorStyle:(NSInteger)arg0 ;
-(void)setupAccessoryImageViewInView:(id)arg0 ;
-(void)styleUpdated;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)updateVisualStateAnimated:(BOOL)arg0 ;


@end


#endif