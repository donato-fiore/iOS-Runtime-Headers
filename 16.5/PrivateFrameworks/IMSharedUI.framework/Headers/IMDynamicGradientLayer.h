// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDYNAMICGRADIENTLAYER_H
#define IMDYNAMICGRADIENTLAYER_H

@class CALayer, NSArray, CATransformLayer;
@protocol IMDynamicGradientReferenceView;



@interface IMDynamicGradientLayer : CALayer

@property (nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) *CGImage gradient;
@property (nonatomic) CGRect gradientFrame; // ivar: _gradientFrame
@property (retain, nonatomic) CALayer *gradientLayer; // ivar: _gradientLayer
@property (weak, nonatomic) NSObject<IMDynamicGradientReferenceView> *referenceView; // ivar: _referenceView
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (retain, nonatomic) CATransformLayer *trackingLayer; // ivar: _trackingLayer


-(CGFloat)_floorToPixels:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(void)_updateAnimation;
-(void)_updateGradientImage;
-(void)dealloc;
-(void)didMoveToWindow:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutSublayers;


@end


#endif