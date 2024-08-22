// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISLIDESHOWIMAGESCROLLVIEW_H
#define SKUISLIDESHOWIMAGESCROLLVIEW_H

@class UIScrollView, UIImage, UIImageView;



@interface SKUISlideshowImageScrollView : UIScrollView {
    CGPoint _centerPointBeforeResize;
    CGFloat _scaleBeforeResize;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )visibleRect;
-(void)_prepareToResize;
-(void)_recoverFromResize;
-(void)_resetMinMaxZoomScales;
-(void)layoutSubviews;
-(void)resetZoomScale;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)zoomIntoPoint:(struct CGPoint )arg0 ;


@end


#endif