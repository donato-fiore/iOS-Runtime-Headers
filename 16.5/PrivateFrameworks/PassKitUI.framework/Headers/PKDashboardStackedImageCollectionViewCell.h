// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDSTACKEDIMAGECOLLECTIONVIEWCELL_H
#define PKDASHBOARDSTACKEDIMAGECOLLECTIONVIEWCELL_H

@class UIImageView, UILabel, UIImage, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_tertiaryLabel;
}


@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)_contentHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)_maxWidthForTransactionCellInWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif