// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKHUESPECTRUMVIEW_H
#define _PKHUESPECTRUMVIEW_H

@class UIView, UIImageView, CAShapeLayer;



@interface _PKHueSpectrumView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isCompact; // ivar: _isCompact
@property (nonatomic) BOOL isEmbossed; // ivar: _isEmbossed
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) CAShapeLayer *maskLayer; // ivar: _maskLayer


+(id)colorWheelImage:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif