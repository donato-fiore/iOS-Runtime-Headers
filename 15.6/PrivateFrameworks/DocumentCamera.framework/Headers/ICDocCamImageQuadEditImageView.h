// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMIMAGEQUADEDITIMAGEVIEW_H
#define ICDOCCAMIMAGEQUADEDITIMAGEVIEW_H

@class UIView, UIImage, CALayer;



@interface ICDocCamImageQuadEditImageView : UIView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (nonatomic) CGFloat imageOpacity; // ivar: _imageOpacity
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(BOOL)accessibilityIgnoresInvertColors;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif