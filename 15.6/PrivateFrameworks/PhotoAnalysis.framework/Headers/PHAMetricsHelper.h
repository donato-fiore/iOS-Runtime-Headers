// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAMETRICSHELPER_H
#define PHAMETRICSHELPER_H


#import <Foundation/Foundation.h>


@interface PHAMetricsHelper : NSObject



+(BOOL)shouldAggregateDataForReporting:(NSUInteger)arg0 ;
+(id)aggregatedStatsForMiroMoodCountVector:(id)arg0 ;
+(id)aggregatedStatsForMoodKeywordCountedSet:(id)arg0 ;
+(id)aggregatedStatsForPossibleMoodCountVector:(id)arg0 ;
+(id)aggregatedStatsForSuggestedMoodCountVector:(id)arg0 ;
+(id)dataAggregationKeyForCategory:(NSUInteger)arg0 subCategory:(NSUInteger)arg1 lookupTable:(id)arg2 ;
+(id)fullMemoryTypeStringForMemory:(id)arg0 withWorkingContext:(id)arg1 ;
+(id)legacyMemoryCategoryValueToDataAggregationKeyLookup;
+(id)memoryBlockableFeatureTypeValueToDataAggregationKeyLookup;
+(id)memoryBlockedFeatureTypeValueToDataAggregationKeyLookup;
+(id)memoryCategoryValueToDataAggregationKeyLookup;


@end


#endif