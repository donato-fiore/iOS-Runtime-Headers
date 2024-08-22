// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSOCIALGROUPOVERTIMEMEMORYGENERATOR_H
#define PGSOCIALGROUPOVERTIMEMEMORYGENERATOR_H



#import "PGFeaturedMemoryGenerator.h"

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    NSUInteger _numberOfInsufficientlyFacedRejects;
    NSUInteger _numberOfBuildFailureRejects;
}


@property (nonatomic) NSInteger socialGroupID; // ivar: _socialGroupID


-(NSUInteger)durationForExtendedCuration;
-(id)_computeOverTheTimeFacedAssetsForPersonLocalIdentifiers:(id)arg0 inFacedAssets:(id)arg1 progressBlock:(id)arg2 ;
-(id)_facedAssetsForMomentNode:(id)arg0 personLocalIdentifiers:(id)arg1 progressBlock:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)peopleTitleGeneratorWithMomentNodes:(id)arg0 personNodes:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)relevantCurationFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantCurationFeederForTriggeredMemory:(id)arg0 relevantFeeder:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(BOOL)arg3 progressReporter:(id)arg4 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif