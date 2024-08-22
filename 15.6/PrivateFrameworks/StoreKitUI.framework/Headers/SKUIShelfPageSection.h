// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISHELFPAGESECTION_H
#define SKUISHELFPAGESECTION_H

@class NSArray, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection, SKUIScrollViewDelegateObserver;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIShelfViewElement.h"
#import "SKUIViewElementSlideshowController.h"
#import "SKUIShelfPageSectionConfiguration.h"
#import "SKUIShelfPageComponent.h"

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSInteger _lastNeedsMoreCount;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
}


@property (readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIShelfPageComponent *pageComponent;
@property (weak, nonatomic) NSObject<SKUIScrollViewDelegateObserver> *scrollViewDelegateObserver; // ivar: _scrollViewDelegateObserver
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfCells;
-(id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 configuration:(id)arg1 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)shelfPageSectionConfiguration:(id)arg0 viewElementAtIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_performDefaultSelectActionForEffectiveViewElement:(id)arg0 ;
-(void)_reloadViewElementProperties;
-(void)_setContext:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionView:(id)arg0 didConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 willApplyLayoutAttributes:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)deselectItemsAnimated:(BOOL)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg0 completionBlock:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setTopSection:(BOOL)arg0 ;
-(void)viewElementSlideshowWillDismiss:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif