// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFDOCUMENTVIEW_H
#define PDFDOCUMENTVIEW_H

@class NSString;
@protocol PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, PDFTextInputDelegate;


#import "PDFTextInputView.h"
#import "PDFDocumentViewPrivate.h"

@interface PDFDocumentView : PDFTextInputView <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate, PDFTextInputDelegate>

 {
    PDFDocumentViewPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createPageView:(id)arg0 ;
-(id)backgroundImageForPage:(id)arg0 withQuality:(*int)arg1 ;
-(id)createPageViewForPageAtIndex:(NSUInteger)arg0 withFrame:(struct CGRect )arg1 ;
-(id)document;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPDFView:(id)arg0 ;
-(id)pageBackgroundManager;
-(id)pageViewForPageAtIndex:(NSUInteger)arg0 ;
-(id)pageViews;
-(id)pdfView;
-(struct CGPoint )_pixelAlignPageFrameOrigin:(struct CGRect )arg0 ;
-(struct CGSize )documentViewSize;
-(void)_reAddPageOverlaysStartingAtIndex:(NSUInteger)arg0 ;
-(void)_removePageOverlaysStartingAtIndex:(NSUInteger)arg0 ;
-(void)_shiftPagesAtIndex:(NSUInteger)arg0 downwards:(BOOL)arg1 ;
-(void)_updateVisibility;
-(void)_updateVisibilityDelegateForVisiblePageView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)changedBoundsForBoxNotification:(id)arg0 ;
-(void)dealloc;
-(void)didInsertPage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)didRemovePage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)didRotatePageNotification:(id)arg0 ;
-(void)didSwapPage:(id)arg0 atIndex:(NSUInteger)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)forceUpdateActivePageIndex:(NSUInteger)arg0 withMaxDuration:(CGFloat)arg1 ;
-(void)layoutDocumentView;
-(void)previewRotateShiftPages:(CGFloat)arg0 ;
-(void)recieveBackgroundImage:(id)arg0 atBackgroundQuality:(int)arg1 forPage:(id)arg2 ;
-(void)removePageViewForPageAtIndex:(NSUInteger)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)updateVisibility;
-(void)willForceUpdate;
-(void)willInsertPage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)willRemovePage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)willSwapPage:(id)arg0 atIndex:(NSUInteger)arg1 forPage:(id)arg2 atIndex:(NSUInteger)arg3 ;


@end


#endif