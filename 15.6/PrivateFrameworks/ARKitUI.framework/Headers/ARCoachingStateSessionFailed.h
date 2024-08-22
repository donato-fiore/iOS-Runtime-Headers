// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGSTATESESSIONFAILED_H
#define ARCOACHINGSTATESESSIONFAILED_H



#import "ARCoachingState.h"
#import "ARCoachingHeuristicCollection.h"

@interface ARCoachingStateSessionFailed : ARCoachingState {
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}




-(NSInteger)requirements;
-(id)doAction:(NSInteger)arg0 ;
-(id)initWithView:(id)arg0 ;
-(void)enter;


@end


#endif