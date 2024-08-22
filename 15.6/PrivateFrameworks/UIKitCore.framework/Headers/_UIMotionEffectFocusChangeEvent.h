// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMOTIONEFFECTFOCUSCHANGEEVENT_H
#define _UIMOTIONEFFECTFOCUSCHANGEEVENT_H

@class UIMotionEffectEvent;



@interface _UIMotionEffectFocusChangeEvent : UIMotionEffectEvent

@property (readonly, nonatomic) CGPoint focusPosition; // ivar: _focusPosition


-(CGFloat)velocityRelativeToPreviousEvent:(id)arg0 ;
-(id)copyWithTimestamp:(CGFloat)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 focusPosition:(struct CGPoint )arg1 ;


@end


#endif