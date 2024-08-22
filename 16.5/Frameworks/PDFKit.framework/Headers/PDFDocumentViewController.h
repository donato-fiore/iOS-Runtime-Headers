// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFDOCUMENTVIEWCONTROLLER_H
#define PDFDOCUMENTVIEWCONTROLLER_H

@class UIPageViewController, NSString;
@protocol PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate;


#import "PDFDocumentViewControllerPrivate.h"

@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>

 {
    PDFDocumentViewControllerPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasBackgroundImage;
-(CGFloat)autoScaleFactor;
-(CGFloat)maxScaleFactor;
-(CGFloat)minScaleFactor;
-(CGFloat)scaleFactor;
-(id)_pageViewController:(id)arg0 nextViewController:(int)arg1 forViewController:(id)arg2 ;
-(id)_pageViewControllerCreate:(NSUInteger)arg0 ;
-(id)backgroundImageForPage:(id)arg0 withQuality:(*int)arg1 ;
-(id)currentPage;
-(id)document;
-(id)findPageViewControllerForPageIndex:(NSInteger)arg0 ;
-(id)initWithPDFView:(id)arg0 pageIndex:(NSUInteger)arg1 navigationOrientation:(NSInteger)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4 ;
-(id)pageBackgroundManager;
-(id)pageForPoint:(struct CGPoint )arg0 nearest:(BOOL)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)pageViewForPageAtIndex:(NSUInteger)arg0 ;
-(id)pageViews;
-(id)scrollView;
-(id)selection;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromPDFPageViewController:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toPDFPageViewController:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromPage:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toPage:(id)arg1 ;
-(void)_documentChanged;
-(void)_documentWasUnlocked;
-(void)_loadDocument:(NSUInteger)arg0 ;
-(void)_setupDocument:(NSUInteger)arg0 ;
-(void)_updateCurrentPageViewController:(id)arg0 ;
-(void)dealloc;
-(void)didInsertPage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)didRemovePage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)forceUpdateActivePageIndex:(NSUInteger)arg0 withMaxDuration:(CGFloat)arg1 ;
-(void)goToPage:(id)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)recieveBackgroundImage:(id)arg0 atBackgroundQuality:(int)arg1 forPage:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setAutoScales:(BOOL)arg0 ;
-(void)setDisplaysRTL:(BOOL)arg0 ;
-(void)setMinScaleFactor:(CGFloat)arg0 withMaxScaleFactor:(CGFloat)arg1 ;
-(void)setScaleFactor:(CGFloat)arg0 ;
-(void)setScrollViewScrollEnabled:(BOOL)arg0 ;
-(void)setSelection:(id)arg0 ;
-(void)updateScrollViews;
-(void)viewWillLayoutSubviews;
-(void)willForceUpdate;


@end


#endif