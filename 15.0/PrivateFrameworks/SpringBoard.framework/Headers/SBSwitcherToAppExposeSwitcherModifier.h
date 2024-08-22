// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERTOAPPEXPOSESWITCHERMODIFIER_H
#define SBSWITCHERTOAPPEXPOSESWITCHERMODIFIER_H

@class NSSet;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppExposeGridSwitcherModifier.h"

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    NSSet *_appLayoutsVisibleBeforeTransition;
}




-(CGFloat)_offsetForPushingCardsOffscreenAtIndex:(NSUInteger)arg0 ;
-(id)_newAppExposeModifier;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 bundleIdentifier:(id)arg1 appExposeModifier:(id)arg2 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif