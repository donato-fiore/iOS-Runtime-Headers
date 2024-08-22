// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERDOCUMENTCOLLECTIONVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERDOCUMENTCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString, UIActivityIndicatorView, UIView, UIScrollView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController, UIViewControllerPreviewing, _UIDocumentPickerServiceViewController;


#import "_UIDocumentPickerFlowLayout.h"
#import "_UIDocumentPickerContainerModel.h"
#import "_UIDocumentPickerSortOrderView.h"
#import "_UIDocumentPickerTableLayout.h"

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController>

 {
    BOOL _editing;
    id<UIViewControllerPreviewing> *_viewControllerPreviewContext;
}


@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (retain, nonatomic) _UIDocumentPickerFlowLayout *gridLayout; // ivar: _gridLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property (retain, nonatomic) UIActivityIndicatorView *initialActivityView; // ivar: _initialActivityView
@property (retain, nonatomic) _UIDocumentPickerContainerModel *model; // ivar: _model
@property (copy, nonatomic) NSArray *modelObjects; // ivar: _modelObjects
@property (nonatomic) BOOL monitoring; // ivar: _monitoring
@property (retain, nonatomic) UIView *pinnedHeaderView; // ivar: _pinnedHeaderView
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<_UIDocumentPickerServiceViewController> *serviceViewController; // ivar: _serviceViewController
@property (nonatomic) BOOL shouldHideSortBar; // ivar: _shouldHideSortBar
@property (retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // ivar: _sortView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsActions;
@property (retain, nonatomic) _UIDocumentPickerTableLayout *tableLayout; // ivar: _tableLayout
@property (nonatomic) BOOL updatesMayAnimate; // ivar: _updatesMayAnimate


-(BOOL)_smallCells;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)collectionView:(id)arg0 tableLayout:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 tableLayout:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(id)actionViewForLocation:(struct CGPoint )arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 tableLayout:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2 ;
-(id)initWithModel:(id)arg0 ;
-(id)itemForLocation:(struct CGPoint )arg0 ;
-(id)previewActionItemsForItem:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(void)_dynamicTypeSizeChanged:(id)arg0 ;
-(void)_showMoreOptionsForRow:(id)arg0 view:(id)arg1 ;
-(void)_unlockAnimations;
-(void)_updateIconSpacing;
-(void)_updateRowHeight;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 tableLayout:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)containersChangedWithSnapshot:(id)arg0 differences:(id)arg1 ;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)ensureSortViewInvisible;
-(void)modelChanged:(id)arg0 ;
-(void)performAction:(NSInteger)arg0 forRow:(id)arg1 view:(id)arg2 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)scrollSortViewToVisible;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentSizeAdjustment:(CGFloat)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateContentInset;
-(void)updatePinnedHeader;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif