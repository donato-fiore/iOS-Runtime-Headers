// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCAMERAITEMVIEW_H
#define AVTCAMERAITEMVIEW_H

@class UIView, UIImageSymbolConfiguration, UIImageView, CAShapeLayer;



@interface AVTCameraItemView : UIView

@property (retain, nonatomic) UIImageSymbolConfiguration *cameraConfiguration; // ivar: _cameraConfiguration
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateCameraImage;


@end


#endif