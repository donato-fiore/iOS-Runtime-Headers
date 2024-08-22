// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGLASTMONTHATHOMEMEMORYGENERATOR_H
#define PGLASTMONTHATHOMEMEMORYGENERATOR_H



#import "PGMemoryGenerator.h"

@interface PGLastMonthAtHomeMemoryGenerator : PGMemoryGenerator



+(id)lastMonthAtHomeMemoriesForMonth:(NSInteger)arg0 year:(NSInteger)arg1 inGraph:(id)arg2 momentNodesWithBlockedFeatureCache:(id)arg3 photoLibrary:(id)arg4 loggingConnection:(id)arg5 progressReporter:(id)arg6 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;


@end


#endif