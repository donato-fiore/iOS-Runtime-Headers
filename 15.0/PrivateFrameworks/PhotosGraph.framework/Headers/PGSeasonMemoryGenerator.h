// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSEASONMEMORYGENERATOR_H
#define PGSEASONMEMORYGENERATOR_H

@class NSDate;


#import "PGOverTimeMemoryGenerator.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"
#import "PGMemoryMomentRequirements.h"

@interface PGSeasonMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGMemoryMomentRequirements *_momentRequirements;
}


@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isMoment:(id)arg0 duringSeason:(id)arg1 ;
+(NSUInteger)numberOfPotentialMemoriesWithGraph:(id)arg0 ;
+(id)seasonNodeForMomentNode:(id)arg0 ;
+(void)enumerateMomentNodesBySeasonInYearFromMomentNodes:(id)arg0 loggingConnection:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(BOOL)requireSceneProcessingMeetsThresholdOverTime;
-(NSUInteger)durationForCuration;
-(NSUInteger)memoryCategory;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)_lastSeasonPotentialMemoryWithGraph:(id)arg0 ;
-(id)_potentialMemoriesForDryTesting;
-(id)_potentialMemoryForMomentNodes:(id)arg0 seasonNode:(id)arg1 category:(NSUInteger)arg2 ;
-(id)_seasonInHistoryPotentialMemoriesWithGraph:(id)arg0 ;
-(id)featuredSeasonConfiguration;
-(id)initWithController:(id)arg0 ;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)momentRequirements;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)lastSeasonMomentNodesForLocalDate:(id)arg0 inGraph:(id)arg1 resultBlock:(id)arg2 ;
-(void)seasonInHistoryMomentNodesForLocalDate:(id)arg0 inGraph:(id)arg1 resultBlock:(id)arg2 ;


@end


#endif