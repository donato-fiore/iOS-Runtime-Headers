// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTHROWBACKTHURSDAYMEMORYGENERATOR_H
#define PGTHROWBACKTHURSDAYMEMORYGENERATOR_H

@class NSDate;


#import "PGFeaturedMemoryGenerator.h"

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain) NSDate *localDate; // ivar: _localDate


-(id)_oldWeekInHistoryMomentNodesForLocalDate:(id)arg0 inGraph:(id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif