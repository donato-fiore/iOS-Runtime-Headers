// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFHOSTVIEWCONTROLLER_H
#define PDFHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PDFPasswordViewControllerDelegate, UIGestureRecognizerDelegate, UIDocumentPasswordViewDelegate;


#import "PDFHostViewControllerPrivate.h"

@interface PDFHostViewController : UIRemoteViewController <PDFPasswordViewControllerDelegate, UIGestureRecognizerDelegate, UIDocumentPasswordViewDelegate>

 {
    PDFHostViewControllerPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backgroundColor;
+(id)exportedInterface;
+(id)loadExtension:(id)arg0 ;
+(id)serviceViewControllerInterface;
// +(void)createHostView:(id)arg0 forExtensionIdentifier:(unk)arg1  ;
-(BOOL)_isTouchingLollipopAtLocationOfFirstTouch:(struct CGPoint )arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)userDidEnterPassword:(id)arg0 forPasswordViewController:(id)arg1 ;
-(CGFloat)_hostScrollViewZoomScale;
-(CGFloat)maximumZoomScale;
-(CGFloat)minimumZoomScale;
-(NSInteger)currentPageIndex;
-(NSInteger)pageCount;
-(NSUInteger)_typeForGestureRecognizer:(id)arg0 ;
-(id)pageNumberIndicator;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_insetBoundsInDocument;
-(struct CGSize )_documentViewSize;
-(struct UIEdgeInsets )_pdfViewInsets;
-(struct UIEdgeInsets )_pdfViewSafeAreaInsets;
-(void)_appendPasswordUI;
-(void)_endPDFViewRotationAnimated:(BOOL)arg0 withUpdate:(BOOL)arg1 ;
-(void)_gestureInit;
-(void)_pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 completion:(id)arg3 ;
-(void)_resetPDFHostViewControllerViews;
-(void)_setMaximumZoomScale:(CGFloat)arg0 ;
-(void)_setMinimumZoomScale:(CGFloat)arg0 ;
-(void)_setupExtensionInterruptionBlock;
-(void)beginPDFViewRotation;
-(void)cancelFindString;
-(void)cancelFindStringWithHighlightsCleared:(BOOL)arg0 ;
-(void)clearSearchHighlights;
-(void)completePointerInteractionRegionForRequest:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)didCopyData:(id)arg0 ;
-(void)didCopyString:(id)arg0 ;
-(void)didLongPressPageIndex:(NSInteger)arg0 atLocation:(struct CGPoint )arg1 withAnnotationRect:(struct CGRect )arg2 ;
-(void)didLongPressURL:(id)arg0 atLocation:(struct CGPoint )arg1 withAnnotationRect:(struct CGRect )arg2 ;
-(void)documentIsLocked:(BOOL)arg0 ;
-(void)endPDFViewRotation;
-(void)endPDFViewRotationWithContentInset:(struct UIEdgeInsets )arg0 ;
-(void)findString:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)findStringUpdate:(NSUInteger)arg0 done:(BOOL)arg1 ;
-(void)focusOnSearchResultAtIndex:(NSUInteger)arg0 ;
-(void)goToDestination:(NSInteger)arg0 point:(struct CGPoint )arg1 ;
-(void)goToPageIndex:(NSInteger)arg0 ;
-(void)goToPageIndex:(NSInteger)arg0 pageFrame:(struct CGRect )arg1 ;
-(void)goToPageIndex:(NSInteger)arg0 withViewFrustum:(struct CGRect )arg1 ;
-(void)goToURL:(id)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)handleGesture:(id)arg0 ;
-(void)killExtensionProcess;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)recievedSnapshotViewRect:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDocumentData:(id)arg0 withScrollView:(id)arg1 ;
-(void)setHasSelection:(BOOL)arg0 ;
-(void)setTextSelectionPoints:(struct CGPoint )arg0 right:(struct CGPoint )arg1 ;
-(void)setup;
-(void)setupDocumentViewSize:(struct CGSize )arg0 ;
-(void)showSelectionRect:(struct CGRect )arg0 ;
-(void)showTextSelectionMenu:(BOOL)arg0 selectionRect:(struct CGRect )arg1 ;
-(void)snapshotViewRect:(struct CGRect )arg0 snapshotWidth:(id)arg1 afterScreenUpdates:(BOOL)arg2 withResult:(id)arg3 ;
-(void)updateAutoScaleFactor;
-(void)updateCurrentPageIndex:(NSInteger)arg0 ;
-(void)updateDocumentIsLocked:(BOOL)arg0 ;
-(void)updateDocumentViewSize;
-(void)updatePDFViewLayout;
-(void)updatePageCount:(NSInteger)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)zoomToRect:(struct CGRect )arg0 ;


@end


#endif