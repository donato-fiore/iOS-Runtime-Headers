// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGHEURISTICGEOTRACKING_H
#define ARCOACHINGHEURISTICGEOTRACKING_H



#import "ARCoachingHeuristic.h"

@interface ARCoachingHeuristicGeoTracking : ARCoachingHeuristic {
    NSInteger _requirements;
}




-(BOOL)satisfied;
-(NSInteger)requirements;
-(void)updateWithFrame:(id)arg0 cache:(id)arg1 ;


@end


#endif