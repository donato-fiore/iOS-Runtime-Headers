// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUISHADOWIMAGEVIEW_H
#define CPUISHADOWIMAGEVIEW_H

@class UIView, UIImage, UIImageView;



@interface CPUIShadowImageView : UIView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) UIImageView *placeholderView; // ivar: _placeholderView


-(BOOL)_isDarkMode;
-(NSInteger)contentMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setupEffects;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif