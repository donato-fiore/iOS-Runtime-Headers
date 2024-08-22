// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPERSONOVERTIMEMEMORYGENERATOR_H
#define PGPERSONOVERTIMEMEMORYGENERATOR_H

@class NSString;


#import "PGFeaturedMemoryGenerator.h"

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    NSUInteger _numberOfInsufficientlyFacedRejects;
    NSUInteger _numberOfBuildFailureRejects;
}


@property (retain, nonatomic) NSString *personName; // ivar: _personName
@property (retain, nonatomic) NSString *personUUID; // ivar: _personUUID


-(NSUInteger)durationForExtendedCuration;
-(id)_computeOverTheTimeFacedAssetsForPersonLocalIdentifier:(id)arg0 inFacedAssets:(id)arg1 ignoresMinimumNumberOfAssets:(BOOL)arg2 numberOfInsufficientlyFacedRejects:(*NSUInteger)arg3 numberOfBuildFailureRejects:(*NSUInteger)arg4 progressReporter:(id)arg5 ;
-(id)_potentialMemoriesForDryTesting;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)peopleTitleGeneratorWithMomentNodes:(id)arg0 personNode:(id)arg1 titleGenerationContext:(id)arg2 ;
-(id)relevantCurationFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantCurationFeederForTriggeredMemory:(id)arg0 relevantFeeder:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(BOOL)arg3 progressReporter:(id)arg4 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif