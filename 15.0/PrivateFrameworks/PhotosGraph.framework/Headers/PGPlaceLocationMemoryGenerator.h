// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPLACELOCATIONMEMORYGENERATOR_H
#define PGPLACELOCATIONMEMORYGENERATOR_H

@class MABinaryAdjacency;


#import "PGOverTimeMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGPlaceLocationMemoryGenerator : PGOverTimeMemoryGenerator {
    MABinaryAdjacency *_addressNodesByCityNode;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}




-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRelevantAssetsForMomentNodes:(id)arg0 featureNodes:(id)arg1 ;
-(id)_addressNodesByCityNodeInGraph:(id)arg0 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)featuredYearConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)momentRequirements;
-(id)overTheYearsConfiguration;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif