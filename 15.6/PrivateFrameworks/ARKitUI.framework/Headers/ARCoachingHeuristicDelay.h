// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGHEURISTICDELAY_H
#define ARCOACHINGHEURISTICDELAY_H



#import "ARCoachingHeuristic.h"

@interface ARCoachingHeuristicDelay : ARCoachingHeuristic {
    CGFloat _endTime;
    CGFloat _duration;
}




-(NSInteger)requirements;
-(id)initWithDuration:(CGFloat)arg0 ;
-(void)updateWithFrame:(id)arg0 cache:(id)arg1 ;


@end


#endif