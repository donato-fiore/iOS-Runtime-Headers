// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYTRIGGERRECENTMEANINGFULEVENT_H
#define PGMEMORYTRIGGERRECENTMEANINGFULEVENT_H



#import "PGMemoryTrigger.h"

@interface PGMemoryTriggerRecentMeaningfulEvent : PGMemoryTrigger



-(NSUInteger)triggerType;
-(id)meaningNodesSupportedForTriggerInGraph:(id)arg0 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif