// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWANIMATIONSTYLEDIRECTIONAL_H
#define UIINPUTVIEWANIMATIONSTYLEDIRECTIONAL_H



#import "UIInputViewAnimationStyle.h"

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle

@property (nonatomic) int outDirection; // ivar: _outDirection


+(id)animationStyleAnimated:(BOOL)arg0 duration:(CGFloat)arg1 outDirection:(int)arg2 ;
-(BOOL)canDismissWithScrollView;
-(BOOL)isEqual:(id)arg0 ;
-(id)controllerForStartPlacement:(id)arg0 endPlacement:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endPlacementForInputViewSet:(id)arg0 windowScene:(id)arg1 ;
-(id)startPlacementForInputViewSet:(id)arg0 currentPlacement:(id)arg1 windowScene:(id)arg2 ;


@end


#endif