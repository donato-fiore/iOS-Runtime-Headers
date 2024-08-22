// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPREVIEWVIEWCONTROLLER_H
#define UIPRINTPREVIEWVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSLayoutConstraint, NSString, UIDocumentInteractionController, UIButton, UIAction, NSURL, UIImageView, UIView, NSArray;
@protocol UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout;


#import "UIPrintPreviewPageFetcher.h"
#import "UIPrintPreviewInfo.h"
#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintPreviewViewController : UIViewController <UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>



@property (retain) UICollectionView *collectionView; // ivar: _collectionView
@property (retain) NSLayoutConstraint *collectionViewTopConstant; // ivar: _collectionViewTopConstant
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIDocumentInteractionController *documentInteractionController; // ivar: _documentInteractionController
@property (readonly) NSUInteger hash;
@property (retain) UIButton *layoutPopupButton; // ivar: _layoutPopupButton
@property (retain) NSLayoutConstraint *layoutPopupButtonTopConstraint; // ivar: _layoutPopupButtonTopConstraint
@property (retain) UIPrintPreviewPageFetcher *pageFetcher; // ivar: _pageFetcher
@property (retain) UIAction *pagesPopupAction; // ivar: _pagesPopupAction
@property (retain) NSURL *pdfURL; // ivar: _pdfURL
@property (retain) UIImageView *pinchAnimationView; // ivar: _pinchAnimationView
@property (retain) UIView *pinchAnimationWhiteBackgroundView; // ivar: _pinchAnimationWhiteBackgroundView
@property (retain) UIImageView *pinchGestureBeginningPageImageView; // ivar: _pinchGestureBeginningPageImageView
@property CGPoint pinchGestureLastPoint; // ivar: _pinchGestureLastPoint
@property CGFloat pinchGestureLastScale; // ivar: _pinchGestureLastScale
@property BOOL presentingDocumentInteractionController; // ivar: _presentingDocumentInteractionController
@property (retain) UIPrintPreviewInfo *previewInfo; // ivar: _previewInfo
@property NSInteger previewScrollDirection; // ivar: _previewScrollDirection
@property (retain) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain) NSURL *quickLookPDFURL; // ivar: _quickLookPDFURL
@property (retain) NSURL *sharePDFFileURL; // ivar: _sharePDFFileURL
@property (retain) UIAction *sheetsPopupAction; // ivar: _sheetsPopupAction
@property (readonly) Class superclass;
@property NSInteger totalPageCount; // ivar: _totalPageCount
@property (retain) NSArray *updatedvisibleItems; // ivar: _updatedvisibleItems
@property BOOL visibleItemsUpdated; // ivar: _visibleItemsUpdated


-(BOOL)canAddAllPages:(id)arg0 ;
-(BOOL)canAddPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canModifyPageRange;
-(BOOL)canRemovePage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canSetEndPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canSetStartPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canShowMenuBar;
-(BOOL)nUpActive;
-(BOOL)needRedrawWithNUp;
-(BOOL)pageIndexIsInRange:(NSInteger)arg0 ;
-(BOOL)visibleItemsUpdateNeeded;
-(CGFloat)_paperAspectRatio;
-(CGFloat)headerHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_tempURLForPreviewing;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg0 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg0 ;
-(id)getSharedPDFFileURL;
-(id)initWithScrollDirection:(NSInteger)arg0 printPanelViewController:(id)arg1 ;
-(id)previewCollectionView;
-(id)printPagePreviewActionItemsWithPageIndex:(NSInteger)arg0 ;
-(id)printPagePreviewViewControllerForItemAtPageIndex:(NSInteger)arg0 ;
-(id)sortedVisibleIndexPaths;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )previewSize;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(struct _NSRange )previewVisibleItemsRange;
-(void)_mainQueue_reloadItemAtIndex:(id)arg0 ;
-(void)addAllPages:(id)arg0 ;
-(void)addPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)animateCellAndPresentDocumentInteractionController;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)documentInteractionController:(id)arg0 didEndSendingToApplication:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg0 ;
-(void)gotoFirstPage:(id)arg0 ;
-(void)gotoLastPage:(id)arg0 ;
-(void)handlePinch:(id)arg0 ;
-(void)layoutPopupButtonChanged:(NSInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pageBadgeTapped:(NSInteger)arg0 ;
-(void)pageRangeUpdated;
-(void)previewPDF;
-(void)reloadVisibleItems:(BOOL)arg0 ;
-(void)removePage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)resetPrintPreview;
-(void)setEndPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)setScrollDirection:(NSInteger)arg0 ;
-(void)setStartPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)setupCollectionView;
-(void)setupLayoutControl;
-(void)setupPreivewPageFetcher;
-(void)updateHeaderFooterSizes;
-(void)updateLayout;
-(void)updateLayoutControl;
-(void)updateLayoutWithPdfUpdate:(BOOL)arg0 ;
-(void)updatePageRange:(id)arg0 ;
-(void)updatePdfURL:(id)arg0 options:(id)arg1 completed:(BOOL)arg2 ;
-(void)updatePrintPreviewInfo:(id)arg0 ;
-(void)updateQuicklookPDF;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif