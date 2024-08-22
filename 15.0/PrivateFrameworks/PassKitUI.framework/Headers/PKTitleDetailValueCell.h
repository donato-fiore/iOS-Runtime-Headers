// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTITLEDETAILVALUECELL_H
#define PKTITLEDETAILVALUECELL_H

@class UICollectionViewListCell, UILabel, UIImageView, UIColor, UIFont, NSString;



@interface PKTitleDetailValueCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_valueLabel;
    UIImageView *_disclosureView;
}


@property (retain, nonatomic) UIColor *detailColor; // ivar: _detailColor
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *valueColor; // ivar: _valueColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (copy, nonatomic) NSString *valueText; // ivar: _valueText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif