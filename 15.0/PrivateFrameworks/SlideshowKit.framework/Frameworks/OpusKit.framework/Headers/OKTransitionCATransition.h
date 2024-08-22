// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKTRANSITIONCATRANSITION_H
#define OKTRANSITIONCATRANSITION_H

@class CATransition;


#import "OKTransitionParallaxPush.h"

@interface OKTransitionCATransition : OKTransitionParallaxPush {
    CATransition *_transition;
}




-(id)animation;
-(void)_transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 wasInteractive:(BOOL)arg3 duration:(CGFloat)arg4 doEaseIn:(BOOL)arg5 doEaseOut:(BOOL)arg6 isCompleting:(BOOL)arg7 wasCancelled:(BOOL)arg8 fromProgress:(CGFloat)arg9 completionHandler:(id)arg10 ;
-(void)dealloc;
-(void)prepareInView:(id)arg0 ;


@end


#endif