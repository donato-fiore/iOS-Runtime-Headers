// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHELFPAGESECTIONCONFIGURATION_H
#define SKUISHELFPAGESECTIONCONFIGURATION_H

@class UICollectionView, UIColor, IKViewElementStyle;
@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;

#import <Foundation/Foundation.h>

#import "SKUIViewElementLayoutContext.h"
#import "SKUIStorePageSectionContext.h"
#import "SKUIShelfLayoutData.h"

@interface SKUIShelfPageSectionConfiguration : NSObject {
    NSInteger _lockupType;
    UICollectionView *_shelfCollectionView;
}


@property (retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // ivar: _cellLayoutContext
@property (weak, nonatomic) NSObject<SKUIShelfPageSectionConfigurationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) UICollectionView *existingShelfCollectionView;
@property (nonatomic) BOOL needsShelfCollectionViewLayout; // ivar: _needsShelfCollectionViewLayout
@property (nonatomic) BOOL needsShelfCollectionViewReload; // ivar: _needsShelfCollectionViewReload
@property (readonly, nonatomic) NSUInteger numberOfIterations;
@property (retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // ivar: _pageSectionContext
@property (nonatomic) BOOL rendersWithParallax; // ivar: _rendersWithParallax
@property (nonatomic) BOOL rendersWithPerspective; // ivar: _rendersWithPerspective
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex
@property (readonly, nonatomic) UICollectionView *shelfCollectionView;
@property (retain, nonatomic) UIColor *shelfCollectionViewBackgroundColor; // ivar: _shelfCollectionViewBackgroundColor
@property (nonatomic) NSObject<UICollectionViewDataSource> *shelfCollectionViewDataSource; // ivar: _shelfCollectionViewDataSource
@property (nonatomic) NSObject<UICollectionViewDelegate> *shelfCollectionViewDelegate; // ivar: _shelfCollectionViewDelegate
@property (readonly, nonatomic) SKUIShelfLayoutData *shelfLayoutData; // ivar: _shelfLayoutData
@property (retain, nonatomic) IKViewElementStyle *shelfViewElementStyle; // ivar: _shelfViewElementStyle
@property (nonatomic, getter=isTopSection) BOOL topSection; // ivar: _topSection
@property (readonly, nonatomic) BOOL wantsZoomingShelfLayout; // ivar: _wantsZoomingShelfLayout
@property (readonly, nonatomic) CGFloat zoomingShelfLayoutFocusedItemHorizontalCenterOffset; // ivar: _zoomingShelfLayoutFocusedItemHorizontalCenterOffset
@property (readonly, nonatomic) CGFloat zoomingShelfLayoutInterItemSpacing; // ivar: _zoomingShelfLayoutInterItemSpacing
@property (readonly, nonatomic) CGFloat zoomingShelfLayoutItemWidth; // ivar: _zoomingShelfLayoutItemWidth
@property (readonly, nonatomic) CGFloat zoomingShelfLayoutScaledItemWidth; // ivar: _zoomingShelfLayoutScaledItemWidth


-(BOOL)prefetchResourcesForShelfItemViewElement:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)supportsDuplicateShelfItems;
-(CGFloat)_columnSpacingForShelfItemViewElements:(id)arg0 ;
-(CGFloat)_perspectiveHeightForContentSize:(CGFloat)arg0 ;
-(Class)_cellClassForEffectiveShelfItemViewElement:(id)arg0 ;
-(Class)_lockupCellClassWithLockup:(id)arg0 ;
-(NSInteger)lockupTypeForLockup:(id)arg0 ;
-(NSInteger)numberOfSectionCells;
-(NSUInteger)numberOfCellsForNumberOfShelfItems:(NSUInteger)arg0 ;
-(id)_dequeueCellForLockup:(id)arg0 collectionView:(id)arg1 indexPath:(id)arg2 ;
-(id)_reloadShelfLayoutDataWithNumberOfShelfItems:(NSInteger)arg0 ;
-(id)_shelfItemViewElementAtIndex:(NSInteger)arg0 ;
-(id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg0 ;
-(id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg0 numberOfShelfItems:(NSUInteger)arg1 ;
-(id)backgroundColorForShelfViewElement:(id)arg0 ;
-(id)cellForShelfItemViewElement:(id)arg0 indexPath:(id)arg1 ;
-(id)cellForShelfViewElement:(id)arg0 indexPath:(id)arg1 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg0 ;
-(id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg0 numberOfShelfItems:(NSUInteger)arg1 ;
-(struct CGSize )cellSizeForShelfViewElement:(id)arg0 indexPath:(id)arg1 numberOfShelfItems:(NSInteger)arg2 ;
-(struct UIEdgeInsets )sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets )arg0 forShelfViewElement:(id)arg1 withSectionIndex:(NSInteger)arg2 ;
-(void)_updateShelfLayoutDataContentInset;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)registerReusableClassesForCollectionView:(id)arg0 ;
-(void)reloadLockupTypeForShelfViewElement:(id)arg0 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg0 withShelfItemViewElements:(id)arg1 requestCellLayouts:(BOOL)arg2 numberOfShelfItems:(NSInteger)arg3 ;
-(void)requestCellLayoutForViewElement:(id)arg0 withColumnWidth:(CGFloat)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)shelfItemsCollectionView:(id)arg0 willApplyLayoutAttributes:(id)arg1 forViewElement:(id)arg2 withItemIndex:(NSInteger)arg3 ;


@end


#endif