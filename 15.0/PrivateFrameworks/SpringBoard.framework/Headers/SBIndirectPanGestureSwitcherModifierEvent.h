// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINDIRECTPANGESTURESWITCHERMODIFIEREVENT_H
#define SBINDIRECTPANGESTURESWITCHERMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBIndirectPanGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) NSUInteger indirectPanEndReason; // ivar: _indirectPanEndReason


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif