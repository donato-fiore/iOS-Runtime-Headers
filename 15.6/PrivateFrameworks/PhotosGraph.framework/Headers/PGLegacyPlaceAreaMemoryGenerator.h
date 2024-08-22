// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLEGACYPLACEAREAMEMORYGENERATOR_H
#define PGLEGACYPLACEAREAMEMORYGENERATOR_H

@class NSSet, NSString;


#import "PGFeaturedMemoryGenerator.h"

@interface PGLegacyPlaceAreaMemoryGenerator : PGFeaturedMemoryGenerator {
    NSSet *_supersetAddressNodes;
}


@property (nonatomic) NSString *area; // ivar: _area
@property (nonatomic) NSInteger year; // ivar: _year


+(id)areaNodesInterestingForMemoriesInGraph:(id)arg0 ;
-(NSUInteger)durationForCuration;
-(id)_potentialMemoriesForDryTesting;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)_potentialMemoriesWithAreaNode:(id)arg0 inYear:(NSInteger)arg1 result:(id)arg2 ;


@end


#endif