// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTTHEMECOLLECTIONVIEWCELL_H
#define SKUIGIFTTHEMECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel, UIImage;


#import "SKUIGiftItemView.h"
#import "SKUIGift.h"
#import "SKUIGiftConfiguration.h"
#import "SKUIGiftTheme.h"

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
}


@property (retain, nonatomic) SKUIGift *gift; // ivar: _gift
@property (retain, nonatomic) SKUIGiftConfiguration *giftConfiguration; // ivar: _giftConfiguration
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) SKUIGiftTheme *theme; // ivar: _theme


-(id)_itemView;
-(void)_reloadItemView;
-(void)_setHeaderImage:(id)arg0 ;
-(void)_setMessage:(id)arg0 ;
-(void)_setPrice:(id)arg0 ;
-(void)_setSenderName:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadThemeHeaderImage;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif