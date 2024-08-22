// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGEFEATUREVIEW_H
#define SKUIPRODUCTPAGEFEATUREVIEW_H

@class UIView, UIImageView, UILabel, UIImage, NSString;


#import "SKUIColorScheme.h"

@interface SKUIProductPageFeatureView : UIView {
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif