// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYCONTROLLERCONSTANTS_H
#define PGMEMORYCONTROLLERCONSTANTS_H


#import <Foundation/Foundation.h>


@interface PGMemoryControllerConstants : NSObject



+(CGFloat)recentExclusionSpanBasedOnFeaturedSubcategory;
+(CGFloat)recentExclusionSpanBasedOnFeaturedSubcategoryAndFeatureVector;
+(CGFloat)recentExclusionSpanBetweenTripsWeekendsAndConstituentMoments;
+(CGFloat)recentExclusionSpanForContextualAgainstContextual;
+(CGFloat)recentExclusionSpanForContextualAgainstNonContextual;
+(CGFloat)recentExclusionSpanForInHistoryMemoryCategories;
+(CGFloat)recentExclusionSpanForMeaningfulAggregationAfterSameMeaningMemory;
+(CGFloat)recentExclusionSpanForRecentPastAndUpcoming;
+(CGFloat)recentExclusionSpanForTimeCategories;
+(CGFloat)recentExclusionSpanForWeekInHistory;
+(CGFloat)recentExclusionSpanForYearSummary;
+(CGFloat)recentExclusionSpanForZeroOverlap;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysBasedOnFeaturedSubcategory;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysBasedOnFeaturedSubcategoryAndFeatureVector;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForMeaningfulAggregationAfterSameMeaningMemory;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForNonExclusionBetweenTripsWeekendsAndConstituentMoments;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForNonExclusionOfContextualAgainstContextual;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForNonExclusionOfContextualAgainstNonContextual;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForNonExclusionOfInHistoryMemoryCategories;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForNonExclusionOfOverlappingMemories;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForRecentPastAndUpcoming;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForTimeCategories;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForWeekInHistory;
+(NSUInteger)minimumNumberOfMemoryGenerationDaysForYearSummary;


@end


#endif