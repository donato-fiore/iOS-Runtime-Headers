// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUIPHYSICALBUTTONVIEWBOUNCEANIMATION_H
#define LAUIPHYSICALBUTTONVIEWBOUNCEANIMATION_H



#import "LAUIPhysicalButtonViewAnimation.h"

@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation {
    CGFloat _lastLength;
}




-(CGFloat)_currentLength;
-(CGFloat)duration;
-(void)_animateWithLength:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)beginWithDelay:(CGFloat)arg0 ;
-(void)update;


@end


#endif