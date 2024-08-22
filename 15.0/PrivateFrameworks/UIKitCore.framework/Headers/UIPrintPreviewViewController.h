// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTPREVIEWVIEWCONTROLLER_H
#define UIPRINTPREVIEWVIEWCONTROLLER_H

@class NSOperationQueue, NSArray, NSMutableArray, NSString, UIDocumentInteractionController, NSURL;
@protocol UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegateFlowLayout;


#import "UICollectionViewController.h"
#import "UIPrintPreviewInfo.h"
#import "UIImageView.h"
#import "UIView.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintPreviewViewController : UICollectionViewController <UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegateFlowLayout>

 {
    *CGPDFDocument _pdfDocRef;
    CGSize _pageSize;
    CGFloat _minPageWith;
    NSOperationQueue *_pageRendererQueue;
}


@property (retain) NSArray *_arrayOfCellSizes; // ivar: __arrayOfCellSizes
@property (retain) NSMutableArray *_arrayOfPageImages; // ivar: __arrayOfPageImages
@property NSInteger _numPages; // ivar: __numPages
@property (retain) UIPrintPreviewInfo *_previewInfo; // ivar: __previewInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIDocumentInteractionController *documentInteractionController; // ivar: _documentInteractionController
@property (readonly) NSUInteger hash;
@property (retain) NSURL *pdfURL; // ivar: _pdfURL
@property (retain) UIImageView *pinchAnimationView; // ivar: _pinchAnimationView
@property (retain) UIView *pinchAnimationWhiteBackgroundView; // ivar: _pinchAnimationWhiteBackgroundView
@property (retain) UIImageView *pinchGestureBeginningPageImageView; // ivar: _pinchGestureBeginningPageImageView
@property CGPoint pinchGestureLastPoint; // ivar: _pinchGestureLastPoint
@property CGFloat pinchGestureLastScale; // ivar: _pinchGestureLastScale
@property BOOL presentingDocumentInteractionController; // ivar: _presentingDocumentInteractionController
@property (retain) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain) NSURL *quickLookPDFURL; // ivar: _quickLookPDFURL
@property (retain) NSURL *sharePDFFileURL; // ivar: _sharePDFFileURL
@property (readonly) Class superclass;
@property (retain) NSArray *updatedvisibleItems; // ivar: _updatedvisibleItems
@property BOOL visibleItemsUpdated; // ivar: _visibleItemsUpdated


-(BOOL)canAddAllPages:(id)arg0 ;
-(BOOL)canAddPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canModifyPageRange;
-(BOOL)canRemovePage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canSetEndPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canSetStartPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(BOOL)canShowMenuBar;
-(BOOL)pageIndexIsInRange:(NSInteger)arg0 ;
-(BOOL)visibleItemsUpdateNeeded;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_newTempURLForPreviewing;
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
-(struct CGSize )itemViewSize;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(struct _NSRange )previewVisibleItemsRange;
-(void)_mainQueue_reloadItemAtIndex:(id)arg0 ;
-(void)_removeQuickLookPDFURL;
-(void)addAllPages:(id)arg0 ;
-(void)addPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)animateCellAndPresentDocumentInteractionController;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)documentInteractionController:(id)arg0 didEndSendingToApplication:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg0 ;
-(void)fetchPageInBackground:(NSUInteger)arg0 reloadWhenDone:(BOOL)arg1 ;
-(void)handlePinch:(id)arg0 ;
-(void)pageBadgeTapped:(NSInteger)arg0 ;
-(void)pageRangeUpdated;
-(void)previewPDF;
-(void)reloadVisibleItems:(BOOL)arg0 ;
-(void)removePage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)resetAllPageImages;
-(void)resetCellSizesArrayCompletionHandler:(id)arg0 ;
-(void)resetPrintPreview;
-(void)setEndPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)setScrollDirection:(NSInteger)arg0 ;
-(void)setStartPage:(id)arg0 forPageIndex:(NSInteger)arg1 ;
-(void)updateHeaderFooterSizes;
-(void)updateLayoutWithPdfUpdate:(BOOL)arg0 ;
-(void)updatePageRange:(id)arg0 ;
-(void)updatePdfURL:(id)arg0 options:(id)arg1 completed:(BOOL)arg2 ;
-(void)updatePrintPreviewInfo:(id)arg0 ;
-(void)updateQuicklookPDF;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif