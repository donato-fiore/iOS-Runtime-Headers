// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTITLEDETAILICONCELL_H
#define PKTITLEDETAILICONCELL_H

@class UICollectionViewListCell, UILabel, UIImageView, NSString, UIImage;



@interface PKTitleDetailIconCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconView;
}


@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif