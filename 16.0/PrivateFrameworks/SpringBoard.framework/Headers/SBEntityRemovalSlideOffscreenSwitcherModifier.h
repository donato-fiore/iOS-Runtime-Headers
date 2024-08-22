// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBENTITYREMOVALSLIDEOFFSCREENSWITCHERMODIFIER_H
#define SBENTITYREMOVALSLIDEOFFSCREENSWITCHERMODIFIER_H

@class NSUUID;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"
#import "SBEntityRemovalToHomeSwitcherModifier.h"
#import "SBEntityRemovalDosidoSlideOutAnimationSettings.h"

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _isSecondStage;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    NSUInteger _direction;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
    SBEntityRemovalDosidoSlideOutAnimationSettings *_animationSettings;
}




-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 direction:(NSUInteger)arg2 animationSettings:(id)arg3 multitaskingModifier:(id)arg4 ;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif