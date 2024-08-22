// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBITEMRESIZEGESTURESWITCHERMODIFIEREVENT_H
#define SBITEMRESIZEGESTURESWITCHERMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBItemResizeGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) NSUInteger selectedEdge; // ivar: _selectedEdge
@property (nonatomic) NSInteger selectedLayoutRole; // ivar: _selectedLayoutRole


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif