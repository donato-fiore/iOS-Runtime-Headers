// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGRIDLAYOUT_H
#define GKGRIDLAYOUT_H

@class UICollectionViewLayout, NSArray, NSIndexPath, NSMutableDictionary, NSMutableSet, NSMutableArray, NSMutableOrderedSet, NSPointerArray, NSMutableIndexSet, NSSet;


#import "GKCollectionViewLayoutAttributes.h"
#import "GKCollectionViewDataSource.h"
#import "GKDataSourceMetrics.h"
#import "GKSectionMetrics.h"

@interface GKGridLayout : UICollectionViewLayout

@property (nonatomic) CGFloat bottomContentPadding; // ivar: _bottomContentPadding
@property (retain, nonatomic) GKCollectionViewLayoutAttributes *clipViewAttributes; // ivar: _clipViewAttributes
@property (retain, nonatomic) NSArray *currentUpdateItems; // ivar: _currentUpdateItems
@property (retain, nonatomic) GKCollectionViewDataSource *dataSourceForUpdate; // ivar: _dataSourceForUpdate
@property (retain, nonatomic) GKDataSourceMetrics *dataSourceMetrics; // ivar: _dataSourceMetrics
@property (retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // ivar: _defaultSectionMetricsInternal
@property (nonatomic) BOOL displayClipView; // ivar: _displayClipView
@property (nonatomic) BOOL displayingOverlay; // ivar: _displayingOverlay
@property (nonatomic) CGFloat hiddenSearchBarOffset; // ivar: _hiddenSearchBarOffset
@property (nonatomic) BOOL hideAboveSegmentOnAppear; // ivar: _hideAboveSegmentOnAppear
@property (nonatomic) BOOL hideSearchBarOnAppear; // ivar: _hideSearchBarOnAppear
@property (nonatomic) BOOL ignoreBoundsForSizeCalculation; // ivar: _ignoreBoundsForSizeCalculation
@property (retain, nonatomic) NSIndexPath *indexPathOfTouchedShowMore; // ivar: _indexPathOfTouchedShowMore
@property (retain, nonatomic) NSMutableDictionary *indexPathToDecoration; // ivar: _indexPathToDecoration
@property (retain, nonatomic) NSMutableDictionary *indexPathToItem; // ivar: _indexPathToItem
@property (retain, nonatomic) NSMutableDictionary *indexPathToMetrics; // ivar: _indexPathToMetrics
@property (retain, nonatomic) NSMutableDictionary *indexPathToSupplementary; // ivar: _indexPathToSupplementary
@property (nonatomic) NSUInteger invalidationFlags; // ivar: _invalidationFlags
@property (retain, nonatomic) NSMutableDictionary *keyToMetricData; // ivar: _keyToMetricData
@property (retain, nonatomic) NSMutableSet *knownSupplementaryKinds; // ivar: _knownSupplementaryKinds
@property (retain, nonatomic) NSMutableArray *laidOutAttributes; // ivar: _laidOutAttributes
@property (nonatomic) CGSize laidOutContentSize; // ivar: _laidOutContentSize
@property (retain, nonatomic) NSMutableOrderedSet *laidOutPinnableAttributes; // ivar: _laidOutPinnableAttributes
@property (nonatomic) NSUInteger landscapeInterleavedSectionsCount; // ivar: _landscapeInterleavedSectionsCount
@property (nonatomic) CGFloat leftLayoutGuideOffset; // ivar: _leftLayoutGuideOffset
@property (nonatomic) NSInteger metricsInvalidationCount; // ivar: _metricsInvalidationCount
@property (nonatomic) CGSize minimumLaidOutContentSize; // ivar: _minimumLaidOutContentSize
@property (nonatomic) BOOL movedItemsInUpdateCarrySections; // ivar: _movedItemsInUpdateCarrySections
@property (nonatomic) BOOL noMoreShowMore; // ivar: _noMoreShowMore
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToDecoration; // ivar: _oldIndexPathToDecoration
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToItem; // ivar: _oldIndexPathToItem
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToSupplementary; // ivar: _oldIndexPathToSupplementary
@property (nonatomic) CGSize oldLaidOutContentSize; // ivar: _oldLaidOutContentSize
@property (retain, nonatomic) NSMutableDictionary *oldSectionToMetricKeys; // ivar: _oldSectionToMetricKeys
@property (nonatomic) NSUInteger portraitInterleavedSectionsCount; // ivar: _portraitInterleavedSectionsCount
@property (retain, nonatomic) NSMutableSet *revealedIndexPaths; // ivar: _revealedIndexPaths
@property (nonatomic) CGFloat rightLayoutGuideOffset; // ivar: _rightLayoutGuideOffset
@property (retain, nonatomic) NSPointerArray *sectionToMetricData; // ivar: _sectionToMetricData
@property (retain, nonatomic) NSPointerArray *sectionToPresentationData; // ivar: _sectionToPresentationData
@property (retain, nonatomic) NSMutableIndexSet *sectionsWithPinnedHeaders; // ivar: _sectionsWithPinnedHeaders
@property (nonatomic) CGFloat segmentedBoxY; // ivar: _segmentedBoxY
@property (nonatomic) CGFloat segmentedHeaderPinningOffset; // ivar: _segmentedHeaderPinningOffset
@property (nonatomic) BOOL shouldLayoutRTL; // ivar: _shouldLayoutRTL
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (nonatomic) NSUInteger updateType; // ivar: _updateType
@property (retain, nonatomic) NSSet *visibleIndexPathsFilter; // ivar: _visibleIndexPathsFilter


+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)_areWePortrait;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldSlideInSupplementaryElementOfKind:(id)arg0 forUpdateItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldSlideOutSupplementaryElementOfKind:(id)arg0 forUpdateItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(CGFloat)applyBottomPinningToAttributes:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 ;
-(CGFloat)applyTopPinningToAttributes:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 ;
-(CGFloat)calculatedBottomPaddingForSection:(NSInteger)arg0 ;
-(CGFloat)layoutBottomPinningAttributes:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 ;
-(CGFloat)layoutTopPinningAttributes:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 ;
-(CGFloat)scale;
-(CGFloat)yOffsetForSection:(NSInteger)arg0 ;
-(CGFloat)yOffsetForSlidingUpdate;
-(NSInteger)_prepareOverlayLayoutForSection:(NSInteger)arg0 offset:(NSInteger)arg1 ;
-(NSInteger)_prepareSupplementaryLayoutForSection:(NSInteger)arg0 atLocation:(NSUInteger)arg1 offset:(NSInteger)arg2 globalOffset:(*NSInteger)arg3 ;
-(NSInteger)indexOfSupplementaryMetricsOfKind:(id)arg0 inList:(id)arg1 ;
-(NSInteger)searchResultsCount;
-(NSUInteger)_prepareItemLayoutForSection:(NSInteger)arg0 ;
-(NSUInteger)currentMaxVisibleItemCountForSection:(NSInteger)arg0 ;
-(NSUInteger)filteredTotalItemCountForSection:(NSInteger)arg0 ;
-(NSUInteger)sectionsPerRow;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)_existingPresentationDataForSection:(NSInteger)arg0 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)attributesForSupplementaryIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg0 ;
-(id)firstVisibleIndexAtOrAfterItem:(NSInteger)arg0 itemCount:(NSInteger)arg1 inSection:(NSInteger)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)metricDataForKey:(id)arg0 ;
-(id)metricDataForSection:(NSInteger)arg0 ;
-(id)metricsForSection:(NSInteger)arg0 ;
-(id)presentationDataForSection:(NSInteger)arg0 ;
-(id)revealMoreForSectionIndex:(NSInteger)arg0 ;
-(id)revealMoreForSectionIndex:(NSInteger)arg0 revealCount:(NSUInteger)arg1 andDeleteItemCount:(NSUInteger)arg2 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGRect )layoutBounds;
-(struct CGSize )_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_filterPinnedAttributes;
-(void)_prepareSegmentedBoxLayoutWithOffset:(NSInteger)arg0 ;
-(void)_resetState;
-(void)calculateCollectionViewContentSize;
-(void)disableClipView;
-(void)enableClipView;
-(void)enumerateSectionsIndexesOverlappingYOffset:(CGFloat)arg0 block:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)finalizeCollectionViewUpdates;
-(void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange )arg0 ;
-(void)finalizePinnedAttributes:(id)arg0 forSection:(NSInteger)arg1 footer:(BOOL)arg2 ;
-(void)forceFullInvalidate;
-(void)fullyRebuildLayout;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForMovingItemsCarryingSections;
-(void)prepareForUpdate:(NSUInteger)arg0 inDataSource:(id)arg1 ;
-(void)prepareLayout;
-(void)refreshMetrics;
-(void)setMetricData:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)updatePinnableAreas;
-(void)updatePlaceholderVisibility;
-(void)updatePresentationDataForLastInterleavedSections;
-(void)updatePresentationDataInSection:(NSInteger)arg0 withAttributes:(id)arg1 supplementaryLocation:(NSUInteger)arg2 ;


@end


#endif