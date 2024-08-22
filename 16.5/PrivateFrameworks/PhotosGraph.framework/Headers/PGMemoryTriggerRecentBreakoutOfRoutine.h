// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYTRIGGERRECENTBREAKOUTOFROUTINE_H
#define PGMEMORYTRIGGERRECENTBREAKOUTOFROUTINE_H



#import "PGMemoryTrigger.h"
#import "PGNeighborScoreComputer.h"

@interface PGMemoryTriggerRecentBreakoutOfRoutine : PGMemoryTrigger {
    PGNeighborScoreComputer *_neighborScoreComputer;
}




-(NSUInteger)triggerType;
-(id)neighborScoreComputerWithGraph:(id)arg0 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif