// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKSMOOTHPATHVIEW_H
#define AKSMOOTHPATHVIEW_H

@class UIView, NSString, CHQuadCurvePointFIFO, CHBoxcarFilterPointFIFO, UIColor, CHPointStrokeFIFO;
@protocol CHPointFIFODrawingTarget, AKSmoothPathViewDelegate;


#import "AKBitmapFIFO.h"
#import "AKController.h"

@interface AKSmoothPathView : UIView <CHPointFIFODrawingTarget>

 {
    CGFloat _cachedEffectiveStrokeWidthInModel;
}


@property BOOL applyModelBaseScaleFactorToStroke; // ivar: _applyModelBaseScaleFactorToStroke
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo; // ivar: _bitmapFifo
@property CGFloat cachedModelToViewScale; // ivar: _cachedModelToViewScale
@property (weak) AKController *controller; // ivar: _controller
@property CGFloat currentWeight; // ivar: _currentWeight
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<AKSmoothPathViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL disableSingleDotSpecialCase; // ivar: _disableSingleDotSpecialCase
@property (nonatomic) BOOL hasShadow; // ivar: _hasShadow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // ivar: _interpolatingFIFO
@property BOOL isAddingPointWithoutSmoothing; // ivar: _isAddingPointWithoutSmoothing
@property (nonatomic) CGFloat maxPressure; // ivar: _maxPressure
@property (nonatomic) CGFloat maxThickness; // ivar: _maxThickness
@property (nonatomic) CGFloat minPressure; // ivar: _minPressure
@property (nonatomic) CGFloat minThickness; // ivar: _minThickness
@property (nonatomic) BOOL prestrokedOutputMode; // ivar: _prestrokedOutputMode
@property CGFloat shadowRadiusInModel; // ivar: _shadowRadiusInModel
@property CGFloat shadowRadiusInView; // ivar: _shadowRadiusInView
@property CGFloat singleDotCurrentSize; // ivar: _singleDotCurrentSize
@property CGRect singleDotRect; // ivar: _singleDotRect
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO; // ivar: _smoothingFIFO
@property (nonatomic) BOOL startedTouchDrawing; // ivar: _startedTouchDrawing
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // ivar: _strokeFIFO
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (readonly) Class superclass;


+(id)newSmoothPathViewForCurrentPlatformWithController:(id)arg0 ;
-(BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)arg0 ;
-(BOOL)isOpaque;
-(CGFloat)_convertValueFromModelToSelf:(CGFloat)arg0 ;
-(CGFloat)_effectiveStrokeWidthInModel;
-(CGFloat)_windowBackingScaleFactor;
-(CGFloat)weightForValue:(CGFloat)arg0 ;
-(id)_pointForRecognizer;
-(id)_pointForTouch;
-(id)drawing;
-(id)initWithController:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGContext *)_getPlatformCGContext;
-(void)_clear;
-(void)_setupFilterChainWithBitmapFifo:(BOOL)arg0 ;
-(void)_setupShadowInContext:(struct CGContext *)arg0 ;
-(void)_updateInterpolatingFifoLineWidth;
-(void)_updateShadowRadiusInView;
-(void)awakeFromNib;
-(void)callDelegate;
-(void)commonInit;
-(void)continueStroke;
-(void)continueStrokeWithoutSmoothing;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)handleDragAction:(id)arg0 ;
-(void)handleForwardedEvent:(id)arg0 ;
-(void)handleTapAction:(id)arg0 ;
-(void)startStroke;
-(void)teardown;
-(void)terminateStroke;
-(void)updateInterpolatingFifoUnitScale;


@end


#endif