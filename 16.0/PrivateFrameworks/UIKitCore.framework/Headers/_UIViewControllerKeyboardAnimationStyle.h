// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWCONTROLLERKEYBOARDANIMATIONSTYLE_H
#define _UIVIEWCONTROLLERKEYBOARDANIMATIONSTYLE_H



#import "UIInputViewAnimationStyleDirectional.h"
#import "_UIViewControllerTransitionContext.h"
#import "_UIViewControllerKeyboardAnimationStyleInfo.h"

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional

@property (nonatomic) BOOL allowCustomTransition; // ivar: _allowCustomTransition
@property (retain, nonatomic) _UIViewControllerTransitionContext *context; // ivar: _context
@property (nonatomic) BOOL disableAlongsideView; // ivar: _disableAlongsideView
@property (readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info; // ivar: _info


+(id)animationStyleWithContext:(id)arg0 useCustomTransition:(BOOL)arg1 ;
-(BOOL)canDismissWithScrollView;
-(BOOL)canTakeSnapshot;
-(BOOL)isAnimationCompleted;
-(BOOL)isEqual:(id)arg0 ;
-(id)controllerForStartPlacement:(id)arg0 endPlacement:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
// -(void)_launchAnimation:(id)arg0 afterStarted:(unk)arg1 completion:(id)arg2 forHost:(unk)arg3 fromCurrentPosition:(id)arg4  ;
// -(void)launchAnimation:(id)arg0 afterStarted:(unk)arg1 completion:(id)arg2 forHost:(unk)arg3 fromCurrentPosition:(id)arg4  ;


@end


#endif