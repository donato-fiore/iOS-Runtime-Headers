// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMIXEDGRIDHOMEGESTUREROOTSWITCHERMODIFIER_H
#define SBMIXEDGRIDHOMEGESTUREROOTSWITCHERMODIFIER_H

@class NSString;
@protocol SBChainableModifierDelegate;


#import "SBGestureRootSwitcherModifier.h"
#import "SBMixedGridSwitcherModifier.h"
#import "SBGestureSwitcherModifier.h"

@interface SBMixedGridHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier <SBChainableModifierDelegate>

 {
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    SBGestureSwitcherModifier *_gestureModifier;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canTransitionWithoutGestureModifier;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(NSInteger)gestureType;
-(id)_newMultitaskingModifier;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 mixedGridModifier:(id)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif