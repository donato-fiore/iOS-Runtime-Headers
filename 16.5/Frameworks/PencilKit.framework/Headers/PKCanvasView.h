// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCANVASVIEW_H
#define PKCANVASVIEW_H

@class UIScrollView, UIView, UIGestureRecognizer, NSString;
@protocol PKTiledViewDelegate, PKRulerHostingDelegate, PKToolPickerObserverPrivate, PKToolPickerObserver, PKCanvasViewDelegate;


#import "PKTiledView.h"
#import "PKCanvasAttachmentView.h"
#import "PKDrawing.h"
#import "PKInk.h"
#import "PKTool.h"

@interface PKCanvasView : UIScrollView <PKTiledViewDelegate, PKRulerHostingDelegate, PKToolPickerObserverPrivate, PKToolPickerObserver>

 {
    PKTiledView *_tiledView;
    PKCanvasAttachmentView *_pageView;
    UIScrollView *_fixedPixelSizeScrollView;
    UIView *_fixedPixelSizeScrollViewWrapper;
    ? _canvasViewFlags;
}


@property (readonly, nonatomic) UIGestureRecognizer *_drawingGestureRecognizer;
@property (readonly, nonatomic) CGSize _fixedPixelSize;
@property (nonatomic) NSInteger _maxFileFormatVersion;
@property (readonly, nonatomic) PKTiledView *_tiledView;
@property (nonatomic) BOOL allowsFingerDrawing;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKCanvasViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableWideGamut; // ivar: _disableWideGamut
@property (copy, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic) NSUInteger drawingPolicy;
@property (nonatomic) CGAffineTransform drawingTransform; // ivar: _drawingTransform
@property (nonatomic) SEL drawingUndoSelector;
@property (weak, nonatomic) id *drawingUndoTarget;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink;
@property (copy, nonatomic) PKDrawing *nonNullDrawing;
@property (nonatomic) BOOL predictionDisabled;
@property (nonatomic, getter=isRulerActive) BOOL rulerActive;
@property (nonatomic) BOOL rulerEnabled;
@property (weak, nonatomic) NSObject<PKRulerHostingDelegate> *rulerHostingDelegate; // ivar: _rulerHostingDelegate
@property (readonly, nonatomic) UIView *rulerView;
@property (readonly, nonatomic) UIView *selectionView;
@property (readonly, nonatomic) CGAffineTransform strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCopyAsText;
@property (copy, nonatomic) PKTool *tool;


-(BOOL)_hasSelection;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canvasView:(id)arg0 shouldBeginDrawingWithTouch:(id)arg1 ;
-(BOOL)rulerHostWantsSharedRuler;
-(CGFloat)_latestLatency;
-(id)_adornmentViewsToHitTest;
-(id)_allowedDrawingTouchTypes;
-(id)_currentStroke;
-(id)_getDelegateZoomView;
-(id)_pinchGestureRecognizer;
-(id)_selectionController;
-(id)_selectionInteraction;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 drawingWidth:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 drawingWidth:(CGFloat)arg1 fixedPixelSizeScrollView:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 fixedPixelSize:(struct CGSize )arg1 drawingScale:(CGFloat)arg2 layerFixedPixelSize:(BOOL)arg3 ;
-(id)rulerHostingView;
-(struct CGSize )_metalViewDrawableSize;
-(struct CGSize )_rendererControllerPixelSize;
-(void)_canvasViewWillBeginDrawing:(id)arg0 ;
-(void)_flushCaches;
-(void)_fullyRendered;
-(void)_setChildrenBackgroundColor:(id)arg0 ;
-(void)_setFixedPixelSize:(struct CGSize )arg0 drawingScale:(CGFloat)arg1 ;
-(void)_setSelectedStrokesColor:(id)arg0 ;
-(void)_toolPicker:(id)arg0 didChangeColor:(id)arg1 ;
-(void)_updateCanvas;
-(void)_updateChildrenOpaque;
-(void)awakeFromNib;
-(void)canvasView:(id)arg0 beganStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 cancelledStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 endedStroke:(id)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg0 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)canvasViewDidEraseStrokes:(id)arg0 ;
-(void)commitSelectionIfNecessaryWithCompletion:(id)arg0 ;
-(void)imageWithCompletionBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)paste:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setMaximumZoomScale:(CGFloat)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setupDrawingWidth:(CGFloat)arg0 fixedPixelSizeScrollView:(id)arg1 ;
-(void)toolPickerIsRulerActiveDidChange:(id)arg0 ;
-(void)toolPickerSelectedToolDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFixedPixelSizeViewForBounds:(struct CGRect )arg0 ;
-(void)updateSubviewsForBounds:(struct CGRect )arg0 ;


@end


#endif