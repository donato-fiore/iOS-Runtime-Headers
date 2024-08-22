// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCELEBRATIONOVERTIMEMEMORYGENERATOR_H
#define PGCELEBRATIONOVERTIMEMEMORYGENERATOR_H

@class NSDate, NSSet;


#import "PGMemoryGenerator.h"

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate
@property (retain, nonatomic) NSSet *upcomingHolidayNames; // ivar: _upcomingHolidayNames


-(id)_holidayNodeForMomentNodes:(id)arg0 ;
-(id)_potentialMemoriesForDryTesting;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif