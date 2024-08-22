// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSSECTIONEDLAYOUT_H
#define PXPHOTOSSECTIONEDLAYOUT_H

@class NSIndexSet, NSString;
@protocol PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;


#import "PXGStackLayout.h"
#import "PXAssetsDataSource.h"
#import "PXPhotosLayoutSpec.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate>

 {
    ? _updateFlags;
    BOOL _isUpdatingSublayouts;
    ? _headerProviderRespondsTo;
    NSInteger _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    NSInteger _numberOfForcedSections;
}


@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (readonly, nonatomic) NSObject<PXPhotosSectionBodyLayoutProvider> *bodyLayoutProvider; // ivar: _bodyLayoutProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProvider> *headerLayoutProvider; // ivar: _headerLayoutProvider
@property (nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (retain, nonatomic) PXPhotosLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


-(BOOL)_configureSectionLayout:(id)arg0 ;
-(BOOL)_shouldFaultInSection:(NSInteger)arg0 inDataSource:(id)arg1 ;
-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)allowsSublayoutUpdateCycleAssertions;
-(BOOL)layout:(id)arg0 shouldPreventFaultOutOfSublayout:(id)arg1 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)_createAnimationForChangeFromDataSource:(id)arg0 toDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(id)axSpriteIndexes;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 headerProvider:(id)arg1 bodyProvider:(id)arg2 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)presentedItemsGeometryForSection:(NSUInteger)arg0 inDataSource:(id)arg1 ;
-(id)topmostHeaderSnapshotInRect:(struct CGRect )arg0 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(void)_invalidateSublayoutsConfiguration;
-(void)_invalidateSublayoutsDataSource;
-(void)_invalidateSublayoutsSpec;
-(void)_performAddActionForSectionLayout:(id)arg0 ;
-(void)_updateSublayoutGridConfiguratorForLayout:(id)arg0 ;
-(void)_updateSublayoutsConfiguration;
-(void)_updateSublayoutsDataSource;
-(void)_updateSublayoutsSpec;
-(void)assetSectionLayoutDidConfigureLayouts:(id)arg0 ;
-(void)didFaultInSublayout:(id)arg0 atIndex:(NSInteger)arg1 fromEstimatedContentSize:(struct CGSize )arg2 ;
-(void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(id)arg0 ;
-(void)enumerateItemsGeometriesInRect:(struct CGRect )arg0 dataSource:(id)arg1 usingBlock:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)arg0 ;
-(void)update;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;


@end


#endif