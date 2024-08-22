// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLEGACYTRIPMEMORYGENERATOR_H
#define PGLEGACYTRIPMEMORYGENERATOR_H

@class NSDate;


#import "PGFeaturedMemoryGenerator.h"
#import "PGGraphHighlightGroupNode.h"

@interface PGLegacyTripMemoryGenerator : PGFeaturedMemoryGenerator {
    NSUInteger _numberOfUntimelyRejects;
}


@property (retain, nonatomic) NSDate *lowerBoundLocalDate; // ivar: _lowerBoundLocalDate
@property (readonly) NSUInteger subcategory; // ivar: _subcategory
@property (retain, nonatomic) PGGraphHighlightGroupNode *tripNode; // ivar: _tripNode


-(id)_potentialMemoriesForDryTesting;
-(id)_tripNodeForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)initWithSubcategory:(NSUInteger)arg0 controller:(id)arg1 ;
-(id)potentialMemoryWithTripNode:(id)arg0 subcategory:(NSUInteger)arg1 graph:(id)arg2 ;
-(id)relevantKeyCurationFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantKeyCurationFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif