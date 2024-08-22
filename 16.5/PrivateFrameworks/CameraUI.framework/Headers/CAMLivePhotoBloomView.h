// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMLIVEPHOTOBLOOMVIEW_H
#define CAMLIVEPHOTOBLOOMVIEW_H

@class UIView, CALayer, UIImageView, NSDictionary, CAShapeLayer;



@interface CAMLivePhotoBloomView : UIView

@property (readonly, nonatomic) CALayer *_centerRing; // ivar: __centerRing
@property (readonly, nonatomic) UIImageView *_defaultImageView; // ivar: __defaultImageView
@property (readonly, nonatomic) CALayer *_innerRing; // ivar: __innerRing
@property (readonly, nonatomic) NSDictionary *_layersByRing; // ivar: __layersByRing
@property (readonly, nonatomic) CAShapeLayer *_middleRing; // ivar: __middleRing
@property (readonly, nonatomic) CAShapeLayer *_outerRing; // ivar: __outerRing
@property (readonly, nonatomic) CALayer *_ringContainer; // ivar: __ringContainer
@property (readonly, nonatomic) NSDictionary *_shapeLayersByRing; // ivar: __shapeLayersByRing
@property (nonatomic) BOOL isOff; // ivar: _isOff


-(CGFloat)_diameterForRing:(NSInteger)arg0 ;
-(CGFloat)_strokeWidthForRing:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_pathForDiameter:(CGFloat)arg0 center:(struct CGPoint )arg1 ;
-(struct CGPath *)_pathForRing:(NSInteger)arg0 center:(struct CGPoint )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateDefaultImage;
-(void)_updateRingColors;
-(void)animateBloom;
-(void)layoutSubviews;
-(void)stopAnimating;
-(void)tintColorDidChange;


@end


#endif