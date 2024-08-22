// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSEASONMEMORYGENERATOR_H
#define PGSEASONMEMORYGENERATOR_H



#import "PGOverTimeMemoryGenerator.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"
#import "PGMemoryMomentRequirements.h"

@interface PGSeasonMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGMemoryMomentRequirements *_momentRequirements;
}




+(void)enumerateMomentNodesBySeasonInYearFromMomentNodes:(id)arg0 loggingConnection:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)featuredSeasonConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)momentRequirements;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;
-(void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif