// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYTRIGGERRECENTHIGHLIGHTS_H
#define PGMEMORYTRIGGERRECENTHIGHLIGHTS_H



#import "PGMemoryTrigger.h"
#import "PGMemoryMomentNodesWithBlockedFeatureCache.h"

@interface PGMemoryTriggerRecentHighlights : PGMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache *_momentNodesWithBlockedFeatureCache;
}




-(NSUInteger)triggerType;
-(id)initWithLoggingConnection:(id)arg0 momentNodesWithBlockedFeatureCache:(id)arg1 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif