// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOCKUPSWOOSHCELLLAYOUT_H
#define SKUILOCKUPSWOOSHCELLLAYOUT_H

@class UILabel, UIImageView, UIColor, NSString, UIImage;


#import "SKUIItemCellLayout.h"

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
}


@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *itemCountString;
@property (nonatomic) CGSize maxImageSize; // ivar: _maxImageSize
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGSize videoSize; // ivar: _videoSize
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) NSUInteger visibleFields; // ivar: _visibleFields


-(id)_newDefaultLabel;
-(id)initWithCollectionViewCell:(id)arg0 ;
-(struct CGSize )cellSizeForImageOfSize:(struct CGSize )arg0 ;
-(void)_layoutFieldsHorizontal;
-(void)_layoutFieldsVertical;
-(void)_reloadHighlight;
-(void)_reloadPriceLabel;
-(void)_removeHighlightViews;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setItemOffer:(id)arg0 ;
-(void)setItemState:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif