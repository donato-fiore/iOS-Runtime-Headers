// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYTRIGGERRECENTTRENDSMOMENT_H
#define PGMEMORYTRIGGERRECENTTRENDSMOMENT_H



#import "PGMemoryTrigger.h"
#import "PGGraphSceneFeatureNodeCollection.h"

@interface PGMemoryTriggerRecentTrendsMoment : PGMemoryTrigger {
    PGGraphSceneFeatureNodeCollection *_trendsSceneFeatureNodes;
}




-(NSUInteger)triggerType;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)trendsSceneFeatureNodesInGraph:(id)arg0 ;


@end


#endif