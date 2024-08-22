// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTIMERSWITCHERMODIFIEREVENT_H
#define SBTIMERSWITCHERMODIFIEREVENT_H

@class NSString;


#import "SBSwitcherModifierEvent.h"

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithReason:(id)arg0 ;


@end


#endif