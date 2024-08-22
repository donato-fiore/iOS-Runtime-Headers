// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OVERALLMEMORYUSAGE_H
#define OVERALLMEMORYUSAGE_H


#import <Foundation/Foundation.h>


@interface OverallMemoryUsage : NSObject



+(id)accumulateMemoryAcrossPrioritiesWithFootprints:(id)arg0 withComparator:(id)arg1 ;
-(id)init;
-(id)memoryAvailableAtOrBelowEachPriority;
-(id)memoryUsageAtEachPriority;
-(id)memoryUsedAtOrAboveEachPriority;
-(id)systemMemoryStatsDictionary;
-(void)addProcessFootprint:(NSUInteger)arg0 withPriority:(int)arg1 ;


@end


#endif