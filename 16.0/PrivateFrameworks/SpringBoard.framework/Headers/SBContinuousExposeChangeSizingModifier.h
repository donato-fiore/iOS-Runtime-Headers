// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSECHANGESIZINGMODIFIER_H
#define SBCONTINUOUSEXPOSECHANGESIZINGMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeChangeSizingModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) NSUInteger layoutRoles; // ivar: _layoutRoles
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout


-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg0 toAppLayout:(id)arg1 layoutRoles:(NSUInteger)arg2 ;


@end


#endif