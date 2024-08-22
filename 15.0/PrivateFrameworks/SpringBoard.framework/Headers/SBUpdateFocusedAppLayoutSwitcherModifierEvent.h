// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUPDATEFOCUSEDAPPLAYOUTSWITCHERMODIFIEREVENT_H
#define SBUPDATEFOCUSEDAPPLAYOUTSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBUpdateFocusedAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic, getter=isFocused) BOOL focused; // ivar: _focused


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 focused:(BOOL)arg1 ;


@end


#endif