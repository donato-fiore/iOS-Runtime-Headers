// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTRIPMEMORYGENERATOR_H
#define PGTRIPMEMORYGENERATOR_H



#import "PGMemoryGenerator.h"

@interface PGTripMemoryGenerator : PGMemoryGenerator



-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)generateAllPotentialMemoriesWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(id)relevantKeyCurationFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;


@end


#endif