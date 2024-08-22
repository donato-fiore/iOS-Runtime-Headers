// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYTRIGGERUPCOMINGPERSONCENTRICHOLIDAY_H
#define PGMEMORYTRIGGERUPCOMINGPERSONCENTRICHOLIDAY_H



#import "PGHolidayMemoryTrigger.h"
#import "PGGraphMemoryNodeCollection.h"

@interface PGMemoryTriggerUpcomingPersonCentricHoliday : PGHolidayMemoryTrigger {
    PGGraphMemoryNodeCollection *_allSingleMomentMemoryNodes;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithPartner;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithMother;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithFather;
}




-(NSUInteger)triggerType;
-(id)allSingleMomentMemoryNodesInGraph:(id)arg0 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)singleMomentMemoryNodesWithRelevantPersonNodes:(id)arg0 inGraph:(id)arg1 ;


@end


#endif