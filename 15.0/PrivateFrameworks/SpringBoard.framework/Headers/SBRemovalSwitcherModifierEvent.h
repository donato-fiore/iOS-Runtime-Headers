// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOVALSWITCHERMODIFIEREVENT_H
#define SBREMOVALSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 reason:(NSInteger)arg2 phase:(NSUInteger)arg3 ;


@end


#endif