// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGRECENTPASTEVENTSMEMORYGENERATOR_H
#define PGRECENTPASTEVENTSMEMORYGENERATOR_H

@class NSMutableArray, NSDate;


#import "PGMemoryGenerator.h"

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator {
    NSMutableArray *_potentialMemories;
}


@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate


-(id)_computePotentialMemoriesForPersonNodes:(id)arg0 inGraph:(id)arg1 ;
-(id)_computePotentialMemoriesForSubcategory:(NSUInteger)arg0 withGraph:(id)arg1 localStartDate:(id)arg2 localEndDate:(id)arg3 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg0 ;
-(id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithGraph:(id)arg0 localDate:(id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(id)generateMemories:(NSUInteger)arg0 ;
-(void)_computePotentialMemoriesWithGraph:(id)arg0 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif