// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFPAGEVIEWCONTROLLER_H
#define PDFPAGEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIScrollViewDelegate, PDFTextInputDelegate;


#import "PDFPageViewControllerPrivate.h"

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate>

 {
    PDFPageViewControllerPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)autoScaleFactor;
-(CGFloat)scaleFactor;
-(id)PDFPage;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pageView;
-(id)pdfView;
-(id)scrollView;
-(id)selection;
-(id)textInputView;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_buildPDFPageView;
-(void)_centerAlign;
-(void)_removePDFView;
-(void)_setupGestureRecognizerDependencies;
-(void)_updateAnnotations;
-(void)changedBoundsForBoxNotification:(id)arg0 ;
-(void)dealloc;
-(void)didRotatePageNotification:(id)arg0 ;
-(void)enforceAutoScaleFactor;
-(void)removeAKOverlay;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setAutoScales:(BOOL)arg0 ;
-(void)setBackgroundImage:(id)arg0 atBackgroundQuality:(int)arg1 ;
-(void)setMinScaleFactor:(CGFloat)arg0 withMaxScaleFactor:(CGFloat)arg1 ;
-(void)setPDFPage:(id)arg0 ;
-(void)setPDFView:(id)arg0 ;
-(void)setPageBreakMargins:(struct UIEdgeInsets )arg0 ;
-(void)setRenderingProperties:(id)arg0 ;
-(void)setScaleFactor:(CGFloat)arg0 ;
-(void)setSelection:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif