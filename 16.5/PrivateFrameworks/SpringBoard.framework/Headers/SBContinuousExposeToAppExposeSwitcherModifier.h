// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSETOAPPEXPOSESWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSETOAPPEXPOSESWITCHERMODIFIER_H

@class NSString, NSSet;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppExposeContinuousExposeSwitcherModifier.h"

@interface SBContinuousExposeToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeContinuousExposeSwitcherModifier *_appExposeModifier;
    NSString *_timerReason;
    NSSet *_appLayoutsVisibleBeforeTransition;
}


@property (readonly, copy, nonatomic) NSString *appExposeBundleID; // ivar: _appExposeBundleID
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction


-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appExposeBundleID:(id)arg1 direction:(NSUInteger)arg2 appExposeModifier:(id)arg3 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif