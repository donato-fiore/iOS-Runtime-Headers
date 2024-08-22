// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWADDITIVEANIMATIONACTION_H
#define _UIVIEWADDITIVEANIMATIONACTION_H

@class CAAnimation;
@protocol CAAction;

#import <Foundation/Foundation.h>

#import "UIViewPropertyAnimator.h"
#import "UIView.h"

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction>



@property (readonly, retain, nonatomic) UIViewPropertyAnimator *animationObject; // ivar: _animationObject
@property (readonly, retain, nonatomic) CAAnimation *pendingAnimation; // ivar: _pendingAnimation
@property (readonly, retain, nonatomic) UIView *view; // ivar: _view


-(id)initWithPendingAnimation:(id)arg0 withAnimationObject:(id)arg1 forView:(id)arg2 ;
-(void)runActionForKey:(id)arg0 object:(id)arg1 arguments:(id)arg2 ;


@end


#endif