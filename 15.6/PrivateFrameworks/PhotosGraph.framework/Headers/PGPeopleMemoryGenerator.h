// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPEOPLEMEMORYGENERATOR_H
#define PGPEOPLEMEMORYGENERATOR_H

@class NSSet, NSString;


#import "PGFeaturedMemoryGenerator.h"

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSSet *birthdayPersonUUIDs; // ivar: _birthdayPersonUUIDs
@property (nonatomic) NSSet *extraFeatures; // ivar: _extraFeatures
@property (retain, nonatomic) NSString *peopleUUID; // ivar: _peopleUUID
@property (retain, nonatomic) NSSet *personNodes; // ivar: _personNodes
@property (nonatomic) NSInteger year; // ivar: _year


-(BOOL)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg0 ;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(NSUInteger)durationForCuration;
-(NSUInteger)durationForExtendedCuration;
-(id)_potentialMemoriesForDryTesting;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)_potentialMemoriesWithPeopleNode:(id)arg0 inYear:(NSInteger)arg1 result:(id)arg2 ;


@end


#endif