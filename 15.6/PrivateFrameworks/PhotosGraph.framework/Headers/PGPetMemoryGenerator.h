// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPETMEMORYGENERATOR_H
#define PGPETMEMORYGENERATOR_H



#import "PGFeaturedMemoryGenerator.h"

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator



-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(NSUInteger)durationForCuration;
-(NSUInteger)durationForExtendedCuration;
-(id)_potentialMemoriesForDryTesting;
-(id)confidenceThresholdByBlockedSceneIdentifier;
-(id)confidenceThresholdByWhitelistedSceneIdentifier;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg0 andYearPotentialMemories:(id)arg1 usingBlock:(id)arg2 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)_potentialPetMemoryForPet:(id)arg0 inGraph:(id)arg1 results:(id)arg2 ;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg0 andYearPotentialMemories:(id)arg1 rejectedNumbers:(struct ? *)arg2 enumerationBlock:(id)arg3 ;


@end


#endif