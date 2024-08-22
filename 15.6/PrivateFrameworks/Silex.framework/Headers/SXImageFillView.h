// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXIMAGEFILLVIEW_H
#define SXIMAGEFILLVIEW_H

@class UIImage;


#import "SXFillView.h"
#import "SXAnimatedImage.h"
#import "SXClippingView.h"
#import "SXImageFill.h"
#import "SXImageResource.h"
#import "SXImageView.h"

@interface SXImageFillView : SXFillView

@property (readonly, nonatomic) SXAnimatedImage *animatedImage;
@property (retain, nonatomic) SXClippingView *clippingView; // ivar: _clippingView
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) SXImageFill *imageFill; // ivar: _imageFill
@property (readonly, nonatomic) SXImageResource *imageResource; // ivar: _imageResource
@property (readonly, nonatomic) SXImageView *imageView; // ivar: _imageView


-(id)dragable;
-(id)initWithImageFill:(id)arg0 imageResource:(id)arg1 imageViewFactory:(id)arg2 ;
-(struct CGRect )contentFrame;
-(struct CGRect )fillFrameWithBoundingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)load;
-(void)pause;
-(void)play;
-(void)setContentFrame:(struct CGRect )arg0 ;


@end


#endif