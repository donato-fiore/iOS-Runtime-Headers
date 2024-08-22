// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCHILDANDPERSONMEMORYGENERATOR_H
#define PGCHILDANDPERSONMEMORYGENERATOR_H



#import "PGOverTimeMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGChildAndPersonMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    NSUInteger _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGOverTheYearsMemoryConfiguration *_fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_fallbackFeaturedYearConfiguration;
}




-(BOOL)intersectRelevantAssetsForFeatures;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(NSUInteger)minimumNumberOfDefaultMemories;
-(id)_twoPersonNodeCollectionsFromSocialGroupMemoryNodesInGraph:(id)arg0 ;
-(id)fallbackFeaturedYearConfiguration;
-(id)fallbackOverTheYearsConfiguration;
-(id)featuredYearConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)momentRequirements;
-(id)overTheYearsConfiguration;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setMinimumNumberOfDefaultMemories:(NSUInteger)arg0 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;
-(void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif