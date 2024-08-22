// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTILEDETAILCELL_H
#define PKTILEDETAILCELL_H

@class UICollectionViewListCell, UILabel, UIView, UIImageView, NSString;



@interface PKTileDetailCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_textLabel;
    UILabel *_detailLabel;
    UIView *_seperatorView;
    UIImageView *_disclosureView;
}


@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif