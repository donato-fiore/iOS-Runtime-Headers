// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEAPPTOAPPMODIFIER_H
#define SBCONTINUOUSEXPOSEAPPTOAPPMODIFIER_H

@class NSArray, NSDictionary;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeAppToAppModifier : SBTransitionSwitcherModifier {
    NSArray *_displayItemsChangingSize;
}


@property (nonatomic, getter=isCommandTabTransition) BOOL commandTabTransition; // ivar: _commandTabTransition
@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition; // ivar: _continuousExposeConfigurationChangeTransition
@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, copy, nonatomic) NSDictionary *fromDisplayItemLayoutAttributesMap; // ivar: _fromDisplayItemLayoutAttributesMap
@property (readonly, nonatomic) NSInteger fromInterfaceOrientation; // ivar: _fromInterfaceOrientation
@property (nonatomic) BOOL isTopAffordanceMenuTransition; // ivar: _isTopAffordanceMenuTransition
@property (nonatomic, getter=isLaunchingFromDockTransition) BOOL launchingFromDockTransition; // ivar: _launchingFromDockTransition
@property (nonatomic, getter=isMorphFromInAppViewTransition) BOOL morphFromInAppViewTransition; // ivar: _morphFromInAppViewTransition
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout
@property (readonly, copy, nonatomic) NSDictionary *toDisplayItemLayoutAttributesMap; // ivar: _toDisplayItemLayoutAttributesMap
@property (readonly, nonatomic) NSInteger toInterfaceOrientation; // ivar: _toInterfaceOrientation


-(BOOL)asyncRenderingDisabled;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 fromInterfaceOrientation:(NSInteger)arg2 toAppLayout:(id)arg3 toInterfaceOrientation:(NSInteger)arg4 fromDisplayItemLayoutAttributesMap:(id)arg5 toDisplayItemLayoutAttributesMap:(id)arg6 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif