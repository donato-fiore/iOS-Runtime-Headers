// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKTRANSITIONCUT_H
#define OKTRANSITIONCUT_H



#import "OKTransition.h"

@interface OKTransitionCut : OKTransition



-(void)_transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 wasInteractive:(BOOL)arg3 duration:(CGFloat)arg4 doEaseIn:(BOOL)arg5 doEaseOut:(BOOL)arg6 isCompleting:(BOOL)arg7 wasCancelled:(BOOL)arg8 fromProgress:(CGFloat)arg9 completionHandler:(id)arg10 ;
-(void)startInteractiveTransitionWithContext:(id)arg0 ;
-(void)updateInteractiveTransitionWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;


@end


#endif