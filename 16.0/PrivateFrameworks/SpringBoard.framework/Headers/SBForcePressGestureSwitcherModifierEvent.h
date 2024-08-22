// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFORCEPRESSGESTURESWITCHERMODIFIEREVENT_H
#define SBFORCEPRESSGESTURESWITCHERMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBForcePressGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) CGFloat forcePercent; // ivar: _forcePercent


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif