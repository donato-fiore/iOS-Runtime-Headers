// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUINAVIGATIONLISTVIEWDETAILCELL_H
#define CNUINAVIGATIONLISTVIEWDETAILCELL_H



#import "CNUINavigationListViewCell.h"

@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell

@property (nonatomic) NSInteger contentAlignment; // ivar: _contentAlignment


+(CGFloat)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg0 ;
+(CGFloat)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg0 ;
+(CGFloat)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg0 ;
+(id)reuseIdentifier;
+(struct CGSize )desiredContentSizeForTitle:(id)arg0 subTitle:(id)arg1 navigationListStyle:(id)arg2 ;
-(CGFloat)contentViewBottomAnchorConstraintConstant;
-(CGFloat)minimumContentHeight;
-(CGFloat)subtitleLabelFirstBaselineAnchorConstraintConstant;
-(CGFloat)titleLabelFirstBaselineAnchorConstraintConstant;
-(void)applyStyle;
-(void)loadContentViewConstraints;
-(void)setupAccessoryImageViewInView:(id)arg0 ;
-(void)updateConstraints;


@end


#endif