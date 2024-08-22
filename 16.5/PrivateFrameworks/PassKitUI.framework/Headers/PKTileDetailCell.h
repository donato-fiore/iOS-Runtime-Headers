// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTILEDETAILCELL_H
#define PKTILEDETAILCELL_H

@class UICollectionViewListCell, UILabel, UIView, UIImageView, UIColor, NSString;



@interface PKTileDetailCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_textLabel;
    UILabel *_detailLabel;
    UILabel *_textSubtitleLabel;
    UIView *_seperatorForCustomView;
    UIView *_seperatorForText;
    UIImageView *_accessoryView;
    UIColor *_backgroundColor;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *textSubtitle; // ivar: _textSubtitle
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif