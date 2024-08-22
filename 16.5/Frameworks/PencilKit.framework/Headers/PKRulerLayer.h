// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKRULERLAYER_H
#define PKRULERLAYER_H

@class CALayer, NSString, NSTimer, CATextLayer;
@protocol UIGestureRecognizerDelegate;


#import "PKRulerController.h"

@interface PKRulerLayer : CALayer <UIGestureRecognizerDelegate>



@property (nonatomic) CGFloat currentTValueForSnappedDrawing; // ivar: _currentTValueForSnappedDrawing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *imageTransformTimer; // ivar: _imageTransformTimer
@property (nonatomic) CGFloat initialDrawingBoundsYOrigin; // ivar: _initialDrawingBoundsYOrigin
@property (nonatomic) BOOL isExpandedInline; // ivar: _isExpandedInline
@property (nonatomic) BOOL isInlineResizing; // ivar: _isInlineResizing
@property (nonatomic) BOOL isRulerDrawingMovingToEndOfRuler; // ivar: _isRulerDrawingMovingToEndOfRuler
@property (nonatomic) CGFloat maxTValueForSnappedDrawing; // ivar: _maxTValueForSnappedDrawing
@property (nonatomic) CGFloat minTValueForSnappedDrawing; // ivar: _minTValueForSnappedDrawing
@property (nonatomic) CGFloat originTValueForSnappedDrawing; // ivar: _originTValueForSnappedDrawing
@property (nonatomic) CGAffineTransform previousRulerTransform; // ivar: _previousRulerTransform
@property (nonatomic) CGFloat rulerAlpha; // ivar: _rulerAlpha
@property (retain, nonatomic) CALayer *rulerAngleMarker; // ivar: _rulerAngleMarker
@property (retain, nonatomic) CATextLayer *rulerAngleText; // ivar: _rulerAngleText
@property (retain, nonatomic) CALayer *rulerAngleTick; // ivar: _rulerAngleTick
@property (weak, nonatomic) PKRulerController *rulerController; // ivar: _rulerController
@property (retain, nonatomic) CALayer *rulerDistanceHUD; // ivar: _rulerDistanceHUD
@property (retain, nonatomic) CATextLayer *rulerDistanceText; // ivar: _rulerDistanceText
@property (retain, nonatomic) CALayer *rulerLayer; // ivar: _rulerLayer
@property (nonatomic) CGAffineTransform rulerTransform;
@property (nonatomic) CGFloat rulerZoomStartCenterTValueOnScreen; // ivar: _rulerZoomStartCenterTValueOnScreen
@property (nonatomic) CGFloat rulerZoomStartScale; // ivar: _rulerZoomStartScale
@property (nonatomic) CGAffineTransform rulerZoomStartTransform; // ivar: _rulerZoomStartTransform
@property (readonly) Class superclass;
@property (nonatomic) BOOL zooming; // ivar: _zooming


-(BOOL)compactRuler;
-(BOOL)shouldUseLargestRulerTextFontSize;
-(BOOL)viewPointInRuler:(struct CGPoint )arg0 ;
-(CGFloat)_distanceMarkerFontSize;
-(CGFloat)_fontSizeForRulerTextHUD:(id)arg0 ;
-(CGFloat)rulerAlignInset;
-(CGFloat)rulerTickMarkInset;
-(CGFloat)rulerWidth;
-(NSInteger)currentAngle;
-(NSInteger)userAngle;
-(id)_rulerImage;
-(id)_textForRulerHUD:(CGFloat)arg0 ;
-(id)addOpacityAnimationOnLayer:(id)arg0 delegate:(id)arg1 toOpacity:(CGFloat)arg2 ;
-(id)addScaleAnimationOnLayer:(id)arg0 delegate:(id)arg1 fromScale:(CGFloat)arg2 toScale:(CGFloat)arg3 ;
-(id)initWithRulerController:(id)arg0 ;
-(id)rulerDialImage;
-(id)rulerDialLevelImage;
-(struct CGPoint )getRulerCenterLineOriginAndTangent:(struct CGPoint *)arg0 ;
-(void)addScaleAndOpacityAnimationOnLayer:(id)arg0 delegate:(id)arg1 fromScale:(CGFloat)arg2 toScale:(CGFloat)arg3 fromAlpha:(CGFloat)arg4 toAlpha:(CGFloat)arg5 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)hideRulerAngleMarker;
-(void)hideRulerAnimated:(BOOL)arg0 ;
-(void)removeRulerMarkers;
-(void)setImageTransformFrom:(struct CGAffineTransform )arg0 toTransform:(struct CGAffineTransform )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 ;
-(void)showRuler;
-(void)updateAngleWithAngleMarkerPosition:(struct CGPoint )arg0 ;
-(void)updateDistanceMarkerWithSpacing:(CGFloat)arg0 ;
-(void)updateImageTransform:(id)arg0 ;
-(void)updateRulerAlpha:(CGFloat)arg0 ;
-(void)updateRulerMarkerForLocation:(struct CGPoint )arg0 firstTouch:(BOOL)arg1 ;
-(void)updateRulerTickMarkImage;


@end


#endif