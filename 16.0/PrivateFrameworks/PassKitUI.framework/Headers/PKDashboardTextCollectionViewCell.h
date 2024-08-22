// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDTEXTCOLLECTIONVIEWCELL_H
#define PKDASHBOARDTEXTCOLLECTIONVIEWCELL_H

@class UILabel, UIImageView, NSString, UIColor;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureView;
}


@property (nonatomic) BOOL hideDisclosure; // ivar: _hideDisclosure
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) NSInteger textLayoutStyle; // ivar: _textLayoutStyle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor


-(CGFloat)_maxWidthForTransactionCellInWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setFonts;
-(void)layoutSubviews;


@end


#endif