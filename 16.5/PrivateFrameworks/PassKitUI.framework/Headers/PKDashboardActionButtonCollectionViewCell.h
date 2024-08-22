// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDACTIONBUTTONCOLLECTIONVIEWCELL_H
#define PKDASHBOARDACTIONBUTTONCOLLECTIONVIEWCELL_H

@class UILabel, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardActionButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
}


@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)_contentHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)_maxWidthForTransactionCellInWidth:(CGFloat)arg0 ;
-(id)_textColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutTitleLabel;
-(void)layoutSubviews;


@end


#endif