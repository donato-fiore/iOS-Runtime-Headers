// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSTATERELOCALIZING_H
#define ARCOACHINGSTATERELOCALIZING_H



#import "ARCoachingState.h"
#import "ARCoachingHeuristicCollection.h"

@interface ARCoachingStateRelocalizing : ARCoachingState {
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}




-(NSInteger)requirements;
-(id)doAction:(NSInteger)arg0 ;
-(id)initWithView:(id)arg0 ;
-(void)enter;


@end


#endif