// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTITEMVIEW_H
#define SKUIGIFTITEMVIEW_H

@class UIView, UIImageView, UILabel, NSString, UIImage;


#import "SKUIClientContext.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIItem.h"
#import "SKUIItemOfferButton.h"
#import "SKUIItemState.h"
#import "SKUIGiftTheme.h"

@interface SKUIGiftItemView : UIView {
    SKUIClientContext *_clientContext;
    UIImageView *_itemImageView;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    UILabel *_titleLabel;
    UILabel *_userRatingCountLabel;
}


@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (copy, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (readonly, nonatomic) NSInteger giftItemStyle; // ivar: _itemStyle
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (retain, nonatomic) UIImage *itemImage;
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // ivar: _itemOfferButton
@property (retain, nonatomic) SKUIItemState *itemState; // ivar: _itemState
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (copy, nonatomic) NSString *price; // ivar: _price
@property (copy, nonatomic) SKUIGiftTheme *theme; // ivar: _theme
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // ivar: _userRating


-(CGFloat)_paddingLeading;
-(CGFloat)_paddingTrailing;
-(id)_newLabel;
-(id)initWithStyle:(NSInteger)arg0 item:(id)arg1 clientContext:(id)arg2 ;
-(struct CGSize )_imageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_imageEdgeInsets;
-(void)_enumerateMetadataViewsUsingBlock:(id)arg0 ;
-(void)_itemOfferConfirmAction:(id)arg0 ;
-(void)_reloadItemState:(BOOL)arg0 ;
-(void)_reloadUserRatingViews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif