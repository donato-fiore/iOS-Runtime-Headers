// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYTRIGGERFEATURECENTRICHOLIDAY_H
#define PGMEMORYTRIGGERFEATURECENTRICHOLIDAY_H



#import "PGHolidayMemoryTrigger.h"

@interface PGMemoryTriggerFeatureCentricHoliday : PGHolidayMemoryTrigger



+(id)_relationshipForHolidayName:(id)arg0 ;
-(NSUInteger)triggerType;
-(id)personNodesForRelationship:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif