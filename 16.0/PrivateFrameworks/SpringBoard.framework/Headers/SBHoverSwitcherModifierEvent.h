// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOVERSWITCHERMODIFIEREVENT_H
#define SBHOVERSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBHoverSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic) CGPoint position; // ivar: _position


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithPhase:(NSUInteger)arg0 position:(struct CGPoint )arg1 ;


@end


#endif