// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIIMAGEVIEW_H
#define SKUIIMAGEVIEW_H

@class UIImageView, UITapGestureRecognizer, UIImage, CAShapeLayer;


#import "SKUIImagePlaceholder.h"

@interface SKUIImageView : UIImageView {
    UITapGestureRecognizer *_tapRecognizer;
    CGSize _lastLayoutSize;
}


@property (copy, nonatomic) id *cornerPathBlock; // ivar: _cornerPathBlock
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) CAShapeLayer *layer;
@property (retain, nonatomic) SKUIImagePlaceholder *placeholder; // ivar: _placeholder
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setContents:(id)arg0 ;


@end


#endif