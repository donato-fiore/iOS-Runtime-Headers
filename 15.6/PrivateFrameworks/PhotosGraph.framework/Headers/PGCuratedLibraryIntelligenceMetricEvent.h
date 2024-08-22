// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATEDLIBRARYINTELLIGENCEMETRICEVENT_H
#define PGCURATEDLIBRARYINTELLIGENCEMETRICEVENT_H

@class NSDictionary, NSDate;
@protocol OS_dispatch_semaphore;


#import "PGAbstractMetricEvent.h"
#import "PGManager.h"

@interface PGCuratedLibraryIntelligenceMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}


@property (nonatomic) CGFloat averageNumberOfAssetsInAggregationHighlights; // ivar: _averageNumberOfAssetsInAggregationHighlights
@property (nonatomic) CGFloat averageNumberOfAssetsInDefaultHighlights; // ivar: _averageNumberOfAssetsInDefaultHighlights
@property (nonatomic) CGFloat averageNumberOfAssetsInTripHighlights; // ivar: _averageNumberOfAssetsInTripHighlights
@property (nonatomic) CGFloat averageNumberOfCuratedAssetsPerMonth; // ivar: _averageNumberOfCuratedAssetsPerMonth
@property (nonatomic) CGFloat averageNumberOfPromotedHighlightsPerMonth; // ivar: _averageNumberOfPromotedHighlightsPerMonth
@property (nonatomic) CGFloat averageNumberOfPromotedHighlightsPerMonthPastYear; // ivar: _averageNumberOfPromotedHighlightsPerMonthPastYear
@property (retain, nonatomic) NSDate *debugDate; // ivar: _debugDate
@property (nonatomic) NSUInteger librarySize; // ivar: _librarySize
@property (nonatomic) NSInteger librarySizeRange; // ivar: _librarySizeRange
@property (retain, nonatomic) PGManager *manager; // ivar: _manager
@property (nonatomic) NSUInteger numberOfAggregations; // ivar: _numberOfAggregations
@property (nonatomic) NSUInteger numberOfCuratedAssets; // ivar: _numberOfCuratedAssets
@property (nonatomic) NSUInteger numberOfDayHighlights; // ivar: _numberOfDayHighlights
@property (nonatomic) NSUInteger numberOfDaysInAggregations; // ivar: _numberOfDaysInAggregations
@property (nonatomic) NSUInteger numberOfDaysInTrips; // ivar: _numberOfDaysInTrips
@property (nonatomic) NSUInteger numberOfDaysWithPhotosInPastYear; // ivar: _numberOfDaysWithPhotosInPastYear
@property (nonatomic) NSUInteger numberOfDefaultDayHighlights; // ivar: _numberOfDefaultDayHighlights
@property (nonatomic) NSUInteger numberOfLongTrips; // ivar: _numberOfLongTrips
@property (nonatomic) NSUInteger numberOfMoments; // ivar: _numberOfMoments
@property (nonatomic) NSUInteger numberOfMonthHighlights; // ivar: _numberOfMonthHighlights
@property (nonatomic) NSUInteger numberOfShortTrips; // ivar: _numberOfShortTrips
@property (nonatomic) NSUInteger numberOfYearHighlights; // ivar: _numberOfYearHighlights
@property (nonatomic) CGFloat personalGoodAestheticScore; // ivar: _personalGoodAestheticScore
@property (nonatomic) CGFloat personalHighAestheticScore; // ivar: _personalHighAestheticScore
@property (nonatomic) CGFloat ratioOfAssetsInAggregationHighlights; // ivar: _ratioOfAssetsInAggregationHighlights
@property (nonatomic) CGFloat ratioOfAssetsInDefaultHighlights; // ivar: _ratioOfAssetsInDefaultHighlights
@property (nonatomic) CGFloat ratioOfAssetsInTripHighlights; // ivar: _ratioOfAssetsInTripHighlights
@property (nonatomic) CGFloat ratioOfAssetsWithBetterCurationScore; // ivar: _ratioOfAssetsWithBetterCurationScore
@property (nonatomic) CGFloat ratioOfAssetsWithDefaultCurationScore; // ivar: _ratioOfAssetsWithDefaultCurationScore
@property (nonatomic) CGFloat ratioOfAssetsWithImprovedCurationScore; // ivar: _ratioOfAssetsWithImprovedCurationScore
@property (nonatomic) CGFloat ratioOfAssetsWithUtilityCurationScore; // ivar: _ratioOfAssetsWithUtilityCurationScore
@property (nonatomic) CGFloat ratioOfAutoplayedPhotoKeyAssets; // ivar: _ratioOfAutoplayedPhotoKeyAssets
@property (nonatomic) CGFloat ratioOfAutoplayedVideoKeyAssets; // ivar: _ratioOfAutoplayedVideoKeyAssets
@property (nonatomic) CGFloat ratioOfCurated1siesAmongVisibleHighlights; // ivar: _ratioOfCurated1siesAmongVisibleHighlights
@property (nonatomic) CGFloat ratioOfCurated2siesAmongVisibleHighlights; // ivar: _ratioOfCurated2siesAmongVisibleHighlights
@property (nonatomic) CGFloat ratioOfCuratedAssets; // ivar: _ratioOfCuratedAssets
@property (nonatomic) CGFloat ratioOfCuratedAssetsCoveredInMonth; // ivar: _ratioOfCuratedAssetsCoveredInMonth
@property (nonatomic) CGFloat ratioOfCuratedAssetsInAggregations; // ivar: _ratioOfCuratedAssetsInAggregations
@property (nonatomic) CGFloat ratioOfCuratedAssetsInDefaultHighlights; // ivar: _ratioOfCuratedAssetsInDefaultHighlights
@property (nonatomic) CGFloat ratioOfCuratedAssetsInTrips; // ivar: _ratioOfCuratedAssetsInTrips
@property (nonatomic) CGFloat ratioOfDaysInAggregations; // ivar: _ratioOfDaysInAggregations
@property (nonatomic) CGFloat ratioOfDaysInTrips; // ivar: _ratioOfDaysInTrips
@property (nonatomic) CGFloat ratioOfDedupedAssets; // ivar: _ratioOfDedupedAssets
@property (nonatomic) CGFloat ratioOfDedupedAssetsInTrips; // ivar: _ratioOfDedupedAssetsInTrips
@property (nonatomic) CGFloat ratioOfDefaultDays; // ivar: _ratioOfDefaultDays
@property (nonatomic) CGFloat ratioOfGoldAssets; // ivar: _ratioOfGoldAssets
@property (nonatomic) CGFloat ratioOfHiddenDayHighlights; // ivar: _ratioOfHiddenDayHighlights
@property (nonatomic) CGFloat ratioOfPhotoKeyAssets; // ivar: _ratioOfPhotoKeyAssets
@property (nonatomic) CGFloat ratioOfProcessedFaces; // ivar: _ratioOfProcessedFaces
@property (nonatomic) CGFloat ratioOfProcessedScenes; // ivar: _ratioOfProcessedScenes
@property (nonatomic) CGFloat ratioOfRegularGemAssets; // ivar: _ratioOfRegularGemAssets
@property (nonatomic) CGFloat ratioOfShinyGemAssets; // ivar: _ratioOfShinyGemAssets
@property (nonatomic) CGFloat ratioOfUtilityAssets; // ivar: _ratioOfUtilityAssets
@property (nonatomic) CGFloat ratioOfUtilityAssetsInTrips; // ivar: _ratioOfUtilityAssetsInTrips
@property (nonatomic) CGFloat ratioOfVideoKeyAssets; // ivar: _ratioOfVideoKeyAssets
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (nonatomic) CGFloat topTierAestheticScore; // ivar: _topTierAestheticScore
@property (nonatomic) CGFloat topTierAestheticScoreForTripKeyAsset; // ivar: _topTierAestheticScoreForTripKeyAsset


+(id)librarySizeRangeDescriptionForLibrarySizeRange:(NSInteger)arg0 ;
-(CGFloat)_ratioFromNumerator:(NSUInteger)arg0 denominator:(NSUInteger)arg1 ;
-(NSUInteger)_debugNumberOfAssets;
-(id)_aggregationGroups;
-(id)_assetsStatisticsInHighlights:(id)arg0 photoLibrary:(id)arg1 includeUtility:(BOOL)arg2 ;
-(id)_dayHighlights;
-(id)_daysWithinAggregations;
-(id)_daysWithinTrips;
-(id)_defaultHightlights;
-(id)_longTripDayGroups;
-(id)_shortTripDayGroups;
-(id)identifier;
-(id)initWithGraphManager:(id)arg0 ;
-(id)payload;
-(id)utilityPredicate;
-(void)_fillAestheticAndBehavioralCurationStatisticsWithGraph:(id)arg0 ;
-(void)_fillContentScoreStatisticsWithGraph:(id)arg0 withProgressBlock:(id)arg1 ;
-(void)_fillDayHighlightsStatisticsWithGraph:(id)arg0 withProgressBlock:(id)arg1 ;
-(void)_fillGenericStatisticsWithGraph:(id)arg0 ;
-(void)_fillHiddenHighlightsStatisticsWithGraph:(id)arg0 ;
-(void)_fillKeyAssetsStatisticsWithGraph:(id)arg0 ;
-(void)_fillMomentsStatisticsWithGraph:(id)arg0 ;
-(void)_fillMonthHighlightsStatisticsWithGraph:(id)arg0 ;
-(void)_fillOnesiesHighlightStatisticsWithGraph:(id)arg0 ;
-(void)_fillProcessingLevelStatisticsWithGraph:(id)arg0 ;
-(void)_fillYearHighlightsStatisticsWithGraph:(id)arg0 ;
-(void)_saveKey:(id)arg0 doubleValue:(CGFloat)arg1 payload:(id)arg2 ;
-(void)_saveKey:(id)arg0 integerValue:(NSUInteger)arg1 payload:(id)arg2 ;
-(void)_saveKey:(id)arg0 stringValue:(id)arg1 payload:(id)arg2 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif