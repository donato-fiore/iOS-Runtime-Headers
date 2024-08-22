// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFPAGEVIEW_H
#define UIPDFPAGEVIEW_H

@class UIView, CALayer, UIImage, UIActivityIndicatorView, NSMutableArray, UIColor;
@protocol NSObject><UIPDFPageViewDelegate;


#import "UIPDFDocument.h"
#import "UIPDFViewTouchHandler.h"
#import "UIPDFPageContentDelegate.h"
#import "UIPDFSearchHighlightsController.h"
#import "UIPDFPage.h"
#import "UIPDFAnnotationController.h"
#import "UIPDFSelectionController.h"

@interface UIPDFPageView : UIView {
    UIPDFDocument *_document;
    NSUInteger _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    CGAffineTransform _pageToViewTransform;
    CGAffineTransform _viewToPageTransform;
    CGRect _cropBox;
    CGRect zoomRect;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    BOOL _backgroundIsScheduled;
    NSUInteger _backgroundScheduleCount;
    BOOL _backgroundIsFullResolution;
    BOOL _boundsChanged;
    BOOL _useTiledContent;
    BOOL _enableLightMemoryFootprint;
    UIPDFPageContentDelegate *_contentDelegate;
    BOOL _scalePageOnDraw;
    *CGColor _highLightColor;
    UIActivityIndicatorView *_activityIndicator;
    os_unfair_lock_s _lock;
    NSMutableArray *_highlights;
    CGFloat _cachedScale;
    BOOL _allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
}


@property (nonatomic) BOOL allowHighlighting;
@property (nonatomic) BOOL allowMenu;
@property (nonatomic) BOOL allowSelection; // ivar: _allowSelection
@property (nonatomic) BOOL allowTwoFingerSelection; // ivar: _allowTwoFingerSelection
@property (nonatomic) BOOL animateSetFrame; // ivar: _animateSetFrame
@property (readonly, nonatomic) UIPDFAnnotationController *annotationController; // ivar: _annotationController
@property (retain) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *backingLayerColor; // ivar: _backingLayerColor
@property (readonly, nonatomic) CALayer *contentLayer; // ivar: _contentLayer
@property (nonatomic) NSObject<NSObject><UIPDFPageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, retain) UIPDFDocument *document;
@property (readonly, nonatomic) CALayer *effectsLayer; // ivar: _effectsLayer
@property (readonly) *CGColor highLightColor;
@property (nonatomic) CGFloat margin; // ivar: _margin
@property UIPDFPage *page;
@property (readonly) NSUInteger pageIndex;
@property UIPDFSelectionController *selectionController; // ivar: _selectionController
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (nonatomic) BOOL showAnnotations; // ivar: showAnnotations
@property (nonatomic) BOOL showLinkAnnotationUnderline; // ivar: _showLinkAnnotationUnderline
@property (nonatomic) BOOL showTextAnnotations; // ivar: _showTextAnnotations
@property (nonatomic) BOOL useBackingLayer; // ivar: _useBackingLayer


-(BOOL)hasSearchHighlights;
-(BOOL)willDoSomethingWithTap:(struct CGPoint )arg0 ;
-(id)createBackingLayer;
-(id)init;
-(id)initWithPage:(id)arg0 ;
-(id)initWithPage:(id)arg0 tiledContent:(BOOL)arg1 ;
-(id)initWithPageLimitedMemory:(id)arg0 ;
-(id)receiveBackgroundImage:(id)arg0 info:(id)arg1 ;
-(id)searchHighlightSelectionAt:(struct CGPoint )arg0 ;
-(struct CGPDFDictionary *)_annotForPoint:(struct CGPoint )arg0 rect:(struct CGRect *)arg1 ;
-(struct CGPoint )convertPointFromPDFPageSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToPDFPageSpace:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromPDFPageSpace:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToPDFPageSpace:(struct CGRect )arg0 ;
-(struct CGRect )fitRect:(struct CGRect )arg0 ;
-(struct CGRect )fitWidth:(struct CGRect )arg0 atVertical:(CGFloat)arg1 ;
-(struct CGRect )rectangleOfInterestAt:(struct CGPoint )arg0 kind:(*int)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addLayers:(BOOL)arg0 ;
-(void)addPage:(id)arg0 ;
-(void)addWidgetToSelection;
-(void)clearSearchHighlights;
-(void)clearSelection;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)didScroll:(id)arg0 ;
-(void)displayContent;
-(void)doubleTapAt:(struct CGPoint )arg0 ;
-(void)drawAnnotations:(struct CGContext *)arg0 ;
-(void)enableLightMemoryFootprint;
-(void)hideSelection;
-(void)highlightSearchSelection:(id)arg0 animated:(BOOL)arg1 ;
-(void)ignoreTouches:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)layoutTextEffects;
-(void)removeBackingLayer;
-(void)scheduleBackgroundImage;
-(void)setDrawingSurfaceLayer:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)setSelectionNeedsDisplay;
-(void)setTransforms;
-(void)showContent;
-(void)showSelection;
-(void)singleTapAt:(struct CGPoint )arg0 ;
-(void)stopActivityIndicator;
-(void)suspendInstantTouchHighlighting;
-(void)twoFingerDoubleTapAt:(struct CGPoint )arg0 ;
-(void)viewDidZoom:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif