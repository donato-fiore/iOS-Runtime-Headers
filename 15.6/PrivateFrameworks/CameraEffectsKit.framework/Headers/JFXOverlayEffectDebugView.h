// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXOVERLAYEFFECTDEBUGVIEW_H
#define JFXOVERLAYEFFECTDEBUGVIEW_H

@class UIView, CAShapeLayer, CALayer, CATransformLayer;
@protocol JFXOverlayEffectDebugViewDelegate;


#import "JFXOverlayEffectDebugViewOptions.h"

@interface JFXOverlayEffectDebugView : UIView

@property (retain, nonatomic) CAShapeLayer *additionalRectsLayer; // ivar: _additionalRectsLayer
@property (retain, nonatomic) CAShapeLayer *additionalRectsTransformedLayer; // ivar: _additionalRectsTransformedLayer
@property (retain, nonatomic) CAShapeLayer *cornerPointsLayer; // ivar: _cornerPointsLayer
@property (weak, nonatomic) NSObject<JFXOverlayEffectDebugViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CAShapeLayer *documentBoundingBoxLayer; // ivar: _documentBoundingBoxLayer
@property (retain, nonatomic) CAShapeLayer *hitAreaBoundingBoxLayer; // ivar: _hitAreaBoundingBoxLayer
@property (retain, nonatomic) CAShapeLayer *hitAreaMinimumSizeBoundingBoxLayer; // ivar: _hitAreaMinimumSizeBoundingBoxLayer
@property (retain, nonatomic) CAShapeLayer *hitAreaPointsLayer; // ivar: _hitAreaPointsLayer
@property (retain, nonatomic) CAShapeLayer *midpointLayer; // ivar: _midpointLayer
@property (retain, nonatomic) CAShapeLayer *objectAlignedBoundingBoxLayer; // ivar: _objectAlignedBoundingBoxLayer
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *options; // ivar: _options
@property (retain, nonatomic) CAShapeLayer *outputROILayer; // ivar: _outputROILayer
@property (retain, nonatomic) UIView *rootContainerView; // ivar: _rootContainerView
@property (retain, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (retain, nonatomic) CATransformLayer *rootTransformLayer; // ivar: _rootTransformLayer
@property (retain, nonatomic) CALayer *textBoundingBoxesContainerLayer; // ivar: _textBoundingBoxesContainerLayer
@property (retain, nonatomic) CALayer *textCornerPointsContainerLayer; // ivar: _textCornerPointsContainerLayer


-(id)additionalRectsToDraw;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(void)setupViews;
-(void)updateAdditionalRects:(id)arg0 transformedLayer:(id)arg1 effectScale:(CGFloat)arg2 rects:(id)arg3 ;
-(void)updateBorderedLayer:(id)arg0 borderRect:(struct CGRect )arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3 ;
-(void)updateDottedBorderedLayer:(id)arg0 borderRect:(struct CGRect )arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3 borderPhase:(CGFloat)arg4 borderDashPattern:(id)arg5 ;
-(void)updateFilledPolygonLayer:(id)arg0 path:(struct CGPath *)arg1 fillColor:(id)arg2 ;
-(void)updatePointsLayers:(id)arg0 points:(id)arg1 colors:(id)arg2 size:(CGFloat)arg3 ;
-(void)updatePolygonLayer:(id)arg0 points:(id)arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3 ;
-(void)updateWithEffectFrame:(id)arg0 ;


@end


#endif