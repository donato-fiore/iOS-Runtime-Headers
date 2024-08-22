// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGTRENDSMEMORYGENERATOR_H
#define PGTRENDSMEMORYGENERATOR_H

@class NSArray;


#import "PGOverTimeMemoryGenerator.h"
#import "PGGraphSceneFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGTrendsMemoryGenerator : PGOverTimeMemoryGenerator {
    PGGraphSceneFeatureNodeCollection *_allTrendsSceneFeatureNodesInGraph;
    PGGraphMomentNodeCollection *_winterSportMomentNodes;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    NSUInteger _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGOverTheYearsMemoryConfiguration *_fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_fallbackFeaturedYearConfiguration;
}


@property (readonly, nonatomic) NSArray *configurations; // ivar: _configurations


+(id)allTrendSceneFeatureLabels;
+(id)trendsConfigurations;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)durationForExtendedCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(NSUInteger)minimumNumberOfDefaultMemories;
-(id)_trendSceneFeatureLabelsToRequireKnownPeopleInCuration;
-(id)allTrendSceneFeatureNodesInGraph:(id)arg0 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)fallbackFeaturedYearConfiguration;
-(id)fallbackOverTheYearsConfiguration;
-(id)featuredYearConfiguration;
-(id)filteredMomentNodes:(id)arg0 withSceneLabel:(id)arg1 inGraph:(id)arg2 ;
-(id)initWithMemoryGenerationContext:(id)arg0 configurations:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)momentRequirements;
-(id)overTheYearsConfiguration;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(id)trendType;
-(id)validSceneFeatureNodesInGraph:(id)arg0 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setMinimumNumberOfDefaultMemories:(NSUInteger)arg0 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;
-(void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif