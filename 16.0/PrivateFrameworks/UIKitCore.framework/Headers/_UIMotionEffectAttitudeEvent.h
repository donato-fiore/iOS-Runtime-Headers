// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMOTIONEFFECTATTITUDEEVENT_H
#define _UIMOTIONEFFECTATTITUDEEVENT_H

@class UIMotionEffectEvent;



@interface _UIMotionEffectAttitudeEvent : UIMotionEffectEvent

@property (readonly, nonatomic) ? attitude; // ivar: _attitude


-(CGFloat)velocityRelativeToPreviousEvent:(id)arg0 ;
-(id)copyWithTimestamp:(CGFloat)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 attitude:(struct ? )arg1 ;


@end


#endif