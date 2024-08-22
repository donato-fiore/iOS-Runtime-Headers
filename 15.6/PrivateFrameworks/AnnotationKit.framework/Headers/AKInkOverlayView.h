// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKINKOVERLAYVIEW_H
#define AKINKOVERLAYVIEW_H

@class UIView, PKInk, NSHashTable, PKCanvasView, NSString, UIGestureRecognizer;
@protocol PKCanvasViewDelegate, AKInkOverlayViewDelegate, PKRulerHostingDelegate;


#import "AKPageController.h"

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate>

 {
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
}


@property CGSize canvasSizeInPKDrawingSpace; // ivar: _canvasSizeInPKDrawingSpace
@property (retain) PKCanvasView *canvasView; // ivar: _canvasView
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<AKInkOverlayViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
@property (weak) id *drawingUndoTarget; // ivar: _drawingUndoTarget
@property (readonly) NSUInteger hash;
@property (copy) PKInk *ink;
@property (weak) AKPageController *pageController; // ivar: _pageController
@property (readonly, nonatomic) UIGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) CGRect previousPageRectInAKModel; // ivar: _previousPageRectInAKModel
@property (weak, nonatomic) NSObject<PKRulerHostingDelegate> *rulerHostingDelegate; // ivar: _rulerHostingDelegate
@property (readonly) Class superclass;


+(id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg0 drawingUndoTarget:(id)arg1 ;
+(id)newDrawingUndoTargetWithPageController:(id)arg0 ;
+(struct CGRect )_convertRect:(struct CGRect )arg0 fromPageControllerModelSpace:(id)arg1 toDrawingInCanvasViewSpace:(id)arg2 ;
-(BOOL)_canvasView:(id)arg0 shouldBeginDrawingWithTouch:(id)arg1 ;
-(BOOL)canvasNeedsUpdate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPageController:(id)arg0 drawingUndoTarget:(id)arg1 ;
-(id)updatedDrawingForPageRectUpdate;
-(void)_calculateFixedPixelSize:(struct CGSize *)arg0 drawingScale:(*CGFloat)arg1 ;
-(void)_canvasView:(id)arg0 beganStroke:(id)arg1 ;
-(void)_canvasView:(id)arg0 cancelledStroke:(id)arg1 ;
-(void)_canvasView:(id)arg0 endedStroke:(id)arg1 ;
-(void)_updateCanvasViewInk;
-(void)_updatedSelectedStrokesWithColor:(id)arg0 ;
-(void)awakeFromNib;
-(void)canvasViewDidBeginDrawing:(id)arg0 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)canvasViewDrawingDidChange:(id)arg0 ;
-(void)commonInit;
-(void)commonPostInit;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)removeStrokesFromDrawing:(id)arg0 ;
-(void)setupInkView;
-(void)teardown;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif