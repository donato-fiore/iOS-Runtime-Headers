// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGDAYINHISTORYAGGREGATIONMEMORYGENERATOR_H
#define PGDAYINHISTORYAGGREGATIONMEMORYGENERATOR_H



#import "PGOverTimeMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGDayInHistoryAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}




-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)chapterTitleGeneratorForTriggeredMemory:(id)arg0 curatedAssets:(id)arg1 extendedCuratedAssets:(id)arg2 titleGenerationContext:(id)arg3 inGraph:(id)arg4 ;
-(id)featuredYearConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)momentRequirements;
-(id)overTheYearsConfiguration;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;
-(void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif