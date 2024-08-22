// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVLISTVIEWCONTROLLER_H
#define _TVLISTVIEWCONTROLLER_H

@class TVMLCollectionViewController, IKViewElement, UIViewController, NSDictionary, NSMutableArray, NSIndexPath, NSString;
@protocol _TVListViewCellDelegate, TVAppTemplateImpressionable, UICollectionViewDelegateFlowLayout, _TVListViewControllerDelegate;



@interface _TVListViewController : TVMLCollectionViewController <_TVListViewCellDelegate, TVAppTemplateImpressionable, UICollectionViewDelegateFlowLayout>

 {
    BOOL _configureForStackTemplate;
    BOOL _relatedContentElementValid;
    IKViewElement *_relatedContentElement;
    IKViewElement *_previewElement;
    BOOL _previewUpdated;
    UIViewController *_previewController;
    CGFloat _cachedCellWidth;
    NSDictionary *_cachedListItemLockupHeightsBySection;
    NSMutableArray *_cachedListChildViewControllers;
    NSIndexPath *_pendingPreviewIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    NSIndexPath *_secondCellIndexPath;
    BOOL _secondIndexPathFocused;
}


@property (nonatomic, getter=isAlwaysSoftFocusEnabled) BOOL alwaysSoftFocusEnabled; // ivar: _alwaysSoftFocusEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_shadowCollectionElementForCollectionElement:(id)arg0 ;
-(BOOL)_relatedElementIsGridAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHandleLongPressForItemAtIndexPath:(id)arg1 ;
-(BOOL)contentFlowsVertically;
-(BOOL)listCell:(id)arg0 shouldAppearSelectedForPreviouslyFocusedView:(id)arg1 ;
-(Class)cellClassForElement:(id)arg0 ;
-(id)_cachedViewControllerForElement:(id)arg0 ;
-(id)_previewControllerWithElement:(id)arg0 previewElement:(*id)arg1 ;
-(id)_relatedContentElementForIndexPath:(id)arg0 ;
-(id)_viewControllerForElement:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)makeCollectionViewWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_expectedCellSizeForElement:(id)arg0 inSectionIndex:(NSInteger)arg1 ;
-(struct CGSize )_expectedHeaderCellSizeForElement:(id)arg0 section:(NSInteger)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )expectedCellSizeForElement:(id)arg0 atIndexPath:(id)arg1 ;
-(struct UIEdgeInsets )_marginForHeaderCellForElement:(id)arg0 section:(NSInteger)arg1 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_delayedUpdatePreview;
-(void)_updateCellMetrics;
-(void)_updatedPreviewWithItemAtIndexPath:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didUpdateCollectionViewByNeedingReload:(BOOL)arg0 focusUpdate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)templateControllerDidUpdateFocusFromView:(id)arg0 ;
-(void)updateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)updateSupplementaryViewsForSectionAtOldIndex:(NSInteger)arg0 oldElement:(id)arg1 withNewIndex:(NSInteger)arg2 newElement:(id)arg3 requiresReload:(*BOOL)arg4 requiresRelayout:(*BOOL)arg5 ;
-(void)updateViewLayoutAnimated:(BOOL)arg0 relayout:(BOOL)arg1 ;
-(void)updateVisibleCell:(id)arg0 atIndexPath:(id)arg1 withElement:(id)arg2 ;
-(void)updateWithViewElement:(id)arg0 cellMetrics:(struct TVCellMetrics )arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif