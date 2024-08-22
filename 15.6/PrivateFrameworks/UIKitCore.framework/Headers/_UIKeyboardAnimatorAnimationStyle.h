// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDANIMATORANIMATIONSTYLE_H
#define _UIKEYBOARDANIMATORANIMATIONSTYLE_H

@protocol UIInputViewAnimationHost;


#import "UIInputViewAnimationStyle.h"
#import "_UIKeyboardAnimator.h"

@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle {
    _UIKeyboardAnimator *_animator;
    id<UIInputViewAnimationHost> *_currentHost;
    BOOL _currentFromPosition;
}




+(id)animationStyleWithAnimator:(id)arg0 ;
-(id)controllerForStartPlacement:(id)arg0 endPlacement:(id)arg1 ;
// -(void)defaultLaunchAnimation:(id)arg0 afterStarted:(unk)arg1 completion:(id)arg2  ;
// -(void)launchAnimation:(id)arg0 afterStarted:(unk)arg1 completion:(id)arg2 forHost:(unk)arg3 fromCurrentPosition:(id)arg4  ;


@end


#endif