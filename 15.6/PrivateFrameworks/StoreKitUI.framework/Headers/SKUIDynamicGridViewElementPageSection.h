// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDYNAMICGRIDVIEWELEMENTPAGESECTION_H
#define SKUIDYNAMICGRIDVIEWELEMENTPAGESECTION_H

@class CPLRUDictionary, NSMutableDictionary, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting, SKUIEntityProviding;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIGridViewElementPageSectionConfiguration.h"
#import "SKUIDynamicPageSectionIndexMapper.h"
#import "SKUIViewElement.h"
#import "SKUIViewElementTextLayoutCache.h"
#import "_SKUIDynamicGridSizeCacheKey.h"
#import "SKUIMutableIntegerValue.h"
#import "SKUIGridComponent.h"

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    BOOL _editing;
    id<SKUIEntityProviding> *_entityProvider;
    CPLRUDictionary *_globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary *_globalIndexToTemplateViewElementCache;
    SKUIViewElement *_independentlySizedViewElement;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    NSInteger _minimumEntityCountForSections;
    _SKUIDynamicGridSizeCacheKey *_reusableSizeCacheKey;
    SKUIMutableIntegerValue *_reusableGlobalIndexIntegerValue;
    *NSUInteger _sectionHeaderGlobalIndices;
    NSUInteger _numberOfSections;
    BOOL _showsSectionHeaders;
    NSMutableDictionary *_sizeCacheKeyToCachedCellSize;
    NSMutableDictionary *_templateViewElementsCache;
    BOOL _usesSizingEntityValueProvider;
    ? _entityProviderFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;


-(BOOL)_updateShowsSectionHeaders;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(NSInteger)_entityGlobalIndexForGlobalIndex:(NSInteger)arg0 returningSection:(*NSInteger)arg1 ;
-(NSInteger)_globalIndexForEntityGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(NSInteger)pinningStyleForItemAtIndexPath:(id)arg0 ;
-(id)_dynamicGridViewElement;
-(id)_entityValueProviderForGlobalIndex:(NSInteger)arg0 sectionIndex:(*NSInteger)arg1 ;
-(id)_itemTemplateViewElementForEntityValueProvider:(id)arg0 ;
-(id)_sectionTemplateViewElementForEntityValueProvider:(id)arg0 ;
-(id)_templateViewElementsForType:(id)arg0 mode:(id)arg1 ;
-(id)_viewElementAtGlobalIndex:(NSInteger)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)gridViewElementPageSectionConfiguration:(id)arg0 viewElementForIndexPath:(id)arg1 ;
-(id)indexPathsForPinningItems;
-(id)initWithPageComponent:(id)arg0 ;
-(id)relevantEntityProviders;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg0 relativeSectionIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )pinningContentInsetForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_enumerateVisibleCellsUsingBlock:(id)arg0 ;
-(void)_invalidateCellSizeCache;
-(void)_reloadEntityProperties;
-(void)_reloadViewElementProperties;
-(void)_reloadVisibleCellsAnimated:(BOOL)arg0 ;
-(void)_resetLayoutProperties;
-(void)_setContext:(id)arg0 ;
-(void)_updateStyleProperties;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidConfirmButtonElement:(id)arg0 withClickInfo:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)deselectItemsAnimated:(BOOL)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)gridViewElementPageSectionConfiguration:(id)arg0 configurePosition:(*NSInteger)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)invalidateCachedLayoutInformation;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)reloadVisibleCellsWithReason:(NSInteger)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif