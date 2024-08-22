// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDAYASSETSSECTIONBODYLAYOUT_H
#define PXDAYASSETSSECTIONBODYLAYOUT_H

@protocol PXGItemsGeometry, PXCuratedLibraryRowBasedLayout;


#import "PXCuratedLibraryAssetsSectionGeneratedLayout.h"
#import "PXDayAssetsSectionBodyLayoutSpec.h"

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXGItemsGeometry, PXCuratedLibraryRowBasedLayout>



@property (readonly, nonatomic) CGFloat buildingRowContentHeight;
@property (readonly, nonatomic) CGFloat buildingRowSpacing;
@property (readonly, nonatomic) CGSize minPlayableSpriteSize;
@property (readonly, nonatomic) CGSize minimumItemSize;
@property (nonatomic) NSInteger numberOfPrecedingAssets; // ivar: _numberOfPrecedingAssets
@property (retain, nonatomic) PXDayAssetsSectionBodyLayoutSpec *spec; // ivar: _spec
@property (nonatomic) NSInteger style; // ivar: _style


+(struct CGSize )estimatedSizeWithReferenceSize:(struct CGSize )arg0 spec:(id)arg1 style:(NSInteger)arg2 numberOfAssets:(NSInteger)arg3 ;
-(NSInteger)_initialItemInDirection:(NSUInteger)arg0 ;
-(NSInteger)_itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(NSInteger)itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(id)_inputItemAtIndex:(unsigned int)arg0 ;
-(id)exploreGenerator;
-(id)init;
-(id)itemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)itemsGeometry;
-(id)itemsInRect:(struct CGRect )arg0 inLayout:(id)arg1 ;
-(id)newGenerator;
-(struct CGRect )sectionRect;
-(struct CGSize )_minSizeOfDominantSprites;
-(struct _PXGSpriteIndexRange )spriteIndexRangeCoveringRect:(struct CGRect )arg0 ;
-(void)contentSizeDidChange;
-(void)enumerateHeroSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateRowsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)referenceSizeDidChange;


@end


#endif