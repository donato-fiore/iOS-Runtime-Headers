// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSTATEHIDDEN_H
#define ARCOACHINGSTATEHIDDEN_H



#import "ARCoachingState.h"

@interface ARCoachingStateHidden : ARCoachingState {
    CGFloat _autoActivateTime;
    BOOL _minimumWaitComplete;
}




-(BOOL)isViewActiveForState;
-(id)doAction:(NSInteger)arg0 ;
-(void)enter;
-(void)exit;


@end


#endif