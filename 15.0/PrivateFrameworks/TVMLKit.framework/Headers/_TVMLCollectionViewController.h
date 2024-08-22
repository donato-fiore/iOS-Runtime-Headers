// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMLCOLLECTIONVIEWCONTROLLER_H
#define _TVMLCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, IKCollectionElement, UICollectionView, NSString, IKViewElement, NSDictionary, NSIndexPath, NSArray;
@protocol TVAppTemplateImpressionable, _TVCollectionViewing, _TVCollectionViewDelegate, UICollectionViewDataSource, TVPreviewInteractionController;


#import "_TVNeedsMoreContentEvaluator.h"
#import "_TVCollectionWrappingView.h"
#import "_TVShadowViewElement.h"

@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, _TVCollectionViewing, _TVCollectionViewDelegate, UICollectionViewDataSource>

 {
    BOOL _didAppear;
    BOOL _didUpdateFocus;
    BOOL _isPreparingCollectionUpdates;
    CGFloat _impressionThreshold;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    id<TVPreviewInteractionController> *_previewInteractionController;
}


@property (readonly, nonatomic) TVCellMetrics cellMetrics; // ivar: _cellMetrics
@property (readonly, retain, nonatomic) IKCollectionElement *collectionElement; // ivar: _collectionElement
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, retain, nonatomic) _TVCollectionWrappingView *collectionWrappingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) IKViewElement *footerElement; // ivar: _footerElement
@property (retain, nonatomic) UIViewController *footerViewController; // ivar: _footerViewController
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) IKViewElement *headerElement; // ivar: _headerElement
@property (retain, nonatomic) UIViewController *headerViewController; // ivar: _headerViewController
@property (nonatomic, getter=isIndexDisplayEnabled) BOOL indexDisplayEnabled; // ivar: _indexDisplayEnabled
@property (copy, nonatomic) NSDictionary *indexPathsByIndexTitle; // ivar: _indexPathsByIndexTitle
@property (copy, nonatomic) NSIndexPath *lastFocusedIndexPath; // ivar: _lastFocusedIndexPath
@property (retain, nonatomic) _TVShadowViewElement *shadowViewElement; // ivar: _shadowViewElement
@property (nonatomic) TVShowcaseConfig showcaseConfig; // ivar: _showcaseConfig
@property (copy, nonatomic) NSArray *sortedIndexTitles; // ivar: _sortedIndexTitles
@property (readonly) Class superclass;


+(id)_shadowViewElementForCollectionElement:(id)arg0 ;
+(id)footerElementFromCollectionElement:(id)arg0 ;
+(id)headerElementFromCollectionElement:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHandleLongPressForItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldHeaderFloatByDefault;
-(Class)cellClassForElement:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)preferredScrollPosition;
-(id)_closestIndexPathToIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 indexPathForIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)indexTitlesForCollectionView:(id)arg0 ;
-(id)init;
-(id)preferredFocusEnvironments;
-(struct CGSize )expectedCellSizeForElement:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_cancelImpressionsUpdate;
-(void)_doUpdateViewLayoutAnimated:(BOOL)arg0 relayout:(BOOL)arg1 ;
-(void)_recordImpressionsForVisibleView;
-(void)_registerCellClassesInCollectionView:(id)arg0 ;
-(void)_registerPreviewInteractionController;
-(void)_updateFooterView;
-(void)_updateHeaderView;
-(void)_updateImpressions;
-(void)adjustContentOffsetToDisplayIndexPath:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didReceiveLongPressForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didReceivePhysicalPlayForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateCollectionViewByNeedingReload:(BOOL)arg0 focusUpdate:(BOOL)arg1 ;
-(void)dispatchEvent:(id)arg0 forItemAtIndexPath:(id)arg1 completionBlock:(id)arg2 ;
-(void)loadView;
-(void)preloadCellsInRect:(struct CGRect )arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)tv_updateViewLayout;
-(void)updateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)updateSupplementaryViewsForSectionAtOldIndex:(NSInteger)arg0 oldElement:(id)arg1 withNewIndex:(NSInteger)arg2 newElement:(id)arg3 requiresReload:(*BOOL)arg4 requiresRelayout:(*BOOL)arg5 ;
-(void)updateVisibleCell:(id)arg0 atIndexPath:(id)arg1 withElement:(id)arg2 ;
-(void)updateWithViewElement:(id)arg0 cellMetrics:(struct TVCellMetrics )arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif