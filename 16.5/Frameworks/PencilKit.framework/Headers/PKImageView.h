// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIMAGEVIEW_H
#define PKIMAGEVIEW_H

@class UIView, CALayer, UIImage;



@interface PKImageView : UIView {
    CALayer *_imageLayer;
    CALayer *_addLayer;
    CALayer *_mulLayer;
}


@property (retain, nonatomic) UIImage *addImage; // ivar: _addImage
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImage *mulImage; // ivar: _mulImage


-(id)_createLayerWithImage:(id)arg0 compositingFiler:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)_updateAddLayer;
-(void)_updateImageLayer;
-(void)_updateLayerFrames;
-(void)_updateMulLayer;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setupWithDrawing:(id)arg0 imageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 strokeSpaceClipRect:(struct CGRect )arg3 sixChannel:(BOOL)arg4 ;


@end


#endif