// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTBRICKIMAGEVIEWV2_H
#define ICATTACHMENTBRICKIMAGEVIEWV2_H

@class UIView, UIImage, CALayer;



@interface ICAttachmentBrickImageViewV2 : UIView

@property (nonatomic) CGFloat cornerRadius;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) BOOL transparentBackground; // ivar: _transparentBackground


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)updateBackgroundColor;
-(void)updateSublayersBounds:(struct CGRect )arg0 ;


@end


#endif