// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTUIANIMATINGIMAGEVIEW_H
#define AVTUIANIMATINGIMAGEVIEW_H

@class UIView, UIImageView, UIImage;



@interface AVTUIAnimatingImageView : UIView

@property (readonly, nonatomic) UIImageView *fadeInImageView; // ivar: _fadeInImageView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setContinuousCornerRadius:(CGFloat)arg0 ;


@end


#endif