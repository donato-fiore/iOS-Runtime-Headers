// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLZOOMTRANSITIONDRIVER_H
#define QLZOOMTRANSITIONDRIVER_H

@class UIView;


#import "QLTransitionDriver.h"

@interface QLZoomTransitionDriver : QLTransitionDriver {
    UIView *_uncroppedView;
}




+(void)cropView:(id)arg0 toAvoidNavigationOffset:(CGFloat)arg1 presenting:(BOOL)arg2 animationDuration:(CGFloat)arg3 ;
-(void)_performZoomTransition;
-(void)animateTransition;
-(void)tearDown;


@end


#endif