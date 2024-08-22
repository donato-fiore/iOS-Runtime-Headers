// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICAROUSELPAGESECTION_H
#define SKUICAROUSELPAGESECTION_H

@class UICollectionView, NSArray, NSIndexPath, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate, OS_dispatch_source;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIProgressIndicatorViewElement.h"
#import "SKUICarouselPageComponent.h"

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_carouselCollectionView;
    NSInteger _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    CGSize _itemSize;
    CGFloat _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    BOOL _needsHeightCalculation;
    BOOL _needsReload;
    CGFloat _itemWidth;
    NSInteger _progressIndicatorCellIndex;
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;
    NSIndexPath *_reloadIndexPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUICarouselPageComponent *pageComponent;
@property (readonly) Class superclass;


-(BOOL)_indexPathIsProgressIndicator:(id)arg0 ;
-(BOOL)_isItemEnabledAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)_actualContentWidth;
-(CGFloat)_legacyItemSpacing;
-(Class)_cellClassForLockup:(id)arg0 ;
-(Class)_cellClassForViewElement:(id)arg0 ;
-(NSInteger)_currentPageIndex;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)defaultItemPinningStyle;
-(NSInteger)numberOfCells;
-(id)_carouselCollectionView;
-(id)_dequeueCellForLockup:(id)arg0 collectionView:(id)arg1 indexPath:(id)arg2 ;
-(id)_dequeueCellForViewElement:(id)arg0 collectionView:(id)arg1 indexPath:(id)arg2 ;
-(id)_missingItemLoader;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )_legacyItemSize;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_addImpressionForIndex:(NSInteger)arg0 toSession:(id)arg1 ;
-(void)_cancelCycleTimer;
-(void)_fireCycleTimer;
-(void)_loadMissingItemsFromIndex:(NSInteger)arg0 withReason:(NSInteger)arg1 ;
-(void)_reloadLegacySizing;
-(void)_reloadViewElementProperties;
-(void)_scrollToItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startCycleTimerIfNecessary;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionView:(id)arg0 carouselLayout:(id)arg1 willApplyLayoutAttributes:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif