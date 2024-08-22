// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFEXTENSIONVIEWCONTROLLER_H
#define PDFEXTENSIONVIEWCONTROLLER_H

@class UIViewController;


#import "PDFExtensionViewControllerPrivate.h"

@interface PDFExtensionViewController : UIViewController {
    PDFExtensionViewControllerPrivate *_private;
}




+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)init;
-(void)_annotationHitNotification:(id)arg0 ;
-(void)_annotationLongPressNotification:(id)arg0 ;
-(void)_goToDestination:(id)arg0 ;
-(void)_goToPage:(id)arg0 ;
-(void)_pageChangedNotification:(id)arg0 ;
-(void)_pdfViewZoomToRect:(id)arg0 ;
-(void)_selectionChangedNotification:(id)arg0 ;
-(void)_selectionPointsChangedNotification:(id)arg0 ;
-(void)_setupDocumentViewSize;
-(void)_textSelectionDidCopyDataNotification:(id)arg0 ;
-(void)_textSelectionDidCopyStringNotification:(id)arg0 ;
-(void)_textSelectionShowTextSelectionMenu:(id)arg0 ;
-(void)_updateDocumentIsLocked;
-(void)_updatePageCount;
-(void)_updateTextSelectionPoints;
-(void)_zoomToRect:(struct CGRect )arg0 ;
-(void)cancelFindString;
-(void)cancelFindStringWithHighlightsCleared:(BOOL)arg0 ;
-(void)clearSearchHighlights;
-(void)copy;
-(void)didMatchString:(id)arg0 ;
-(void)documentDidEndDocumentFind:(id)arg0 ;
-(void)findString:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)focusOnSearchResultAtIndex:(NSUInteger)arg0 ;
-(void)goToPageIndex:(NSInteger)arg0 ;
-(void)handleGesture:(NSUInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 isIndirectTouch:(BOOL)arg4 ;
-(void)pointerRegionForLocation:(struct CGPoint )arg0 ;
-(void)selectAll;
-(void)setDocumentData:(id)arg0 ;
-(void)setMaximumZoomScale:(CGFloat)arg0 ;
-(void)setMinimumZoomScale:(CGFloat)arg0 ;
-(void)setupPDFView;
-(void)snapshotViewRect:(struct CGRect )arg0 forWidth:(CGFloat)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)unlockWithPassword:(id)arg0 ;
-(void)updatePDFViewLayout:(struct CGRect )arg0 scrollViewFrame:(struct CGRect )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 zoomScale:(CGFloat)arg3 ;
-(void)viewDidLoad;


@end


#endif