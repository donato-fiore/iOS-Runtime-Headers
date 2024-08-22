// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIMAGECONTENTVIEWCONTROLLER_H
#define MUIMAGECONTENTVIEWCONTROLLER_H

@class UIView, UIScrollView, NSString, AKRectAnnotation, UIImageView, UITapGestureRecognizer, AKPageController, NSArray, UIImage;
@protocol AKControllerDelegateProtocol, UIScrollViewDelegate, MUContentViewControllerProtocol;


#import "MUContentViewController.h"

@interface MUImageContentViewController : MUContentViewController <AKControllerDelegateProtocol, UIScrollViewDelegate, MUContentViewControllerProtocol>

 {
    CGPoint _pointToCenterAfterRotation;
    BOOL _wasZoomToFit;
}


@property (nonatomic) BOOL centersIgnoringContentInsets; // ivar: _centersIgnoringContentInsets
@property (retain, nonatomic) UIView *combinedContentView; // ivar: _combinedContentView
@property (readonly, nonatomic) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultToolTag;
@property (readonly, copy) NSString *description;
@property BOOL didSetup; // ivar: _didSetup
@property CGFloat downsampledImageScale; // ivar: _downsampledImageScale
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (weak, nonatomic) AKRectAnnotation *editingAnnotaiton; // ivar: _editingAnnotaiton
@property (nonatomic) BOOL firstLoadZoomToFit; // ivar: _firstLoadZoomToFit
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL inDoubleTapZoom; // ivar: _inDoubleTapZoom
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (copy) id *loadCompletionBlock; // ivar: _loadCompletionBlock
@property (retain) UITapGestureRecognizer *localDoubleTapRecognizer; // ivar: _localDoubleTapRecognizer
@property CGFloat maxImageDimension; // ivar: _maxImageDimension
@property (nonatomic) BOOL navigationModeHorizontal;
@property (readonly, copy, nonatomic) NSString *originalImageDescription;
@property (weak, nonatomic) AKPageController *pageController; // ivar: _pageController
@property (readonly) NSUInteger pageCount;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (weak) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (nonatomic) BOOL showsThumbnailView;
@property (retain) id *sourceContent; // ivar: _sourceContent
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property CGSize sourceImagePixelSize; // ivar: _sourceImagePixelSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFormFill;
@property (readonly, nonatomic) BOOL supportsImageDescriptionEditing;
@property (retain, nonatomic) UIImage *tentativePlaceholderImage; // ivar: _tentativePlaceholderImage
@property (nonatomic) BOOL usePlaceholderAsDisplayImageIfPossible; // ivar: _usePlaceholderAsDisplayImageIfPossible
@property (nonatomic) BOOL zoomToFitRestoreValue; // ivar: _zoomToFitRestoreValue


-(BOOL)_canShowWhileLocked;
-(BOOL)_imageIsSize:(struct CGSize )arg0 isSmallerThanSize:(struct CGSize )arg1 ;
-(BOOL)_imageIsSmallerThanView;
-(BOOL)_placeholderCanBeUsedForBaseImageOfSize:(struct CGSize )arg0 ;
-(BOOL)controllerShouldDetectFormElements:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint )arg0 onOverlayAtPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect )arg0 onOverlayAtPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(CGFloat)_zoomToFitZoomFactor;
-(CGFloat)_zoomToFitZoomFactorInBounds:(struct CGRect )arg0 ;
-(CGFloat)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
-(CGFloat)modelBaseScaleFactorOfPageAtIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(NSUInteger)_pageIndexForAnnotation:(id)arg0 ;
-(id)contentSnapshot;
-(id)controller:(id)arg0 willSetToolbarItems:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSourceContent:(id)arg0 archivedDataModel:(id)arg1 delegate:(id)arg2 ;
-(id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg0 atScale:(CGFloat)arg1 inRect:(struct CGRect )arg2 onOverlayAtPageIndex:(NSUInteger)arg3 forAnnotationController:(id)arg4 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg0 ;
-(id)undoManagerForAnnotationController:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )_maximumContentOffset;
-(struct CGPoint )_minimumContentOffset;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromModelToOverlayWithPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromOverlayToModelWithPageIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(struct CGRect )_annotationRectInOverlay:(id)arg0 pageIndex:(NSUInteger)arg1 ;
-(struct CGRect )_zoomRectForScale:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;
-(struct CGRect )maxPageRectWithPageIndex:(NSUInteger)arg0 forAnnotationController:(id)arg1 ;
-(struct CGRect )visibleContentRect;
-(struct CGRect )visibleContentRectInCoordinateSpace:(id)arg0 ;
-(struct CGSize )contentSize;
-(struct CGSize )idealContentSizeForScreenSize:(struct CGSize )arg0 windowDecorationSize:(struct CGSize )arg1 ;
-(void)_adjustScrollViewForKeyboardNotification:(id)arg0 ;
-(void)_annotationDidEndEditing:(id)arg0 ;
-(void)_annotationWillBeginEditing:(id)arg0 ;
-(void)_doubleTap:(id)arg0 ;
-(void)_downsampleImageForDisplay:(struct CGImage *)arg0 fromImageSource:(struct CGImageSource *)arg1 withCompletionHandler:(id)arg2 ;
-(void)_installOverlayOfController:(id)arg0 forPageAtIndex:(NSUInteger)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_prepareToRotate;
-(void)_recoverFromRotation;
-(void)_setImage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_setupScrollViewForImageOfScaledSize:(struct CGSize )arg0 ;
-(void)_uninstallOverlayOfController:(id)arg0 forPageAtIndex:(NSUInteger)arg1 ;
-(void)_updateMinMaxZoomFactor;
-(void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect )arg0 endingFrame:(struct CGRect )arg1 annotationFrame:(struct CGRect )arg2 inOverlayView:(id)arg3 withAnimationDuration:(CGFloat)arg4 curve:(NSInteger)arg5 ;
-(void)controllerDidEnterToolMode:(id)arg0 ;
-(void)controllerDidExitToolMode:(id)arg0 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg0 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg0 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg0 ;
-(void)controllerWillShowSignatureManagerView:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)editCheckpointReachedForAnnotationController:(id)arg0 ;
-(void)editDetectedForAnnotationController:(id)arg0 ;
-(void)installDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(void)loadContentWithCompletionBlock:(id)arg0 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg0 ;
-(void)positionSketchOverlay:(id)arg0 forAnnotationController:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setup;
-(void)teardown;
-(void)uninstallAllAnnotationControllerOverlays;
-(void)uninstallDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 forAnnotationController:(id)arg2 ;
-(void)updateDrawingGestureRecognizer:(id)arg0 forPageAtIndex:(NSUInteger)arg1 withPriority:(BOOL)arg2 forAnnotationController:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif