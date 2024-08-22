// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYCONTROLLER_H
#define PGMEMORYCONTROLLER_H

@class NSString, NSMutableArray, NSArray, NSMutableIndexSet, NSMutableDictionary, NSMapTable, NSDate, CLLocation, CLSHolidayCalendarEventService, NSSet, PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGManager.h"
#import "PGMemoryGenerationContext.h"
#import "PGManagerWorkingContext.h"

@interface PGMemoryController : NSObject {
    NSString *_meNodeLocalIdentifier;
    PGGraph *_graph;
    PGManager *_managerDeprecated;
    NSMutableArray *_latentMemories;
    NSArray *_existingMemories;
    NSArray *_blockedMemories;
    NSInteger _numberOfDaysSinceLastMemory;
    NSMutableIndexSet *_matchedCategories;
    NSMutableIndexSet *_excludedFeaturedSubcategories;
    NSArray *_existingSuggestions;
    NSMutableDictionary *_numberOfAssetsByMomentIDs;
    NSMutableDictionary *_momentsByMomentIDs;
    NSMutableDictionary *_backingMomentIDsByPHMemoryIDs;
    NSMutableDictionary *_featureVectorByPHMemoryIDs;
    NSMapTable *_numberOfMemoryGenerationDaysByMemory;
    NSDate *_localDate;
    NSDate *_universalDate;
    CLLocation *_location;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    NSDate *_directModeStartDate;
    NSDate *_directModeEndDate;
    CLSHolidayCalendarEventService *_holidayService;
    NSUInteger _currentRandom;
    BOOL _isLastResort;
    BOOL _isFirstTimesAfterUpgrade;
    BOOL _isAttemptingToUpgradeBestOfPastToFeaturedTrip;
    CGFloat _forcedBeta;
    CGFloat _topTierAestheticScore;
}


@property (retain) NSSet *blockedFeatures; // ivar: _blockedFeatures
@property BOOL bypassesCategoryCheckForUpgrades; // ivar: _bypassesCategoryCheckForUpgrades
@property (retain) NSSet *categoryBlocklist; // ivar: _categoryBlocklist
@property (retain) NSSet *categoryWhitelist; // ivar: _categoryWhitelist
@property BOOL ignoresMinimumNumberOfAssets; // ivar: _ignoresMinimumNumberOfAssets
@property BOOL ignoresMinimumNumberOfMoments; // ivar: _ignoresMinimumNumberOfMoments
@property BOOL ignoresMomentIsInteresting; // ivar: _ignoresMomentIsInteresting
@property (readonly) BOOL isCreatingEverMemories; // ivar: _isCreatingEverMemories
@property BOOL isDryTesting; // ivar: _isDryTesting
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) BOOL looksIntoFuture; // ivar: _looksIntoFuture
@property (retain, nonatomic) NSSet *mandatoryFeatures; // ivar: _mandatoryFeatures
@property (retain, nonatomic) PGMemoryGenerationContext *memoryGenerationContext; // ivar: _memoryGenerationContext
@property NSUInteger numberOfNewMemoriesForPeriodicity; // ivar: _numberOfNewMemoriesForPeriodicity
@property NSUInteger numberOfNewMemoriesForUserRequest; // ivar: _numberOfNewMemoriesForUserRequest
@property (readonly) PHPhotoLibrary *photoLibrary;
@property BOOL probabilityAlwaysPasses; // ivar: _probabilityAlwaysPasses
@property (copy) id *progressBlock; // ivar: _progressBlock
@property BOOL skipsAssetCollection; // ivar: _skipsAssetCollection
@property BOOL skipsBestOfPastUpgradeToFeaturedTrip; // ivar: _skipsBestOfPastUpgradeToFeaturedTrip
@property BOOL skipsBlockedFeatureCheck; // ivar: _skipsBlockedFeatureCheck
@property BOOL skipsCuration; // ivar: _skipsCuration
@property BOOL skipsMeaningfulEventUpgrades; // ivar: _skipsMeaningfulEventUpgrades
@property BOOL skipsTitleGeneration; // ivar: _skipsTitleGeneration
@property BOOL skipsWeekendUpgrades; // ivar: _skipsWeekendUpgrades
@property (readonly) PGManagerWorkingContext *workingContext; // ivar: _workingContext


+(BOOL)anyBlockedFeatureIn:(id)arg0 isHitByEvent:(id)arg1 ;
+(CGFloat)computeBetaWithGraph:(id)arg0 loggingConnection:(id)arg1 progress:(id)arg2 ;
+(NSUInteger)minimumNumberOfAssetsForContiguousMomentsMemory;
+(NSUInteger)minimumNumberOfAssetsForDisjointMomentsMemory;
+(NSUInteger)minimumNumberOfAssetsForMomentMemory;
+(NSUInteger)minimumNumberOfCuratedAssetsForMemories;
+(id)_localIdentifierOfMainPersonInEvent:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(BOOL)_assetCollection:(id)arg0 matchesAssetCollection:(id)arg1 ;
-(BOOL)_doBestOfPastWithLocalDate:(id)arg0 ;
-(BOOL)_doBestOfRandomYear;
-(BOOL)_doCelebrationOverTimeWithLocalDate:(id)arg0 ;
-(BOOL)_doDayInHistoryWithLocalDate:(id)arg0 ;
-(BOOL)_doEarlyMomentsWithPeopleForLocalDate:(id)arg0 ;
-(BOOL)_doFeaturedBabyBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedFoodieBeforeLocalDate:(id)arg0 oldMemory:(BOOL)arg1 ;
-(BOOL)_doFeaturedFoodieOfType:(id)arg0 kind:(id)arg1 beforeLocalDate:(id)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedForType:(NSUInteger)arg0 beforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg0 eventType:(NSUInteger)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg0 meaning:(NSUInteger)arg1 lowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg0 eventType:(NSUInteger)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg0 meaning:(NSUInteger)arg1 lowRequirements:(BOOL)arg2 ;
-(BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedNeighborBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPastSupersetBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPeopleBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPeopleVisitingBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPersonBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPersonOverTimeBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedPetBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedRecurrentTripBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedSocialGroupBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedSocialGroupOverTimeBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedTripBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doFeaturedTripBetweenLocalDate:(id)arg0 andLocalDate:(id)arg1 ;
-(BOOL)_doFeaturedWeekendBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doHomeAggregationWithLocalDate:(id)arg0 ;
-(BOOL)_doKeyPeopleForUpcomingHolidayEventWithLocalDate:(id)arg0 ;
-(BOOL)_doOneFeaturedWithLocalDate:(id)arg0 reason:(NSUInteger)arg1 usingLowRequirements:(BOOL)arg2 hasExhaustedFeatured:(*BOOL)arg3 ;
-(BOOL)_doPeopleMemoriesForPeopleWithUUID:(id)arg0 year:(NSInteger)arg1 ;
-(BOOL)_doPersonOverTimeMemoriesForPersonWithName:(id)arg0 ;
-(BOOL)_doPlaceAreaBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doPlaceBusinessBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doPlaceLocationBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doPlaceRegionBeforeLocalDate:(id)arg0 usingLowRequirements:(BOOL)arg1 oldMemory:(BOOL)arg2 ;
-(BOOL)_doRecentPastEventsWithLocalDate:(id)arg0 ;
-(BOOL)_doSeasonWithLocalDate:(id)arg0 forType:(NSUInteger)arg1 ;
-(BOOL)_doSometimeInHistory;
-(BOOL)_doThrowbackThursdayForLocalDate:(id)arg0 ;
-(BOOL)_doTodaysBirthdayWithLocalDate:(id)arg0 ;
-(BOOL)_doYearSummaryWithLocalDate:(id)arg0 ;
-(BOOL)_hasExhaustedFeatured:(*BOOL)arg0 ;
-(BOOL)_memories:(id)arg0 containAssetCollection:(id)arg1 ;
-(BOOL)_memories:(id)arg0 containMemory:(id)arg1 ;
-(BOOL)_memories:(id)arg0 coverTypeOfMemory:(id)arg1 ;
-(BOOL)_wantsBestOfPastWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsCelebrationOverTimeWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsDayInHistoryWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsEarlyMomentsWithPeopleWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsFeaturedBabyWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedFoodieWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedForType:(NSUInteger)arg0 reason:(NSUInteger)arg1 usingLowRequirements:(BOOL)arg2 ;
-(BOOL)_wantsFeaturedMeaningfulEventAggregationWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedMeaningfulEventWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedNeighborWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPastSupersetWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPeopleVisitingWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPeopleWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPersonOverTimeWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPersonWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedPetWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedRecurrentTripWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedSocialGroupOverTimeWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedSocialGroupWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedTripWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsFeaturedWeekendWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsHomeAggregationWithLocalDate:(id)arg0 reason:(NSUInteger)arg1 ;
-(BOOL)_wantsKeyPeopleForUpcomingHolidayEventWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsPlaceAreaWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsPlaceBusinessWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsPlaceLocationWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsPlaceRegionWithReason:(NSUInteger)arg0 usingLowRequirements:(BOOL)arg1 ;
-(BOOL)_wantsRecentPastEventsWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsThrowbackThursdayWithReason:(NSUInteger)arg0 ;
-(BOOL)_wantsTodaysBirthdayWithReason:(NSUInteger)arg0 ;
-(BOOL)anyBlockedFeatureIsHitByEvent:(id)arg0 ;
-(BOOL)canUsePotentialMemory:(id)arg0 isDebug:(BOOL)arg1 ;
-(BOOL)eventIsTimely:(id)arg0 ;
-(BOOL)eventPassesContextualityCheck:(id)arg0 ;
-(BOOL)isOKToProceedWithDirectEarlyPotentialMemory:(id)arg0 ;
-(BOOL)isOKToProceedWithEarlyPotentialMemory:(id)arg0 ;
-(BOOL)isUpcomingDayOfYearFromReferenceDate:(id)arg0 ;
-(BOOL)isUpcomingDayOfYearFromReferenceDate:(id)arg0 localDate:(id)arg1 ;
-(BOOL)libraryHasEnoughProcessedScenes:(BOOL)arg0 andProcessedFaces:(BOOL)arg1 ;
-(BOOL)libraryHasEnoughScenesProcessed:(BOOL)arg0 haveFacesProcessed:(BOOL)arg1 forYear:(id)arg2 withGraph:(id)arg3 ;
-(BOOL)momentNodesHaveScenesProcessed:(id)arg0 inGraph:(id)arg1 ;
-(BOOL)potentialMemory:(id)arg0 isTooSimilarTooSoonToPHMemory:(id)arg1 ;
-(BOOL)probabilityPassWithThreshold:(CGFloat)arg0 ;
-(CGFloat)updatedBeta:(CGFloat)arg0 forNumberOfDaysSinceLastMemory:(NSInteger)arg1 ;
-(NSUInteger)_desireLevelForLastSeasonWithLocalDate:(id)arg0 ;
-(NSUInteger)_desireLevelForSeasonInHistoryWithLocalDate:(id)arg0 ;
-(NSUInteger)_featuredSubcategoryForGeneratorType:(NSUInteger)arg0 ;
-(NSUInteger)_generatorTypeForFeaturedSubcategory:(NSUInteger)arg0 ;
-(NSUInteger)_meaningFromString:(id)arg0 ;
-(NSUInteger)_numberOfAssetsInMomentsForIDs:(id)arg0 withNumberOfAssetsByMomentIDs:(id)arg1 ;
-(NSUInteger)desireLevelForYearSummaryWithLocalDate:(id)arg0 ;
-(NSUInteger)subcategoryForString:(id)arg0 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg0 andMomentsForIDs:(id)arg1 ;
-(float)_assetOverlapBetweenMomentsForIDs:(id)arg0 andMomentsForIDs:(id)arg1 withNumberOfAssetsByMomentIDs:(id)arg2 ;
-(id)_addressFeatureForPotentialMemory:(id)arg0 ;
-(id)_addressFeatureForPotentialMemory:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(id)_areaFeatureForPotentialMemory:(id)arg0 ;
-(id)_areaFeatureForPotentialMemory:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(id)_createFirstEverMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_createFirstTimesAfterUpgradeMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_createMoreMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_createOneMemoryWithCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 localDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4 ;
-(id)_createPeriodicMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_createSecondEverMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_createThirdEverMemoriesWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 progress:(id)arg3 ;
-(id)_dateFeatureForPotentialMemory:(id)arg0 ;
-(id)_dateFeatureForPotentialMemory:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(id)_dateIntervalFeatureForPotentialMemory:(id)arg0 ;
-(id)_doDirectModeWithLocalDate:(id)arg0 location:(id)arg1 peopleNames:(id)arg2 parameters:(id)arg3 progress:(id)arg4 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg0 ;
-(id)_holidayFeatureForPotentialMemory:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(id)_idsOfMomentsBackingPHMemory:(id)arg0 ;
-(id)_locationBlockableFeatureForPotentialMemory:(id)arg0 ;
-(id)_peopleBlockableFeatureForPotentialMemory:(id)arg0 ;
-(id)_personFeatureForEarlyPotentialMemory:(id)arg0 ;
-(id)_personFeatureForPotentialMemory:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(id)_timeBlockableFeatureForPotentialMemory:(id)arg0 ;
-(id)_uuidOfPersonsWithBirthdayOnDate:(id)arg0 ;
-(id)anyBlockedFeatureHitByEarlyPotentialMemory:(id)arg0 ;
-(id)assetCollectionWithAssetLocalIdentifiers:(id)arg0 ;
-(id)blockableFeaturesForPotentialMemory:(id)arg0 ;
-(id)createMemoriesWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)curatedAssetsWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)extendedCuratedAssetsWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)initWithGraph:(id)arg0 workingContext:(id)arg1 managerDeprecated:(id)arg2 ;
-(id)initWithWorkingContext:(id)arg0 managerDeprecated:(id)arg1 ;
-(id)keyAssetWithFeeder:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)momentForMomentID:(id)arg0 ;
-(unsigned int)randomNumber;
-(unsigned int)randomNumberLessThan:(NSUInteger)arg0 ;
-(void)performSynchronouslyOnGraphUsingBlock:(id)arg0 ;
-(void)prepareForGenerationSession;
-(void)resetIgnoresAndSkips;


@end


#endif