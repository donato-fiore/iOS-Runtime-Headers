// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEAPPTOAPPMODIFIER_H
#define SBCONTINUOUSEXPOSEAPPTOAPPMODIFIER_H

@class NSDictionary;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeAppToAppModifier : SBTransitionSwitcherModifier {
    BOOL _shouldSendFromIdentifierToBack;
    BOOL _shouldSendToIdentifierToFront;
}


@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition; // ivar: _continuousExposeConfigurationChangeTransition
@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, copy, nonatomic) NSDictionary *fromDisplayItemLayoutAttributesMap; // ivar: _fromDisplayItemLayoutAttributesMap
@property (readonly, nonatomic) NSInteger fromInterfaceOrientation; // ivar: _fromInterfaceOrientation
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout
@property (readonly, copy, nonatomic) NSDictionary *toDisplayItemLayoutAttributesMap; // ivar: _toDisplayItemLayoutAttributesMap
@property (readonly, nonatomic) NSInteger toInterfaceOrientation; // ivar: _toInterfaceOrientation


-(BOOL)asyncRenderingDisabled;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(id)_layoutSettings;
-(id)adjustedContinuousExposeIdentifiersForIdentifiers:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 fromInterfaceOrientation:(NSInteger)arg2 toAppLayout:(id)arg3 toInterfaceOrientation:(NSInteger)arg4 fromDisplayItemLayoutAttributesMap:(id)arg5 toDisplayItemLayoutAttributesMap:(id)arg6 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif