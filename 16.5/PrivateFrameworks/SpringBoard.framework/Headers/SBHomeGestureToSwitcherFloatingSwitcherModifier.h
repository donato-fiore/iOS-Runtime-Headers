// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTURETOSWITCHERFLOATINGSWITCHERMODIFIER_H
#define SBHOMEGESTURETOSWITCHERFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBFluidSwitcherAnimationSettings.h"
#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier

@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // ivar: _animationSettings
@property (retain, nonatomic) SBSwitcherModifier *multitaskingModifier; // ivar: _multitaskingModifier
@property (retain, nonatomic) SBAppLayout *selectedAppLayout; // ivar: _selectedAppLayout


-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 multitaskingModifier:(id)arg1 selectedAppLayout:(id)arg2 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif