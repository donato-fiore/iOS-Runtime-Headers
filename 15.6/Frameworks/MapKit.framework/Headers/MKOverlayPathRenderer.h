// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKOVERLAYPATHRENDERER_H
#define MKOVERLAYPATHRENDERER_H

@class UIColor, NSArray, NSMutableDictionary;


#import "MKOverlayRenderer.h"
#import "MKUsageCounter.h"

@interface MKOverlayPathRenderer : MKOverlayRenderer {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    CGFloat _lineWidth;
    int _lineJoin;
    int _lineCap;
    CGFloat _miterLimit;
    CGFloat _lineDashPhase;
    NSArray *_lineDashPattern;
    *CGPath _path;
    os_unfair_lock_s _runningVectorGeometryAnimationsLock;
    NSMutableDictionary *_runningVectorGeometryAnimations;
}


@property (readonly, nonatomic, getter=_externalSubclassOverridesDrawingMethods) BOOL externalSubclassOverridesDrawingMethods; // ivar: _externalSubclassOverridesDrawingMethods
@property (retain) UIColor *fillColor;
@property int lineCap;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property int lineJoin;
@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property *CGPath path;
@property (nonatomic) BOOL shouldRasterize; // ivar: _shouldRasterize
@property (retain) UIColor *strokeColor;
@property (weak, nonatomic, getter=_usageCounter, setter=_setUsageCounter:) MKUsageCounter *usageCounter; // ivar: _usageCounter


+(Class)_mapkitLeafClass;
-(BOOL)_canProvideVectorGeometry;
-(BOOL)canDrawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithOverlay:(id)arg0 ;
-(void)_animateVectorGeometryIfNecessaryForKey:(id)arg0 withStepHandler:(id)arg1 ;
-(void)_performInitialConfiguration;
-(void)applyFillPropertiesToContext:(struct CGContext *)arg0 atZoomScale:(CGFloat)arg1 ;
-(void)applyStrokePropertiesToContext:(struct CGContext *)arg0 atZoomScale:(CGFloat)arg1 ;
-(void)createPath;
-(void)dealloc;
-(void)drawMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)invalidatePath;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif