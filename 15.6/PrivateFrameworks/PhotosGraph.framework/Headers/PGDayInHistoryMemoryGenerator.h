// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGDAYINHISTORYMEMORYGENERATOR_H
#define PGDAYINHISTORYMEMORYGENERATOR_H

@class NSDate;


#import "PGMemoryGenerator.h"

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator

@property (nonatomic) BOOL ignoreLocalDate; // ivar: _ignoreLocalDate
@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate


-(id)_potentialMemoriesForDryTesting;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif