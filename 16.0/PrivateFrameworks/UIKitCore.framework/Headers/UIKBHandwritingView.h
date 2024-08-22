// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBHANDWRITINGVIEW_H
#define UIKBHANDWRITINGVIEW_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol UIGestureRecognizerDelegate;


#import "UIKBKeyView.h"
#import "UIKBHandwritingBezierPathPointFIFO.h"
#import "UIBezierPath.h"
#import "UIKBHandwritingInputSpeedModel.h"
#import "UIKBHandwritingQuadCurvePointFIFO.h"
#import "UIDelayedAction.h"
#import "UIKBHandwritingBoxcarFilterPointFIFO.h"
#import "UIView.h"
#import "UIKBHandwritingStrokePointFIFO.h"
#import "UIKBHandwritingStrokeView.h"

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) NSMutableSet *activeTouches; // ivar: _activeTouches
@property (retain, nonatomic) UIKBHandwritingBezierPathPointFIFO *bezierPathFIFO; // ivar: _bezierPathFIFO
@property (retain, nonatomic) UIBezierPath *currentPath; // ivar: _currentPath
@property (retain, nonatomic) NSMutableArray *currentPoints; // ivar: _currentPoints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialPointPosted; // ivar: _initialPointPosted
@property (nonatomic) *CGColor inkColor; // ivar: _inkColor
@property (nonatomic) *CGImage inkMask; // ivar: _inkMask
@property (nonatomic) CGFloat inkWidth; // ivar: _inkWidth
@property (retain, nonatomic) UIKBHandwritingInputSpeedModel *inputSpeedModel; // ivar: _inputSpeedModel
@property (retain, nonatomic) NSMutableArray *interpolatedPoints; // ivar: _interpolatedPoints
@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // ivar: _interpolatingFIFO
@property (retain, nonatomic) UIDelayedAction *nextPageTimer; // ivar: _nextPageTimer
@property (nonatomic) CGFloat pageOffset; // ivar: _pageOffset
@property (nonatomic) ? previousPoint; // ivar: _previousPoint
@property (retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // ivar: _smoothingFIFO
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // ivar: _strokeFIFO
@property (retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // ivar: _strokeView
@property (readonly) Class superclass;


-(BOOL)cancelTouchTracking;
-(BOOL)endStrokeWithTouches:(id)arg0 event:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg0 ;
-(BOOL)shouldCache;
-(NSUInteger)numberOfStrokes;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)layerForRenderFlags:(NSInteger)arg0 ;
-(void)addInkPoint:(struct CGPoint )arg0 value:(CGFloat)arg1 ;
-(void)cancelPageOffsetTimer;
-(void)clearAndNotify:(BOOL)arg0 ;
-(void)clearTouches;
-(void)dealloc;
-(void)deleteStrokesAtIndexes:(id)arg0 ;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)log;
-(void)recreateInkMaskIfNeeded;
-(void)send;
-(void)setRenderConfig:(id)arg0 ;
-(void)startFadeOutAnimation;
-(void)touchPageOffsetTimer;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;
-(void)updateInkColor;


@end


#endif