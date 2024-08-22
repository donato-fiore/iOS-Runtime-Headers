// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGOVERTIMEMEMORYGENERATOR_H
#define PGOVERTIMEMEMORYGENERATOR_H

@class NSMutableDictionary;


#import "PGMemoryGenerator.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"
#import "PGMemoryMomentRequirements.h"
#import "PGOverTheYearsMemoryConfiguration.h"

@interface PGOverTimeMemoryGenerator : PGMemoryGenerator {
    PGGraphMomentNodeCollection *_interestingForMemoriesMomentNodes;
    NSMutableDictionary *_yearByYearNodeIdentifier;
}


@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration; // ivar: _featuredSeasonConfiguration
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration; // ivar: _featuredYearConfiguration
@property (readonly, nonatomic) BOOL intersectRelevantAssetsForFeatures; // ivar: _intersectRelevantAssetsForFeatures
@property (readonly, nonatomic) NSUInteger memoryCategory;
@property (readonly, nonatomic) PGMemoryMomentRequirements *momentRequirements; // ivar: _momentRequirements
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration; // ivar: _overTheYearsConfiguration
@property (readonly, nonatomic) BOOL requireFaceProcessingMeetsThresholdOverTime; // ivar: _requireFaceProcessingMeetsThresholdOverTime
@property (readonly, nonatomic) BOOL requireSceneProcessingMeetsThresholdOverTime; // ivar: _requireSceneProcessingMeetsThresholdOverTime


-(BOOL)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)arg0 featureNodes:(id)arg1 ;
-(BOOL)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)arg0 configuration:(id)arg1 ;
-(BOOL)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)arg0 featureNodes:(id)arg1 inYear:(NSInteger)arg2 ;
-(BOOL)_shouldCreateMemoryForMomentNodes:(id)arg0 featureNodes:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)arg0 featureNodes:(id)arg1 ;
-(NSInteger)_yearForYearNodeAsCollection:(id)arg0 ;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRelevantAssetsForMomentNodes:(id)arg0 featureNodes:(id)arg1 ;
-(id)_filteredMomentNodesFromMomentNodes:(id)arg0 featureNodes:(id)arg1 ;
-(id)_interestingForMemoriesSubsetFromMomentNodes:(id)arg0 ;
-(id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)arg0 ;
-(id)generateAllPotentialMemoriesWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif