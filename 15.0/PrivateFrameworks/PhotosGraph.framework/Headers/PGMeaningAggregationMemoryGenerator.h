// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGAGGREGATIONMEMORYGENERATOR_H
#define PGMEANINGAGGREGATIONMEMORYGENERATOR_H



#import "PGOverTimeMemoryGenerator.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"

@interface PGMeaningAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}


@property (retain, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration; // ivar: _featuredYearConfiguration
@property (retain, nonatomic) PGMemoryMomentRequirements *momentRequirements; // ivar: _momentRequirements
@property (retain, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration; // ivar: _overTheYearsConfiguration


+(id)allMeaningAggregationMemoryGeneratorClasses;
+(id)featureRelationWithMeaningLabel:(id)arg0 ;
+(id)requiredFeatureRelation;
+(id)supportedMeaningLabels;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif