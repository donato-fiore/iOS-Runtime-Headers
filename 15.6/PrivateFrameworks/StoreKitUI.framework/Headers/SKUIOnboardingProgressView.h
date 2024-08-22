// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIONBOARDINGPROGRESSVIEW_H
#define SKUIONBOARDINGPROGRESSVIEW_H

@class UIView, UIImageView, UILabel, UIColor, UIImage, NSString;


#import "SKUIShapeView.h"

@interface SKUIOnboardingProgressView : UIView {
    SKUIShapeView *_borderView;
    UIImageView *_imageView;
    SKUIShapeView *_progressView;
    UILabel *_titleLabel;
}


@property (copy, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGSize preferredImageSize;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (copy, nonatomic) NSString *title;


+(struct CGSize )preferredImageSizeForViewSize:(struct CGSize )arg0 ;
-(id)_borderColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif