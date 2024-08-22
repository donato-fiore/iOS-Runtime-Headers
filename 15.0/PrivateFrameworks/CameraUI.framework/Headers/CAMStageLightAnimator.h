// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSTAGELIGHTANIMATOR_H
#define CAMSTAGELIGHTANIMATOR_H

@class CAShapeLayer, CAGradientLayer;

#import <Foundation/Foundation.h>


@interface CAMStageLightAnimator : NSObject

@property (readonly, nonatomic, getter=_isAppearing) BOOL _appearing;
@property (nonatomic, setter=_setAppearingAnimationCount:) NSUInteger _appearingAnimationCount; // ivar: __appearingAnimationCount
@property (nonatomic) CGRect circleBaseFrame; // ivar: _circleBaseFrame
@property (readonly, nonatomic) CAShapeLayer *circleLayer; // ivar: _circleLayer
@property (readonly, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (nonatomic) NSUInteger state; // ivar: _state


-(CGFloat)_circleLineWidth;
-(id)initWithGradientLayer:(id)arg0 circleLayer:(id)arg1 ;
-(struct ? )_circleGeometryForState:(NSUInteger)arg0 ;
-(struct ? )_currentCircleGeometry;
-(struct ? )_currentGradientProperties;
-(struct ? )_gradientGeometryForState:(NSUInteger)arg0 ;
-(struct ? )_gradientPropertiesForGeometry:(struct ? )arg0 ;
-(void)_animateAppearing;
-(void)_animateBounceIfNeeded;
-(void)_animateCircleColorWithDuration:(CGFloat)arg0 timing:(id)arg1 ;
-(void)_animateCircleFromGeometry:(struct ? )arg0 toGeometry:(struct ? )arg1 duration:(CGFloat)arg2 timing:(id)arg3 repeats:(BOOL)arg4 completion:(id)arg5 ;
-(void)_animateCircleGeometry:(struct ? *)arg0 count:(NSUInteger)arg1 duration:(CGFloat)arg2 timing:(id)arg3 repeats:(BOOL)arg4 completion:(id)arg5 ;
-(void)_animateCircleToGeometry:(struct ? )arg0 duration:(CGFloat)arg1 timing:(id)arg2 completion:(id)arg3 ;
-(void)_animateGradientFromProperties:(struct ? )arg0 toProperties:(struct ? )arg1 duration:(CGFloat)arg2 timing:(id)arg3 repeats:(BOOL)arg4 ;
-(void)_animateGradientProperties:(struct ? *)arg0 count:(NSUInteger)arg1 duration:(CGFloat)arg2 timing:(id)arg3 repeats:(BOOL)arg4 ;
-(void)_animateGradientToProperties:(struct ? )arg0 duration:(CGFloat)arg1 timing:(id)arg2 ;
-(void)_animateHidden;
-(void)_animateSearchingIfNeededFromState:(NSUInteger)arg0 ;
-(void)_didFinishAppearing;


@end


#endif