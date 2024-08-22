// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIROTATIONARROWANIMATIONLAYER_H
#define BKUIROTATIONARROWANIMATIONLAYER_H

@class CALayer, CAShapeLayer, UIColor;



@interface BKUIRotationArrowAnimationLayer : CALayer

@property (nonatomic) CGFloat arrowAngle; // ivar: _arrowAngle
@property (retain, nonatomic) CALayer *arrowContainer; // ivar: _arrowContainer
@property (retain, nonatomic) CAShapeLayer *arrowLayerLeft; // ivar: _arrowLayerLeft
@property (retain, nonatomic) CAShapeLayer *arrowLayerRight; // ivar: _arrowLayerRight
@property (nonatomic) CGFloat arrowlength; // ivar: _arrowlength
@property (retain, nonatomic) CAShapeLayer *circleLayer; // ivar: _circleLayer
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize containerSize; // ivar: _containerSize
@property (copy, nonatomic) id *getOrientation; // ivar: _getOrientation
@property (nonatomic) CGPoint hostCenter; // ivar: _hostCenter
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (retain, nonatomic) CAShapeLayer *rotationLayer; // ivar: _rotationLayer


+(id)animatorByEmbedding:(id)arg0 color:(id)arg1 radiusForOrientation:(id)arg2 ;
+(id)animatorWith:(struct CGRect )arg0 color:(id)arg1 radiusForOrientation:(id)arg2 ;
-(id)_extendedInit:(struct CGPoint )arg0 ;
-(id)init;
// -(id)initWith:(struct CGRect )arg0 radiusForOrientation:(id)arg1 arrowAngle:(unk)arg2 arrowLength:(CGFloat)arg3 color:(CGFloat)arg4  ;
-(void)_animateArrowClockwise:(CGFloat)arg0 duration:(CGFloat)arg1 animationDelay:(CGFloat)arg2 ;
-(void)_animateArrowCounterClockwise:(CGFloat)arg0 duration:(CGFloat)arg1 animationDelay:(CGFloat)arg2 ;
-(void)_animateArrowPaths:(CGFloat)arg0 delay:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)_animateArrowUpsideDown:(CGFloat)arg0 duration:(CGFloat)arg1 animationDelay:(CGFloat)arg2 ;
-(void)_landscapeAnimationImpl:(CGFloat)arg0 duration:(CGFloat)arg1 animationDelay:(CGFloat)arg2 ;
-(void)_layoutArrowContainer:(NSInteger)arg0 ;
-(void)_layoutArrowSubLayers;
-(void)_recreateArrow;
-(void)_resetHideCircleLayerStrokeTo:(CGFloat)arg0 ;
-(void)_rotateRotationLayerBy:(CGFloat)arg0 startTime:(CGFloat)arg1 fromDegree:(NSUInteger)arg2 toDegree:(NSUInteger)arg3 ;
-(void)_updateCircleLayerLayout:(NSInteger)arg0 ;
-(void)_zeroOutArrowStroke;
-(void)animateDirectionPath:(CGFloat)arg0 orientation:(NSInteger)arg1 duration:(CGFloat)arg2 animationDelay:(CGFloat)arg3 ;
-(void)enableDebug:(BOOL)arg0 ;
-(void)layoutSublayers;
-(void)resetLayout;
-(void)stopAnimationRemoveStroke;


@end


#endif