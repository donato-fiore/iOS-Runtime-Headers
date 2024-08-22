// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWIPETOKILLSWITCHERMODIFIEREVENT_H
#define SBSWIPETOKILLSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) CGFloat decelerationTargetProgress; // ivar: _decelerationTargetProgress
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) CGPoint translation; // ivar: _translation


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 progress:(CGFloat)arg2 translation:(struct CGPoint )arg3 ;


@end


#endif