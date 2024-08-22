// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTITLEDETAILICONCELL_H
#define PKTITLEDETAILICONCELL_H

@class UICollectionViewListCell, UILabel, UIImageView, UIFont, NSString, UIColor, UIImage;



@interface PKTitleDetailIconCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconView;
}


@property (nonatomic) CGFloat additionalIconPadding; // ivar: _additionalIconPadding
@property (nonatomic) BOOL centerDetailText; // ivar: _centerDetailText
@property (nonatomic) BOOL centerTitleText; // ivar: _centerTitleText
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif