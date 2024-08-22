// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKSIGNATUREVIEW_H
#define AKSIGNATUREVIEW_H

@class UIView, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, UIColor, CHPointStrokeFIFO;
@protocol AKSignatureViewLiveDelegate;


#import "AKBitmapFIFO.h"

@interface AKSignatureView : UIView {
    CGPoint _lastPoint;
    id *_trackingTouchID;
    CGFloat _lastSetNeedsDisplayCallToSuperTime;
    CGRect _accumulatedSignatureDirtyRect;
}


@property (nonatomic) CGRect aggregateInvalid; // ivar: _aggregateInvalid
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo; // ivar: _bitmapFifo
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO; // ivar: _boxcarFIFO
@property (nonatomic) CGFloat currentWeight; // ivar: _currentWeight
@property (readonly, nonatomic) CGFloat interfaceScale;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // ivar: _interpolatingFIFO
@property BOOL isAddingPointWithoutSmoothing; // ivar: _isAddingPointWithoutSmoothing
@property (weak, nonatomic) NSObject<AKSignatureViewLiveDelegate> *liveDelegate; // ivar: _liveDelegate
@property (nonatomic) CGFloat maxPressure; // ivar: _maxPressure
@property (nonatomic) CGFloat maxThickness; // ivar: _maxThickness
@property (nonatomic) CGFloat minPressure; // ivar: _minPressure
@property (nonatomic) CGFloat minThickness; // ivar: _minThickness
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // ivar: _strokeFIFO
@property CGPoint strokeLastLocation; // ivar: _strokeLastLocation
@property CGPoint strokeStartLocation; // ivar: _strokeStartLocation
@property CGFloat strokeStartTime; // ivar: _strokeStartTime
@property NSUInteger totalPointsAdded; // ivar: _totalPointsAdded
@property (nonatomic) CGRect unionDrawingRect; // ivar: _unionDrawingRect


-(BOOL)ak_forceAvailableForTouch:(id)arg0 ;
-(CGFloat)_windowBackingScaleFactor;
-(CGFloat)weightForTouch:(id)arg0 ;
-(CGFloat)weightForValue:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)copyStrokedInterpolatedPath;
-(void)_commonInit;
-(void)_forceRedisplay;
-(void)clear;
-(void)continueStroke;
-(void)continueStrokeWithoutSmoothing;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)handleCoalescedTouches:(id)arg0 forTouch:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)startStroke;
-(void)teardown;
-(void)terminateStroke;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif