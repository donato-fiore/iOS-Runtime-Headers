// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFVIEW_H
#define PDFVIEW_H

@class UIView, UIButton, UIColor, NSString, UIFindInteraction, NSArray;
@protocol PDFPasswordViewControllerDelegate, AKSignaturesControllerDelegate, UIGestureRecognizerDelegate, UIFindInteractionDelegate, PDFViewDelegate, PDFPageOverlayViewProvider;


#import "PDFViewPrivate.h"
#import "PDFPageBackgroundManager.h"
#import "PDFDetectedFormField.h"
#import "PDFPage.h"
#import "PDFOverlayViewsController.h"
#import "PDFDestination.h"
#import "PDFSelection.h"
#import "PDFDocument.h"

@interface PDFView : UIView <PDFPasswordViewControllerDelegate, AKSignaturesControllerDelegate, UIGestureRecognizerDelegate, UIFindInteractionDelegate>

 {
    PDFViewPrivate *_private;
    NSUInteger _currentPageIndex;
    PDFPageBackgroundManager *_pageBackgroundManager;
    PDFDetectedFormField *_detectedFormField;
    PDFPage *_detectedFormFieldPage;
    PDFOverlayViewsController *_overlayViewController;
    UIButton *_formFieldButton;
    id *_formFieldButtonShowKeyboardNotification;
    id *_formFieldButtonHideKeyboardNotification;
    BOOL _annotationEditingAllowed;
}


@property (nonatomic) BOOL autoScales;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (readonly, nonatomic) BOOL canGoToFirstPage;
@property (readonly, nonatomic) BOOL canGoToLastPage;
@property (readonly, nonatomic) BOOL canGoToNextPage;
@property (readonly, nonatomic) BOOL canGoToPreviousPage;
@property (readonly, nonatomic) BOOL canZoomIn;
@property (readonly, nonatomic) BOOL canZoomOut;
@property (readonly, nonatomic) PDFDestination *currentDestination;
@property (readonly, nonatomic) PDFPage *currentPage;
@property (retain, nonatomic) PDFSelection *currentSelection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PDFViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayBox;
@property (nonatomic) NSInteger displayDirection;
@property (nonatomic) NSInteger displayMode;
@property (nonatomic) BOOL displaysAsBook;
@property (nonatomic) BOOL displaysPageBreaks;
@property (nonatomic) BOOL displaysRTL;
@property (retain, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) UIView *documentView;
@property (nonatomic) BOOL enableDataDetectors;
@property (readonly, nonatomic) UIFindInteraction *findInteraction;
@property (nonatomic, getter=isFindInteractionEnabled) BOOL findInteractionEnabled; // ivar: _findInteractionEnabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *highlightedSelections;
@property (nonatomic, getter=isInMarkupMode) BOOL inMarkupMode; // ivar: _inMarkupMode
@property (nonatomic) NSInteger interpolationQuality;
@property (readonly, nonatomic) BOOL isUsingPageViewController;
@property (nonatomic) CGFloat maxScaleFactor;
@property (nonatomic) CGFloat minScaleFactor;
@property (nonatomic) UIEdgeInsets pageBreakMargins;
@property (weak, nonatomic) NSObject<PDFPageOverlayViewProvider> *pageOverlayViewProvider; // ivar: _pageOverlayViewProvider
@property (nonatomic, setter=enablePageShadows:) BOOL pageShadowsEnabled;
@property (nonatomic) CGFloat scaleFactor;
@property (readonly, nonatomic) CGFloat scaleFactorForSizeToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visiblePages;


+(void)EnableAnnotationKit;
-(BOOL)PDFKitHandleBackTabInTextWidget:(id)arg0 ;
-(BOOL)PDFKitHandleTabInTextWidget:(id)arg0 ;
-(BOOL)_shouldHandleAnnotationAtLocation:(struct CGPoint )arg0 forGestureType:(NSUInteger)arg1 ;
-(BOOL)akAnnotationEditingEnabled;
-(BOOL)backgroundImagesEnabled;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)displaysBookmarksForPages;
-(BOOL)flipsTileContents;
-(BOOL)focusOnColumnAtPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleBackTabInDetectedFormField;
-(BOOL)handleBackTabInTextWidget:(id)arg0 ;
-(BOOL)handleTabInDetectedFormField;
-(BOOL)handleTabInTextWidget:(id)arg0 ;
-(BOOL)isAnnotationEditingEnabled;
-(BOOL)isDrawingAccessibilityNodeType:(int)arg0 ;
-(BOOL)isInFormFillingMode;
-(BOOL)isOverLinkAnnotation:(struct CGPoint )arg0 ;
-(BOOL)isRectVisible:(struct CGRect )arg0 onPage:(id)arg1 ;
-(BOOL)isUpdatingSelectionMarkups;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAntiAlias;
-(BOOL)showsScrollIndicators;
-(BOOL)userDidEnterPassword:(id)arg0 forPasswordViewController:(id)arg1 ;
-(CGFloat)PDFViewWillChangeScaleFactor:(id)arg0 toScale:(CGFloat)arg1 ;
-(CGFloat)_pageViewHeight:(id)arg0 ;
-(CGFloat)_unboundAutoScaleFactorForPage:(id)arg0 ;
-(CGFloat)_unboundAutoScaleFactorForPageWithSize:(struct CGSize )arg0 ;
-(CGFloat)autoScaleFactor;
-(CGFloat)autoScaleFactorForPage:(id)arg0 ;
-(CGFloat)autoScaleFactorForPageWithSize:(struct CGSize )arg0 ;
-(CGFloat)defaultGutterWidth;
-(CGFloat)extensionViewZoomScale;
-(CGFloat)greekingThreshold;
-(CGFloat)gutterWidth;
-(CGFloat)lineWidthThreshold;
-(CGFloat)mainScreenScale;
-(CGFloat)targetBackingScaleFactor;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)areaOfInterestForMouse:(id)arg0 ;
-(NSInteger)areaOfInterestForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)activeMarkupStyle;
-(NSUInteger)lastPageIndex;
-(NSUInteger)scrollViewMinimumNumberOfTouches;
-(NSUInteger)typeForGestureRecognizer:(id)arg0 ;
-(id)PDFLayout;
-(id)_dragItemsAtLocationInView:(struct CGPoint )arg0 ;
-(id)_getDocumentAKController;
-(id)activeAnnotation;
-(id)akRedoToolbarItem;
-(id)akToolbarView;
-(id)akToolbarViewItemTintColor;
-(id)akToolbarViewTintColor;
-(id)akUndoToolbarItem;
-(id)controller;
-(id)determineCurrentPage;
-(id)doubleTapGestureRecognizer;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)findInteraction:(id)arg0 sessionForView:(id)arg1 ;
-(id)hitTestForSubviewsOfView:(id)arg0 atLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)longPressGestureRecognizer;
-(id)nextPage;
-(id)pageColor;
-(id)pageForPoint:(struct CGPoint )arg0 nearest:(BOOL)arg1 ;
-(id)pageViewForPageAtIndex:(NSUInteger)arg0 ;
-(id)parentViewController;
-(id)pdfDocumentView;
-(id)pointerRegionForLocation:(struct CGPoint )arg0 ;
-(id)previousPage;
-(id)renderingProperties;
-(id)tapGestureRecognizer;
-(id)viewForPage:(id)arg0 ;
-(id)visibleAnnotations;
-(id)visiblePageViews;
-(struct CGAffineTransform )_transformFromPageToPageView:(id)arg0 ;
-(struct CGAffineTransform )_transformFromPageViewToPage:(id)arg0 ;
-(struct CGPoint )_scrollOriginForPageTopLeft:(id)arg0 ;
-(struct CGPoint )centerPointOfVisibleRectOfPage:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromPage:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toPage:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromPage:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toPage:(id)arg1 ;
-(struct CGRect )convertRectToRootView:(struct CGRect )arg0 fromPageLayer:(id)arg1 ;
-(struct CGRect )convertRootViewRect:(struct CGRect )arg0 toPageLayer:(id)arg1 ;
-(struct CGRect )extendedRootViewBounds;
-(struct CGRect )extensionViewBoundsInDocument;
-(struct CGRect )mainScreenBounds;
-(struct CGRect )normalizedPageBounds:(id)arg0 ;
-(struct CGRect )rootViewBounds;
-(struct CGRect )visibleRectForPageView:(id)arg0 ;
-(struct CGSize )pageViewSizeForPage:(id)arg0 ;
-(struct CGSize )pdfDocumentViewSize;
-(struct CGSize )rowSizeForPage:(id)arg0 ;
-(void)PDFViewWillClickOnLink:(id)arg0 withURL:(id)arg1 ;
-(void)_commonInit;
-(void)_doNotQueryScaleFactor;
-(void)_ensureOverlayViewController;
-(void)_findVisiblePages;
-(void)_goToPage:(id)arg0 animated:(BOOL)arg1 withBackgroundUpdate:(BOOL)arg2 ;
-(void)_internalSetAutoScaleFactor;
-(void)_internalSetScaleFactor:(CGFloat)arg0 ;
-(void)_lookup:(id)arg0 ;
-(void)_reflectNewPageOn;
-(void)_releaseDocument;
-(void)_releaseDocumentViewController;
-(void)_releaseScrollView;
-(void)_removePasswordView;
-(void)_resizeDisplayView:(id)arg0 ;
-(void)_scrollByPage:(BOOL)arg0 ;
-(void)_scrollHorizontalBy:(CGFloat)arg0 ;
-(void)_scrollVerticalBy:(CGFloat)arg0 ;
-(void)_selfDidResize:(id)arg0 ;
-(void)_setupDocumentViewController;
-(void)_setupPasswordView;
-(void)_setupScrollView;
-(void)_showFormFillingButton:(BOOL)arg0 ;
-(void)_syncPageIndexToScrollView;
-(void)_tileRefresh;
-(void)_updateAnnotations;
-(void)_updateBookmarksForPages;
-(void)_updateCurrentPageUsingViewCenter;
-(void)_updatePasswordView;
-(void)addGestureRecognizer:(id)arg0 ;
-(void)addMarkupWithStyle:(NSUInteger)arg0 fromSelection:(id)arg1 ;
-(void)annotationsChangedOnPage:(id)arg0 ;
-(void)beginPDFViewRotation;
-(void)callPageVisibilityDelegateMethod:(int)arg0 forPageView:(id)arg1 atPageIndex:(NSUInteger)arg2 ;
-(void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg0 forPageView:(id)arg1 atPageIndex:(NSUInteger)arg2 ;
-(void)clearSelection;
-(void)colorWidgetBackgrounds:(BOOL)arg0 ;
-(void)constrainedScrollToPoint:(struct CGPoint )arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)drawAccessibilityNodeType:(int)arg0 enableDrawing:(BOOL)arg1 ;
-(void)drawNodeBoundingBoxesType:(int)arg0 enableDrawing:(BOOL)arg1 ;
-(void)drawPage:(id)arg0 toContext:(struct CGContext *)arg1 ;
-(void)drawPagePost:(id)arg0 toContext:(struct CGContext *)arg1 ;
-(void)drawTextBoundingBoxesType:(int)arg0 enableDrawing:(BOOL)arg1 ;
-(void)enableBackgroundImages:(BOOL)arg0 ;
-(void)enablePageShadows:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endPDFViewRotation;
-(void)find:(id)arg0 ;
-(void)findInteraction:(id)arg0 didBeginFindSession:(id)arg1 ;
-(void)findInteraction:(id)arg0 didEndFindSession:(id)arg1 ;
-(void)findNext:(id)arg0 ;
-(void)findPrevious:(id)arg0 ;
-(void)forceTileRefresh;
-(void)gestureInit;
-(void)goBack:(id)arg0 ;
-(void)goForward:(id)arg0 ;
-(void)goToDestination:(id)arg0 ;
-(void)goToDestinationNoPush:(id)arg0 ;
-(void)goToFirstPage:(id)arg0 ;
-(void)goToLastPage:(id)arg0 ;
-(void)goToNextPage:(id)arg0 ;
-(void)goToPage:(id)arg0 ;
-(void)goToPage:(id)arg0 animated:(BOOL)arg1 ;
-(void)goToPageNoPush:(id)arg0 ;
-(void)goToPageNoPush:(id)arg0 animated:(BOOL)arg1 ;
-(void)goToPageWithoutBackgroundUpdate:(id)arg0 ;
-(void)goToPreviousPage:(id)arg0 ;
-(void)goToRect:(struct CGRect )arg0 onPage:(id)arg1 ;
-(void)goToSelection:(id)arg0 ;
-(void)handleGesture:(NSUInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 isIndirectTouch:(BOOL)arg4 ;
-(void)highlight:(id)arg0 ;
-(void)highlightDetectedFormFields:(BOOL)arg0 ;
-(void)highlightPDFRedactions:(BOOL)arg0 ;
-(void)hintScrollDirectionHorizontal:(NSUInteger)arg0 andVertical:(NSUInteger)arg1 ;
-(void)insertFormFieldAtDefaultLocation;
-(void)insertFormFieldAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 ;
-(void)interactWithAnnotation:(id)arg0 ;
-(void)internalForceAnnotationRefresh;
-(void)internalForceTileRefresh;
-(void)layoutDocumentView;
-(void)layoutSubviews;
-(void)pageViewControllerSaysPageChanged:(id)arg0 ;
-(void)pdfViewDidChangePage:(id)arg0 ;
-(void)pdfViewDidChangeScale:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performBeep;
-(void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
-(void)positionInternalViews:(id)arg0 ;
-(void)printActivePageText;
-(void)pushDestination:(id)arg0 ;
-(void)removeControlForAnnotation:(id)arg0 ;
-(void)removeFromSuperview;
-(void)scrollSelectionToVisible:(id)arg0 ;
-(void)scrollViewSaysPageMayHaveChanged:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setActiveAnnotation:(id)arg0 ;
-(void)setActiveMarkupStyle:(NSUInteger)arg0 ;
-(void)setAkAnnotationEditingEnabled:(BOOL)arg0 ;
-(void)setAkToolbarViewItemTintColor:(id)arg0 ;
-(void)setAkToolbarViewTintColor:(id)arg0 ;
-(void)setAnnotationEditingEnabled:(BOOL)arg0 ;
-(void)setBackgroundImage:(id)arg0 forPage:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setDisplaysBookmarksForPages:(BOOL)arg0 ;
-(void)setEnableTileUpdates:(BOOL)arg0 ;
-(void)setForcesTopAlignment:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setGreekingThreshold:(CGFloat)arg0 ;
-(void)setGutterWidth:(CGFloat)arg0 ;
-(void)setInFormFillingMode:(BOOL)arg0 ;
-(void)setIsUsingPDFExtensionView:(BOOL)arg0 ;
-(void)setLineWidthThreshold:(CGFloat)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNewPageVisibilityDelegate:(id)arg0 withOldDelegate:(id)arg1 ;
-(void)setPageColor:(id)arg0 ;
-(void)setScrollViewScrollEnabled:(BOOL)arg0 ;
-(void)setShouldAntiAlias:(BOOL)arg0 ;
-(void)setShowsScrollIndicators:(BOOL)arg0 ;
-(void)showMarkupMenu:(id)arg0 ;
-(void)signaturesController:(id)arg0 didSelectSignatureWithAnnotation:(id)arg1 ;
-(void)startEditingTextWidgetAnnotation:(id)arg0 ;
-(void)syncPageIndexToScrollView;
-(void)takeBackgroundColorFrom:(id)arg0 ;
-(void)takePasswordFrom:(id)arg0 ;
-(void)updateNodeBoundingBoxes;
-(void)updatePDFViewLayout:(struct CGRect )arg0 scrollViewFrame:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(void)usePageViewController:(BOOL)arg0 withViewOptions:(id)arg1 ;
-(void)visiblePagesChanged:(id)arg0 ;
-(void)windowDidBecomeKey:(id)arg0 ;
-(void)windowDidResignKey:(id)arg0 ;
-(void)zoomIn:(id)arg0 ;
-(void)zoomOut:(id)arg0 ;


@end


#endif