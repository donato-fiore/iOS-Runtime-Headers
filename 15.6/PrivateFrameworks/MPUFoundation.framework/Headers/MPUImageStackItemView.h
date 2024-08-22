// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUIMAGESTACKITEMVIEW_H
#define MPUIMAGESTACKITEMVIEW_H

@class UIImageView, UIImage;


#import "MPUStackItemView.h"

@interface MPUImageStackItemView : MPUStackItemView {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat imageAlpha; // ivar: _imageAlpha
@property (nonatomic) CGRect imageContentsRect; // ivar: _imageContentsRect
@property (nonatomic) CGAffineTransform imageTransform; // ivar: _imageTransform


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif