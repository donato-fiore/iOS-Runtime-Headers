// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGFULEVENTAGGREGATIONMEMORYGENERATOR_H
#define PGMEANINGFULEVENTAGGREGATIONMEMORYGENERATOR_H

@class NSDictionary, NSDate;


#import "PGFeaturedMemoryGenerator.h"

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator {
    NSUInteger _numberOfUntimelyRejects;
    NSUInteger _extendedMeaning;
    NSDictionary *_graphRequiredCriteriaByIdentifier;
}


@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (retain, nonatomic) NSDate *lowerBoundLocalDate; // ivar: _lowerBoundLocalDate
@property (nonatomic) NSUInteger meaning; // ivar: _meaning


+(NSUInteger)_extendedMeaningForActivityEvent:(id)arg0 ;
+(NSUInteger)_extendedMeaningForActivityMeaningLabel:(id)arg0 ;
+(NSUInteger)_extendedMeaningForMeaning:(NSUInteger)arg0 meaningfulEvent:(id)arg1 ;
+(NSUInteger)_extendedMeaningForRestaurantEvent:(id)arg0 ;
+(NSUInteger)_extendedMeaningForRestaurantMeaningLabel:(id)arg0 ;
+(id)_mostSpecificLabelForMeaning:(NSUInteger)arg0 ;
+(id)_nodesWithFeaturesOfType:(NSUInteger)arg0 fromMeaningfulEvent:(id)arg1 ;
+(id)extraFeatureNodesFromMeaningfulEvent:(id)arg0 meaning:(NSUInteger)arg1 featureType:(NSUInteger)arg2 ;
-(BOOL)_canMakeMemoryWithMeaningfulEvents:(id)arg0 forMeaning:(NSUInteger)arg1 isOverTheYears:(BOOL)arg2 ;
-(BOOL)_computeRelevantAssetsForPotentialMemory:(id)arg0 withGraph:(id)arg1 ;
-(BOOL)_supportsAggregationsForMeaning:(NSUInteger)arg0 primaryFeatureType:(NSUInteger)arg1 secondaryFeatureType:(NSUInteger)arg2 ;
-(id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg0 withGraph:(id)arg1 ;
-(id)_extraFeatureNodesFromMeaningfulEvent:(id)arg0 meaning:(NSUInteger)arg1 featureType:(NSUInteger)arg2 ;
-(id)_filteredAssetsFromAssetCollection:(id)arg0 throughCriteria:(id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(id)_potentialOverTheYearsMemoriesForMeaning:(NSUInteger)arg0 withGraph:(id)arg1 ;
-(id)_stringForExtendedMeaning:(NSUInteger)arg0 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif