// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGESTUREROOTSWITCHERMODIFIER_H
#define SBHOMEGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}


@property (nonatomic) BOOL resignsTransitionIntoAppSwitcher; // ivar: _resignsTransitionIntoAppSwitcher


-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(NSInteger)gestureType;
-(id)_newMultitaskingModifier;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 multitaskingModifier:(id)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif