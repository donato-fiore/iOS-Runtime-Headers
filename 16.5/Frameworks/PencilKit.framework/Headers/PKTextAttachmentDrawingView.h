// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTATTACHMENTDRAWINGVIEW_H
#define PKTEXTATTACHMENTDRAWINGVIEW_H

@class UITextAttachmentDrawingView, UIScrollView, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, NSTextAttachment, UIView;
@protocol PKTextAttachmentDrawingViewProviderView, PKTextAttachmentView, UIGestureRecognizerDelegate, PKTextAttachmentResizeViewDelegate, PKLinedPaperLayerDelegate, UIPointerInteractionDelegate, UIScrollViewDelegate;


#import "PKTextAttachmentResizeView.h"
#import "PKLinedPaperLayer.h"
#import "PKTextAttachmentDrawingViewTouchRecognizer.h"

@interface PKTextAttachmentDrawingView : UITextAttachmentDrawingView <PKTextAttachmentDrawingViewProviderView, PKTextAttachmentView, UIGestureRecognizerDelegate, PKTextAttachmentResizeViewDelegate, PKLinedPaperLayerDelegate, UIPointerInteractionDelegate, UIScrollViewDelegate>

 {
    UIScrollView *_tileMaskView;
    CGAffineTransform _cachedDrawingTransform;
    CGFloat _cachedDrawingTransformBoundsWidth;
}


@property (readonly, nonatomic) NSInteger _characterIndex;
@property (retain, nonatomic) PKTextAttachmentResizeView *bottomResizeView; // ivar: _bottomResizeView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat drawingAspectRatio; // ivar: _drawingAspectRatio
@property (nonatomic) CGRect drawingCanvasBounds;
@property (readonly, nonatomic) CGAffineTransform drawingTransform;
@property (readonly, nonatomic) CGSize drawingVisibleSize;
@property (retain, nonatomic) UITapGestureRecognizer *eatKeyboardGestureRecognizer; // ivar: _eatKeyboardGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *hideMenuGestureRecognizer; // ivar: _hideMenuGestureRecognizer
@property (nonatomic) BOOL inserted; // ivar: _inserted
@property (readonly, nonatomic) BOOL isAtBeginningOfDocument;
@property (nonatomic) BOOL isLiveResizing; // ivar: _isLiveResizing
@property (retain, nonatomic) PKLinedPaperLayer *linesLayer; // ivar: _linesLayer
@property (nonatomic) CGRect liveResizeAttachmentBounds; // ivar: _liveResizeAttachmentBounds
@property (retain, nonatomic) UIPanGestureRecognizer *resizeDragGestureRecognizer; // ivar: _resizeDragGestureRecognizer
@property (retain, nonatomic) PKTextAttachmentDrawingViewTouchRecognizer *resizeHighlightGestureRecognizer; // ivar: _resizeHighlightGestureRecognizer
@property (nonatomic) BOOL resizeUpper; // ivar: _resizeUpper
@property (retain, nonatomic) UITapGestureRecognizer *showMenuGestureRecognizer; // ivar: _showMenuGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapBelowDrawingGestureRecognizer; // ivar: _tapBelowDrawingGestureRecognizer
@property (weak, nonatomic) NSTextAttachment *textAttachment; // ivar: _textAttachment
@property (nonatomic) CGPoint textViewContentOffsetStartLocation; // ivar: _textViewContentOffsetStartLocation
@property (readonly, nonatomic) UIView *tileScaleView; // ivar: _tileScaleView
@property (retain, nonatomic) PKTextAttachmentResizeView *topResizeView; // ivar: _topResizeView
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale
@property (nonatomic) CGPoint zoomStartLocationInAttachment; // ivar: _zoomStartLocationInAttachment
@property (nonatomic) CGPoint zoomStartLocationInWindow; // ivar: _zoomStartLocationInWindow
@property (nonatomic) CGFloat zoomStartScale; // ivar: _zoomStartScale
@property (nonatomic) BOOL zoomingProgramatically; // ivar: _zoomingProgramatically


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizerShouldDelayLift:(id)arg0 ;
-(BOOL)hitByTouchLocation:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 ;
-(BOOL)hitChrome:(struct CGPoint )arg0 isStylus:(BOOL)arg1 ;
-(BOOL)hitTestResizeHandles:(struct CGPoint )arg0 threshold:(CGFloat)arg1 ;
-(BOOL)isAtEndOfDocument;
-(BOOL)resignFirstResponder;
-(CGFloat)canvasHeightFromDrawingViewHeight:(CGFloat)arg0 ;
-(CGFloat)canvasHeightFromDrawingViewHeight:(CGFloat)arg0 drawingViewWidth:(CGFloat)arg1 ;
-(CGFloat)desiredAttachmentViewWidth;
-(CGFloat)drawingScaleForViewWidth:(CGFloat)arg0 ;
-(CGFloat)heightFromDrawing:(id)arg0 delta:(CGFloat)arg1 ;
-(id)_drawingGestureRecognizer;
-(id)_textView;
-(id)dataForTextAttachment:(id)arg0 ;
-(id)drawingForTextAttachment:(id)arg0 drawingClass:(Class)arg1 ;
-(id)initWithAttachment:(id)arg0 drawingClass:(Class)arg1 inserted:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrawingClass:(Class)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 drawing:(id)arg1 ;
-(id)keyCommands;
-(id)linedPaperLayerAttachmentContainerView:(id)arg0 ;
-(id)linedPaperLayerLinedPaper:(id)arg0 ;
-(id)linedPaperLayerTraitCollection:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)resizeViewTextView:(id)arg0 ;
-(id)tileMaskView;
-(id)tiledView;
-(id)tiledViewAttachmentViews;
-(id)topLevelAttachmentView;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGAffineTransform )drawingTransformForViewWidth:(CGFloat)arg0 ;
-(struct CGRect )drawingBounds;
-(struct CGRect )drawingBoundsForViewWidth:(CGFloat)arg0 ;
-(struct CGRect )drawingContentBounds;
-(struct CGRect )drawingTextAttachmentBounds;
-(struct CGRect )resizeViewDrawingBounds:(id)arg0 ;
-(struct CGSize )desiredTextAttachmentSize;
-(void)_adjustResizeIndicatorVisibility;
-(void)_adjustResizeIndicatorVisibility:(BOOL)arg0 highlightBackground:(BOOL)arg1 ;
-(void)_adjustResizeIndicatorVisibilityNotification;
-(void)_noOpForGesture:(id)arg0 ;
-(void)_sceneDidActivate:(id)arg0 ;
-(void)_setAdjustResizeIndicatorVisible:(BOOL)arg0 animated:(BOOL)arg1 highlightBackground:(BOOL)arg2 ;
-(void)_setHeight:(CGFloat)arg0 originalHeight:(CGFloat)arg1 growFromTop:(BOOL)arg2 ;
-(void)_share:(id)arg0 ;
-(void)_triggerRedraw;
-(void)_updateAfterBackgroundSnapshotting:(id)arg0 ;
-(void)_updateAttachmentBoundsEnsureLayout:(BOOL)arg0 ;
-(void)_updateResizeTouchInsetsFingerDrawingEnabled:(BOOL)arg0 ;
-(void)_updateViewHeightIfNecessary;
-(void)beginLiveResize;
-(void)copy:(id)arg0 ;
-(void)copyStrokeSelection:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)cutStrokeSelection:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)deleteStrokeSelection:(id)arg0 ;
-(void)didBeginDrawing;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)drawingDataDidChange:(id)arg0 ;
-(void)drawingDidChangeVisibleStrokes:(BOOL)arg0 ;
-(void)drawingDidEraseStrokes:(id)arg0 ;
-(void)endLiveResize;
-(void)fingerDrawingEnabledDidChange;
-(void)handleDoubleTap:(id)arg0 ;
-(void)hideDrawingMenu:(id)arg0 ;
-(void)higlightResize:(id)arg0 ;
-(void)insertSpace:(id)arg0 ;
-(void)layoutSubviews;
-(void)layoutTileViews;
-(void)menuDidHide:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)pixelAlignForContentScale:(CGFloat)arg0 enclosingScrollView:(id)arg1 ;
-(void)resetZoom;
-(void)resizeDrawing:(id)arg0 ;
-(void)resizeView:(id)arg0 finishedWithOriginalDrawingBounds:(struct CGRect )arg1 originalViewBounds:(struct CGRect )arg2 ;
-(void)resizeView:(id)arg0 setDrawingHeight:(CGFloat)arg1 originalHeight:(CGFloat)arg2 growFromTop:(BOOL)arg3 ;
-(void)resizeViewDidUpdate:(id)arg0 ;
-(void)resizeViewLayoutAttachment:(id)arg0 ;
-(void)resizeViewRemoveAttachment:(id)arg0 ;
-(void)scaleDrawing:(CGFloat)arg0 ;
-(void)scaleDrawing:(CGFloat)arg0 withOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)selectAll:(id)arg0 ;
-(void)setAttachmentChromeVisible:(BOOL)arg0 animated:(BOOL)arg1 highlightBackground:(BOOL)arg2 ;
-(void)setContentHidden:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)showDrawingMenu:(id)arg0 ;
-(void)tapBelowDrawingGesture:(id)arg0 ;
-(void)toolPickerDidHide;
-(void)toolPickerDidShow;
-(void)updateDrawingHeight:(CGFloat)arg0 ;
-(void)updateDrawingHeight:(CGFloat)arg0 notifyDrawingDidChange:(BOOL)arg1 ;
-(void)updateFrameForTextContainer;
-(void)updateTileContainerViewFrame;


@end


#endif