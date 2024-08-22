// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYTRIGGERRECENTSYNDICATEDASSETS_H
#define PGMEMORYTRIGGERRECENTSYNDICATEDASSETS_H



#import "PGPhotoKitMemoryTrigger.h"
#import "PGMemoryMomentNodesWithBlockedFeatureCache.h"

@interface PGMemoryTriggerRecentSyndicatedAssets : PGPhotoKitMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache *_momentNodesWithBlockedFeatureCache;
}




-(BOOL)supportsFutureLookup;
-(NSUInteger)triggerType;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 momentNodesWithBlockedFeatureCache:(id)arg2 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif