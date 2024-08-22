// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFAKDOCUMENTADAPTOR_H
#define PDFAKDOCUMENTADAPTOR_H

@class AKController, AKToolbarView, AKRectAnnotation, AKModelController, UIView, NSString;
@protocol AKControllerDelegateProtocol, PKRulerHostingDelegate, PDFAKControllerDelegateProtocol;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"

@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol, PKRulerHostingDelegate>

 {
    BOOL _isTornDown;
    PDFDocument *_pdfDocument;
    PDFView *_pdfView;
    AKController *_akController;
    id<PDFAKControllerDelegateProtocol> *_pdfAKControllerDelegate;
    AKToolbarView *_akToolbarView;
    AKRectAnnotation *_editingAnnotaiton;
    TextAnnotationAnimationProperties _animationProperties;
    CGFloat _modelBaseScaleFactor;
}


@property (weak, nonatomic) NSObject<PDFAKControllerDelegateProtocol> *PDFAKControllerDelegate;
@property (readonly, nonatomic) AKModelController *akDocumentModelController;
@property (readonly, nonatomic) AKController *akMainController;
@property (readonly, nonatomic) UIView *akToolbarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *originalImageDescription;
@property (readonly, weak, nonatomic) PDFDocument *pdfDocument;
@property (weak, nonatomic) PDFView *pdfView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFormFill;
@property (readonly, nonatomic) BOOL supportsImageDescriptionEditing;


+(BOOL)isHandlingEditDetected;
+(void)setIsHandlingEditDetected:(BOOL)arg0 ;
-(BOOL)controllerShouldDetectFormElements:(id)arg0 ;
-(BOOL)handleBackTabInTextEditorForAnnotation:(id)arg0 forAnnotationController:(id)arg1 ;
-(BOOL)handleTabInTextEditorForAnnotation:(id)arg0 forAnnotationController:(id)arg1 ;
-(BOOL)hasHighlightableSelectionForAnnotationController:(id)arg0 ;
-(BOOL)rulerHostWantsSharedRuler;
-(BOOL)shouldAddTabControlsToTextEditorForAnnotation:(id)arg0 forAnnotationController:(id)arg1 ;
-(BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint )arg0 onOverlayAtPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect )arg0 onOverlayAtPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(CGFloat)modelBaseScaleFactorOfPageAtIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(NSUInteger)pageIndexForAnnotation:(id)arg0 ;
-(id)_scrollViewRecognizersForPageAtIndex:(NSUInteger)arg0 ;
-(id)controller:(id)arg0 willSetToolbarItems:(id)arg1 ;
-(id)initWithPDFDocument:(id)arg0 andView:(id)arg1 ;
-(id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg0 atScale:(CGFloat)arg1 inRect:(struct CGRect )arg2 onOverlayAtPageIndex:(NSUInteger)arg3 forAnnotationController:(id)arg4 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg0 ;
-(id)rulerHostingView;
-(id)undoManagerForAnnotationController:(id)arg0 ;
-(struct CGAffineTransform )_compensatingAffineTransformForPage:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromModelToOverlayWithPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromOverlayToModelWithPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(struct CGRect )maxPageRectWithPageIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(struct CGRect )positioningRectForCandidatePicker;
-(void)_adjustScrollViewWithAnimationProperties:(struct TextAnnotationAnimationProperties )arg0 delta:(CGFloat)arg1 ;
-(void)_delayedModelBaseScaleFactorCalculation;
-(void)_pdfDocumentDidUnlock:(id)arg0 ;
-(void)_pdfViewDidChangeScale:(id)arg0 ;
-(void)_pdfViewDidLayout:(id)arg0 ;
-(void)_resetAnimationProperties;
-(void)_scheduleDelayedModelBaseScaleFactorCalculation;
-(void)_teardown;
-(void)_updatePDFScrollViewMinimumNumberOfTouches;
-(void)adjustScrollViewForKeyboardNotification:(id)arg0 ;
-(void)annotationDidEndEditing:(id)arg0 ;
-(void)annotationWillBeginEditing:(id)arg0 ;
-(void)controllerDidEnterToolMode:(id)arg0 ;
-(void)controllerDidExitToolMode:(id)arg0 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg0 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg0 ;
-(void)controllerWillEnterToolMode:(id)arg0 ;
-(void)controllerWillExitToolMode:(id)arg0 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg0 ;
-(void)controllerWillShowSignatureManagerView:(id)arg0 ;
-(void)dealloc;
-(void)editCheckpointReachedForAnnotationController:(id)arg0 ;
-(void)editDetectedForAnnotationController:(id)arg0 ;
-(void)installDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pdfDocument:(id)arg0 didExchangePage:(id)arg1 atIndex:(NSUInteger)arg2 withPage:(id)arg3 atIndex:(NSUInteger)arg4 ;
-(void)pdfDocument:(id)arg0 didInsertPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)pdfDocument:(id)arg0 didRemovePage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)pdfDocument:(id)arg0 didReplacePagePlaceholder:(id)arg1 atIndex:(NSUInteger)arg2 withPage:(id)arg3 ;
-(void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)arg0 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg0 ;
-(void)positionSketchOverlay:(id)arg0 forAnnotationController:(id)arg1 ;
-(void)rotateLeft:(id)arg0 ;
-(void)rotateRight:(id)arg0 ;
-(void)teardown;
-(void)uninstallDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(void)updateDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 withPriority:(BOOL)arg2 forAnnotationController:(id)arg3 ;


@end


#endif