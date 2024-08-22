// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCOACHINGHEURISTICTRACKING_H
#define ARCOACHINGHEURISTICTRACKING_H



#import "ARCoachingHeuristic.h"

@interface ARCoachingHeuristicTracking : ARCoachingHeuristic {
    NSInteger _requirements;
}




-(BOOL)satisfied;
-(NSInteger)requirements;
-(void)updateWithFrame:(id)arg0 cache:(id)arg1 ;


@end


#endif