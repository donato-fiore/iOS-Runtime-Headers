// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTRESULTVIEW_H
#define SKUIGIFTRESULTVIEW_H

@class UIView, UIImageView, UILabel, UIButton, UIImage, NSString;


#import "SKUIGiftItemView.h"

@interface SKUIGiftResultView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
}


@property (readonly, nonatomic) UIButton *giftAgainButton; // ivar: _giftAgainButton
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIGiftItemView *itemView; // ivar: _itemView
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif