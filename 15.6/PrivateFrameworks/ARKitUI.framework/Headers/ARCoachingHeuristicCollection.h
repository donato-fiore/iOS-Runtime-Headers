// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGHEURISTICCOLLECTION_H
#define ARCOACHINGHEURISTICCOLLECTION_H

@class NSMutableArray;


#import "ARCoachingHeuristic.h"

@interface ARCoachingHeuristicCollection : ARCoachingHeuristic {
    NSMutableArray *_heuristics;
}




-(NSInteger)requirements;
-(id)init;
-(void)addHeuristic:(id)arg0 ;
-(void)clear;
-(void)updateWithFrame:(id)arg0 cache:(id)arg1 ;


@end


#endif