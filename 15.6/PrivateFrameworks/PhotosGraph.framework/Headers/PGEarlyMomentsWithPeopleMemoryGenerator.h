// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGEARLYMOMENTSWITHPEOPLEMEMORYGENERATOR_H
#define PGEARLYMOMENTSWITHPEOPLEMEMORYGENERATOR_H

@class NSDate;


#import "PGMemoryGenerator.h"

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate
@property (nonatomic) BOOL shouldGenerateAllMemories; // ivar: _shouldGenerateAllMemories


+(NSUInteger)numberOfPotentialMemoriesForGraph:(id)arg0 ;
+(id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)arg0 ;
-(id)_potentialMemoriesForDryTesting;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg0 withGraph:(id)arg1 usingBlock:(id)arg2 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif