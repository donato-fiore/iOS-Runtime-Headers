// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYSECTIONEDLAYOUT_H
#define PXCURATEDLIBRARYSECTIONEDLAYOUT_H

@class NSMutableIndexSet, NSIndexSet, NSString;
@protocol PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout;


#import "PXGCompositeLayout.h"
#import "PXAssetsDataSource.h"
#import "PXAssetsSectionLayout.h"
#import "PXGSpriteReference.h"
#import "PXCuratedLibraryLayoutSpec.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout>

 {
    ? _updateFlags;
    PXAssetsDataSource *_currentDataSource;
    NSInteger _currentZoomLevel;
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;
    *NSInteger _accumulatedSectionItems;
    NSInteger _accumulatedSectionItemsCount;
    BOOL _isUpdatingSublayouts;
    NSInteger _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultInterlayoutSpacing; // ivar: _defaultInterlayoutSpacing
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *dominantHeroPreferences;
@property (readonly, nonatomic) PXAssetsSectionLayout *dominantSectionLayout;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference; // ivar: _lastHitSpriteReference
@property (retain, nonatomic) id *lastVisibleDominantObjectReference; // ivar: _lastVisibleDominantObjectReference
@property (nonatomic) CGFloat lateralMargin; // ivar: _lateralMargin
@property (readonly, nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL performedInitialLoad; // ivar: _performedInitialLoad
@property (readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // ivar: _presentedDataSource
@property (readonly, nonatomic) NSInteger presentedZoomLevel; // ivar: _presentedZoomLevel
@property (retain, nonatomic) PXCuratedLibraryLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


+(BOOL)shouldDisableLaunchOptimizations;
+(void)setShouldDisableLaunchOptimizations:(BOOL)arg0 ;
-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)allowsSublayoutUpdateCycleAssertions;
-(BOOL)layout:(id)arg0 shouldPreventFaultOutOfSublayout:(id)arg1 ;
-(BOOL)prefersDominantHeroForZoomLevel:(NSInteger)arg0 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg0 zoomLevel:(NSInteger)arg1 ;
-(id)_heroSectionLayoutClosestToSectionLayout:(id)arg0 zoomLevel:(NSInteger)arg1 ;
-(id)_targetAssetCollectionReferenceInZoomLevel:(NSInteger)arg0 forTransitionFromAssetCollectionReference:(id)arg1 ;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 spec:(id)arg1 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)locationNamesFutureForContentInRect:(SEL)arg0 ;
-(id)viewModel:(id)arg0 dominantAssetCollectionReferenceForZoomLevel:(NSInteger)arg1 ;
-(struct CGRect )sectionBoundariesForAssetCollectionReference:(id)arg0 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(void)_anchorVisibleArea;
-(void)_configureSectionLayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_prepareAccumulatedSectionItemsBufferForSections:(NSInteger)arg0 ;
-(void)_updateFaultOutsets;
-(void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg0 ;
-(void)_updatePreheating;
-(void)_updateSublayoutsDataSource;
-(void)_updateSublayoutsForSkimming;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)dealloc;
-(void)didFaultInSublayout:(id)arg0 atIndex:(NSInteger)arg1 fromEstimatedContentSize:(struct CGSize )arg2 ;
-(void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(id)arg0 ;
-(void)enumerateHeroSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateScrollablePagesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateSectionBoundariesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)layout:(id)arg0 collectIndexesOfChapterHeaderSublayouts:(id)arg1 heroSublayouts:(id)arg2 inRange:(struct _NSRange )arg3 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setPrefersDominantHero:(BOOL)arg0 forZoomLevel:(NSInteger)arg1 ;
-(void)setSafeAreaInsets:(struct UIEdgeInsets )arg0 ;
-(void)update;
-(void)willFaultOutSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;


@end


#endif