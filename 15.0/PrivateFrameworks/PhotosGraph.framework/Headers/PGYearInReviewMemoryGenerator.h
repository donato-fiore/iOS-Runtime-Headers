// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGYEARINREVIEWMEMORYGENERATOR_H
#define PGYEARINREVIEWMEMORYGENERATOR_H



#import "PGOverTimeMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGYearInReviewMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}


@property (nonatomic) NSInteger year; // ivar: _year


-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)_potentialMemoriesForDryTesting;
-(id)featuredYearConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)momentRequirements;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(id)titleGeneratorWithYear:(NSInteger)arg0 titleGenerationContext:(id)arg1 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif