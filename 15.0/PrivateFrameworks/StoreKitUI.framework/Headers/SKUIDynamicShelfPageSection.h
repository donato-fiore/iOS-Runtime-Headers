// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIDYNAMICSHELFPAGESECTION_H
#define SKUIDYNAMICSHELFPAGESECTION_H

@class SKUIShelfViewElement<SKUIDynamicShelfViewElement>, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection, SKUIEntityProviding, SKUIScrollViewDelegateObserver;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIDynamicPageSectionIndexMapper.h"
#import "SKUIViewElementTextLayoutCache.h"
#import "SKUIShelfPageSectionConfiguration.h"
#import "SKUIShelfPageComponent.h"

@interface SKUIDynamicShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    SKUIShelfViewElement<SKUIDynamicShelfViewElement> *_dynamicShelfViewElement;
    id<SKUIEntityProviding> *_entityProvider;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
}


@property (readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIShelfPageComponent *pageComponent;
@property (weak, nonatomic) NSObject<SKUIScrollViewDelegateObserver> *scrollViewDelegateObserver; // ivar: _scrollViewDelegateObserver
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfCells;
-(id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg0 ;
-(id)_viewElementForEntityAtGlobalIndex:(NSInteger)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 configuration:(id)arg1 ;
-(id)relevantEntityProviders;
-(id)shelfPageSectionConfiguration:(id)arg0 viewElementAtIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_reloadViewElementProperties;
-(void)_setContext:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionView:(id)arg0 didConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 willApplyLayoutAttributes:(id)arg2 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)deselectItemsAnimated:(BOOL)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setSectionIndex:(NSInteger)arg0 ;
-(void)setTopSection:(BOOL)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willHideInContext:(id)arg0 ;


@end


#endif