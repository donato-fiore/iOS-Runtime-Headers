// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBPDFVIEW_H
#define UIWEBPDFVIEW_H

@class NSMutableArray, UIPDFDocument, NSString, NSData, NSURL, NSArray, WebPDFViewPlaceholder;
@protocol UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, UIWebPDFViewDelegate;


#import "UIView.h"
#import "UITapGestureRecognizer.h"
#import "UIColor.h"

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate>

 {
    NSMutableArray *_backingLayerImageViews;
    *CGPDFDocument _cgPDFDocument;
    UIPDFDocument *_document;
    BOOL _hasScheduledCacheUpdate;
    BOOL _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _rotating;
    BOOL _zooming;
    CGPoint _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
}


@property (retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // ivar: backgroundColorForUnRenderedContent
@property (readonly, nonatomic) *CGPDFDocument cgPDFDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIPDFDocument *document;
@property (readonly, nonatomic) CGRect documentBounds; // ivar: _documentBounds
@property (readonly, nonatomic) NSData *documentData;
@property (retain, nonatomic) NSString *documentPassword; // ivar: documentPassword
@property (readonly, nonatomic) CGFloat documentScale; // ivar: _documentScale
@property (nonatomic) CGAffineTransform documentTransform; // ivar: _documentTransform
@property (retain, nonatomic) NSURL *documentURL; // ivar: _documentURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; // ivar: hideActivityIndicatorForUnRenderedContent
@property (nonatomic) BOOL hidePageViewsUntilReadyToRender; // ivar: hidePageViewsUntilReadyToRender
@property (nonatomic) NSInteger ignoreContentOffsetChanges; // ivar: _ignoreContentOffsetChanges
@property (nonatomic) CGFloat initialZoomScale; // ivar: _initialZoomScale
@property (retain, nonatomic) NSArray *pageMinYs; // ivar: _pageMinYs
@property (retain, nonatomic) NSArray *pageRects; // ivar: pageRects
@property (nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate; // ivar: _pdfDelegate
@property WebPDFViewPlaceholder *pdfPlaceHolderView; // ivar: pdfPlaceHolderView
@property (nonatomic) BOOL readyForSnapshot; // ivar: readyForSnapshot
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalPages;


+(void)initialize;
+(void)setAsPDFDocRepAndView;
-(BOOL)_checkIfDocumentNeedsUnlock;
-(BOOL)_hasPageRects;
-(BOOL)_tryToUnlockDocumentWithPassword:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSUInteger)_pageNumberForRect:(struct CGRect )arg0 ;
-(NSUInteger)firstVisiblePageNumber;
-(id)_addPageAtIndex:(NSUInteger)arg0 ;
-(id)_installViewAtIndex:(NSInteger)arg0 inFrame:(struct CGRect )arg1 ;
-(id)_pageWithSelection;
-(id)_selection;
-(id)imageForContactRect:(struct CGRect )arg0 onPageInViewRect:(struct CGRect )arg1 destinationRect:(struct CGRect )arg2 ;
-(id)initWithWebPDFViewPlaceholder:(id)arg0 ;
-(id)uiPDFDocument;
-(id)viewAtIndex:(NSInteger)arg0 ;
-(id)viewportView;
-(struct CGRect )_viewCachingBoundsInUIViewCoords;
-(struct CGRect )_viewportBoundsInUIVIewCoordsWithView:(id)arg0 ;
-(struct CGRect )_viewportBoundsInUIViewCoords;
-(void)_addSubViewsInViewCoordsBounds:(struct CGRect )arg0 force:(BOOL)arg1 ;
-(void)_define:(id)arg0 ;
-(void)_didLongPress:(id)arg0 inRect:(struct CGRect )arg1 atPoint:(struct CGPoint )arg2 linkingToPageIndex:(NSUInteger)arg3 ;
-(void)_didLongPress:(id)arg0 inRect:(struct CGRect )arg1 atPoint:(struct CGPoint )arg2 linkingToURL:(id)arg3 ;
-(void)_didScroll;
-(void)_didTouch:(id)arg0 inRect:(struct CGRect )arg1 atPoint:(struct CGPoint )arg2 linkingToPageIndex:(NSUInteger)arg3 ;
-(void)_didTouch:(id)arg0 inRect:(struct CGRect )arg1 atPoint:(struct CGPoint )arg2 linkingToURL:(id)arg3 ;
-(void)_recreateUIPDFDocument;
-(void)_removeBackgroundImageObserverIfNeeded:(id)arg0 ;
-(void)_removePageViewsNotInCurrentViewCoordsRect;
-(void)_removePageViewsNotInViewCoordsRect:(struct CGRect )arg0 ;
-(void)_scheduleRemovePageViewsNotInViewCoordsRect;
-(void)_share:(id)arg0 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)annotation:(id)arg0 isBeingPressedAtPoint:(struct CGPoint )arg1 controller:(id)arg2 ;
-(void)annotation:(id)arg0 wasTouchedAtPoint:(struct CGPoint )arg1 controller:(id)arg2 ;
-(void)clearSelection;
-(void)dealloc;
-(void)didCompleteLayout;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)didRotate:(id)arg0 ;
-(void)didZoom:(id)arg0 ;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForSnapshot:(BOOL)arg0 ;
-(void)resetZoom:(id)arg0 ;
-(void)snapshotComplete;
-(void)viewWillClose;
-(void)willRotate:(id)arg0 ;
-(void)willScroll:(id)arg0 ;
-(void)willZoom:(id)arg0 ;
-(void)zoom:(id)arg0 to:(struct CGRect )arg1 atPoint:(struct CGPoint )arg2 kind:(int)arg3 ;


@end


#endif