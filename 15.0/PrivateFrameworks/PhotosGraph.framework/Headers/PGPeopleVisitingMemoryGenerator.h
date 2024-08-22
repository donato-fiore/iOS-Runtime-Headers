// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPEOPLEVISITINGMEMORYGENERATOR_H
#define PGPEOPLEVISITINGMEMORYGENERATOR_H



#import "PGFeaturedMemoryGenerator.h"

@interface PGPeopleVisitingMemoryGenerator : PGFeaturedMemoryGenerator



-(id)_potentialMemoriesForDryTesting;
-(id)consolidatedDateIntervalsFromDateIntervals:(id)arg0 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)enumeratePeopleNodesAndVisitsInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVerifiedPeopleNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif