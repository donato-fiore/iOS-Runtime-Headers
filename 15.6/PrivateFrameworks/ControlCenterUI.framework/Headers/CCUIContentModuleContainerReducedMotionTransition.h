// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUICONTENTMODULECONTAINERREDUCEDMOTIONTRANSITION_H
#define CCUICONTENTMODULECONTAINERREDUCEDMOTIONTRANSITION_H

@class UIWindow, UIView;


#import "CCUIContentModuleContainerTransition.h"

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition

@property (nonatomic) CGAffineTransform snapshotCorrectiveTransform; // ivar: _snapshotCorrectiveTransform
@property (weak, nonatomic) UIWindow *snapshotHostWindow; // ivar: _snapshotHostWindow
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView


-(id)customAnimator;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;


@end


#endif