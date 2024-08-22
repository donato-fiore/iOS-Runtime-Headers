// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSTATEDEACTIVATING_H
#define ARCOACHINGSTATEDEACTIVATING_H



#import "ARCoachingState.h"

@interface ARCoachingStateDeactivating : ARCoachingState {
    ARCoachingState *_nextState;
}




-(BOOL)isViewActiveForState;
-(id)doAction:(NSInteger)arg0 ;
-(void)enter;


@end


#endif