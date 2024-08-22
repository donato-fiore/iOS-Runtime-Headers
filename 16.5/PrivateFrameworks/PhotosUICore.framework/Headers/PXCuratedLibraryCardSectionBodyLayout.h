// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYCARDSECTIONBODYLAYOUT_H
#define PXCURATEDLIBRARYCARDSECTIONBODYLAYOUT_H

@class NSMutableIndexSet, NSString;
@protocol PXGDisplayAssetSource, PXDisplayAsset, PXDisplayAssetFetchResult;


#import "PXGLayout.h"
#import "PXGLayoutGuide.h"
#import "PXAssetsDataSource.h"
#import "PXCuratedLibrarySectionGeometryDescriptor.h"
#import "PXIndexPathSet.h"
#import "PXCuratedLibraryCardSectionBodyLayoutSpec.h"

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource>

 {
    unsigned short _assetVersion;
    id<PXDisplayAsset> *_keyAsset;
    ? _updateFlags;
    ? _postUpdateFlags;
    _PXGSpriteIndexRange _assetSpriteIndexRange;
    NSMutableIndexSet *_axSpriteIndexes;
}


@property (readonly, nonatomic) CGRect assetFrame;
@property (readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide; // ivar: _assetLayoutGuide
@property (nonatomic) NSInteger currentSkimmingIndex; // ivar: _currentSkimmingIndex
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (nonatomic) BOOL isSkimming; // ivar: _isSkimming
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *keyAssetsFetchResult; // ivar: _keyAssetsFetchResult
@property (nonatomic) NSInteger maxSkimmingIndex; // ivar: _maxSkimmingIndex
@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (readonly, nonatomic) NSInteger section; // ivar: _section
@property (readonly, nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) PXIndexPathSet *skimmingIndexPaths; // ivar: _skimmingIndexPaths
@property (retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel


-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axSelectedSpriteIndexes;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)layoutForItemChanges;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(struct CGSize )minSpriteSizeForPresentationStyle:(NSUInteger)arg0 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_updateAXSprites;
-(void)_updateKeyAssetFetchResultWithDataSource:(id)arg0 section:(NSInteger)arg1 ;
-(void)_updateSprites;
// -(void)applySpriteChangeDetails:(id)arg0 countAfterChanges:(unsigned int)arg1 initialState:(id)arg2 modifyState:(unk)arg3  ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif