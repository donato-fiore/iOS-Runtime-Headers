// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPDFCONTENTVIEWCONTROLLER_H
#define MUPDFCONTENTVIEWCONTROLLER_H

@class NSLayoutConstraint, UIScrollView, NSString, UIView, PDFDocument, PDFView, NSArray, PDFThumbnailView, PDFPage;
@protocol PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver, PDFDocumentDelegate, PDFThumbnailContextMenuDelegate, MUContentViewControllerProtocol;


#import "MUContentViewController.h"
#import "MUPDFPageLabelView.h"

@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver, PDFDocumentDelegate, PDFThumbnailContextMenuDelegate, MUContentViewControllerProtocol>

 {
    MUPDFPageLabelView *_pageLabelView;
    NSInteger _thumbnailViewStyle;
    BOOL _allowsThumbnailViewPageReordering;
    NSLayoutConstraint *pageLabelViewTopConstraint;
    NSLayoutConstraint *pageLabelViewSideConstraint;
}


@property (nonatomic) BOOL allowsThumbnailViewPageReordering;
@property (nonatomic) UIEdgeInsets cachedThumnailViewInsets; // ivar: _cachedThumnailViewInsets
@property (nonatomic) BOOL centersIgnoringContentInsets;
@property BOOL constraintsAreHorizontal; // ivar: _constraintsAreHorizontal
@property (readonly, nonatomic) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultToolTag;
@property (readonly, copy) NSString *description;
@property BOOL didSetup; // ivar: _didSetup
@property (readonly, nonatomic) NSString *documentUnlockedWithPassword;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) BOOL fixedThumbnailView; // ivar: _fixedThumbnailView
@property (nonatomic) BOOL forcesPDFViewTopAlignment; // ivar: _forcesPDFViewTopAlignment
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (nonatomic) BOOL navigationModeHorizontal; // ivar: _navigationModeHorizontal
@property (readonly) NSUInteger pageCount;
@property (readonly, weak, nonatomic) UIView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument; // ivar: _pdfDocument
@property (retain) PDFView *pdfView; // ivar: _pdfView
@property (retain) NSLayoutConstraint *pdfViewLeadingConstraint; // ivar: _pdfViewLeadingConstraint
@property (retain) UIView *scrollerBackgroundView; // ivar: _scrollerBackgroundView
@property (nonatomic) BOOL showsThumbnailView; // ivar: _showsThumbnailView
@property (retain) NSArray *sourceContentReplacedAnnotationMaps; // ivar: _sourceContentReplacedAnnotationMaps
@property (readonly) Class superclass;
@property (retain) PDFThumbnailView *thumbnailView; // ivar: _thumbnailView
@property (retain) UIView *thumbnailViewHolder; // ivar: _thumbnailViewHolder
@property (retain) NSArray *thumbnailViewHolderConstraints; // ivar: _thumbnailViewHolderConstraints
@property (retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint; // ivar: _thumbnailViewHolderRevealConstraint
@property (retain) NSLayoutConstraint *thumbnailViewHolderWidthConstraint; // ivar: _thumbnailViewHolderWidthConstraint
@property (retain) NSLayoutConstraint *thumbnailViewLeadingConstraint; // ivar: _thumbnailViewLeadingConstraint
@property (nonatomic) NSInteger thumbnailViewStyle;
@property BOOL viewIsTransitioningBetweenSizes; // ivar: _viewIsTransitioningBetweenSizes
@property (weak) PDFPage *viewTransitionPageToCenter; // ivar: _viewTransitionPageToCenter
@property CGPoint viewTransitionPointOnPageToCenter; // ivar: _viewTransitionPointOnPageToCenter
@property BOOL viewTransitionPreviousAutoscalingState; // ivar: _viewTransitionPreviousAutoscalingState
@property CGFloat viewTransitionPreviousScale; // ivar: _viewTransitionPreviousScale


-(BOOL)PDFView:(id)arg0 shouldHandleLink:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_updateCachedThumbnailViewInsetsDidChangeLeftOrRight;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isTouchInThumbnailView:(id)arg0 ;
-(BOOL)shouldShowAnnotationsOfType:(id)arg0 ;
-(id)contentSnapshot;
-(id)controller:(id)arg0 willSetToolbarItems:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 ;
-(id)initWithPDFDocument:(id)arg0 delegate:(id)arg1 ;
-(id)menuElementsForPage:(id)arg0 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg0 ;
-(struct CGAffineTransform )_compensatingAffineTransformForPage:(id)arg0 ;
-(struct CGRect )visibleContentRect;
-(struct CGRect )visibleContentRectInCoordinateSpace:(id)arg0 ;
-(struct CGSize )_medianSizeForCurrentDocumentInPDFViewWithGetter:(id)arg0 ;
-(struct CGSize )contentSize;
-(struct CGSize )idealContentSizeForScreenSize:(struct CGSize )arg0 windowDecorationSize:(struct CGSize )arg1 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_createPDFView;
-(void)_prepareToRotate;
-(void)_recoverFromRotation;
-(void)_removePageLabelViewConstraints;
-(void)_teardownPDFViewIfNecessary;
-(void)_updateMinMaxZoomFactor;
-(void)_updatePDFViewDisplayMode;
-(void)_updatePageNumberOverlayToPage:(NSUInteger)arg0 animate:(BOOL)arg1 ;
-(void)_updateThumbnailViewAppearance;
-(void)_updateThumbnailViewHolderBackgroundColor;
-(void)_updateThumbnailViewHolderConstraints;
-(void)_updateThumbnailViewHolderVisibility;
-(void)_userChangedScrollViewMagnificationNotification:(id)arg0 ;
-(void)annotationController:(id)arg0 detectedEditOfType:(NSUInteger)arg1 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg0 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg0 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg0 ;
-(void)controllerWillShowSignatureManagerView:(id)arg0 ;
-(void)dealloc;
-(void)editCheckpointReachedForAnnotationController:(id)arg0 ;
-(void)highlight:(id)arg0 ;
-(void)loadContentWithCompletionBlock:(id)arg0 ;
-(void)pdfDocumentDidUnlock:(id)arg0 ;
-(void)pdfViewDidChangeCurrentPage:(id)arg0 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg0 ;
-(void)positionSketchOverlay:(id)arg0 forAnnotationController:(id)arg1 ;
-(void)removeThumbnailViewHolderConstraints;
-(void)resetPageLabelFadeOutTimer;
-(void)setup;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)uninstallAllAnnotationControllerOverlays;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif