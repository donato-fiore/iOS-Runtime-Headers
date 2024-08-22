// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHOMEAGGREGATIONMEMORYGENERATOR_H
#define PGHOMEAGGREGATIONMEMORYGENERATOR_H

@class NSDate;


#import "PGFeaturedMemoryGenerator.h"

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *localDate; // ivar: _localDate


+(NSUInteger)numberOfPotentialMemoriesWithGraph:(id)arg0 ;
+(id)_monthNodeForMomentNode:(id)arg0 ;
-(id)_lastMonthPotentialMemoriesWithGraph:(id)arg0 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif