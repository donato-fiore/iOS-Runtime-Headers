// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHIGHLIGHTSWITCHERMODIFIEREVENT_H
#define SBHIGHLIGHTSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBHighlightSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic, getter=isHoverEvent) BOOL hoverEvent; // ivar: _hoverEvent
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 phase:(NSUInteger)arg2 hover:(BOOL)arg3 ;


@end


#endif