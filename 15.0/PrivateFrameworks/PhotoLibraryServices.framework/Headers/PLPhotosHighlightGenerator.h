// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOSHIGHLIGHTGENERATOR_H
#define PLPHOTOSHIGHLIGHTGENERATOR_H

@class NSMutableSet, NSDateInterval;
@protocol PLMomentGenerationDataManagement><PLHighlightItemModelReader;

#import <Foundation/Foundation.h>

#import "PLDateRangeTitleGenerator.h"
#import "PLHighlightHierarchy.h"
#import "PLFrequentLocationManager.h"
#import "PLPhotosHighlightClusterGenerator.h"
#import "PLLocalCreationDateCreator.h"

@interface PLPhotosHighlightGenerator : NSObject

@property (weak, nonatomic) NSObject<PLMomentGenerationDataManagement><PLHighlightItemModelReader> *dataManager; // ivar: _dataManager
@property (readonly, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // ivar: _dateRangeTitleGenerator
@property (nonatomic) BOOL didCallBeginGeneration; // ivar: _didCallBeginGeneration
@property (retain, nonatomic) PLHighlightHierarchy *entitiesToUpdate; // ivar: _entitiesToUpdate
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // ivar: _frequentLocationManager
@property (readonly, nonatomic) PLPhotosHighlightClusterGenerator *highlightClusterGenerator;
@property (retain, nonatomic) NSMutableSet *highlightsNeedingNewKeyAsset; // ivar: _highlightsNeedingNewKeyAsset
@property (retain, nonatomic) NSMutableSet *highlightsToDelete; // ivar: _highlightsToDelete
@property (retain, nonatomic) NSMutableSet *highlightsWithDeletedAssets; // ivar: _highlightsWithDeletedAssets
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // ivar: _localCreationDateCreator
@property (readonly, nonatomic) NSDateInterval *recentHighlightsDateInterval; // ivar: _recentHighlightsDateInterval
@property (retain, nonatomic) NSMutableSet *upsertedHighlights; // ivar: _upsertedHighlights


+(BOOL)_shouldUpdateKeyAssetForParentHighlight:(id)arg0 withKeyAssetObjectID:(id)arg1 ;
+(BOOL)assetEligibleForCuration:(id)arg0 ;
+(BOOL)assetEligibleForRecents:(id)arg0 ;
+(CGFloat)curationScoreForAsset:(id)arg0 ;
+(id)_bestAssetInAssets:(id)arg0 fallback:(BOOL)arg1 ;
+(id)_provisionalKeyAssetForDayGroupHighlight:(id)arg0 ;
+(id)_provisionalKeyAssetForDayHighlight:(id)arg0 ;
+(id)_provisionalKeyAssetForMonthAndYearHighlight:(id)arg0 ;
+(id)provisionalKeyAssetForHighlight:(id)arg0 ;
+(id)userDefaults;
+(void)_updateParentHighlighNeedingNewKeyAsset:(id)arg0 withProvisionalKeyAsset:(id)arg1 updatedHighlights:(id)arg2 ;
+(void)initialize;
+(void)updateKeyAssetForHighlights:(id)arg0 ;
+(void)updateTitleForHighlights:(id)arg0 forKind:(unsigned short)arg1 forceUpdateLocale:(BOOL)arg2 dateRangeTitleGenerator:(id)arg3 ;
-(BOOL)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)arg0 ;
-(BOOL)_updateHighlightProperties:(id)arg0 fromHighlightCluster:(id)arg1 ;
-(BOOL)setDefaultVisibilityStateForHighlight:(id)arg0 withHighlightCluster:(id)arg1 ;
-(id)_collectMomentsRequiringReprocessingFromMoments:(id)arg0 withAllMoments:(id)arg1 ;
-(id)_fetchAllMoments;
-(id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
-(id)_fetchMomentsWithLocationTypeUnprocessed;
-(id)_highlightMomentClustersForMoments:(id)arg0 excludingMomentIds:(id)arg1 ;
-(id)_highlightToReuseForMoments:(id)arg0 ;
-(id)_insertDayGroupPhotosHighlightCluster:(id)arg0 ;
-(id)_lastHighlightTitlesUpdateDay;
-(id)_recentHighlightsDateIntervalWithDate:(id)arg0 ;
-(id)_titleForAggregationDayGroupHighlight:(id)arg0 ;
-(id)fetchAllOngoingTripDayGroupHighlights;
-(id)fetchAllRecentHighlights;
-(id)initWithDataManager:(id)arg0 frequentLocationManager:(id)arg1 localCreationDateCreator:(id)arg2 ;
-(id)updateElectedEventForUpdatedMonths:(id)arg0 ;
-(void)_consumeHighlightItemListChanges:(id)arg0 forKind:(unsigned short)arg1 rule:(id)arg2 resultBlock:(id)arg3 ;
-(void)_insertDayPhotosHighlightCluster:(id)arg0 ;
-(void)_resetProperties;
-(void)_setLastHighlightTitlesUpdateDay:(id)arg0 ;
-(void)_updateDayGroupHighlight:(id)arg0 withNewAssets:(id)arg1 ;
-(void)_updateDayHighlight:(id)arg0 withNewAssets:(id)arg1 ;
-(void)beginGenerationWithAssets:(id)arg0 hiddenAssets:(id)arg1 ;
-(void)cleanupEmptyHighlights;
-(void)finishGeneration;
-(void)generateHighlightListForUpdatedHighlights:(id)arg0 deletedHighlights:(id)arg1 ;
-(void)generateHighlightsForUpsertedMoments:(id)arg0 frequentLocationsDidChange:(BOOL)arg1 ;
-(void)processRecentHighlights;
-(void)processUnprocessedMomentLocations;
-(void)registerHighlightsWithDeletedMoments:(id)arg0 ;
-(void)resetDayGroupCurationForAsset:(id)arg0 ;
-(void)resetPreviousRecentHighlightCurationForHighlight:(id)arg0 ;
-(void)updateCurationForHighlight:(id)arg0 withAssetsBelongingToCuration:(id)arg1 ;
-(void)updateHighlightNeedingNewKeyAssetsWithAsset:(id)arg0 ;
-(void)updateHighlightTitles;
-(void)updateRecentHighlightCurationForHighlight:(id)arg0 ;


@end


#endif