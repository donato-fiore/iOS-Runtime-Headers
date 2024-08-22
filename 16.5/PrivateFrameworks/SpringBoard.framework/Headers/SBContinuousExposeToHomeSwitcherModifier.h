// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSETOHOMESWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSETOHOMESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppSwitcherContinuousExposeSwitcherModifier.h"

@interface SBContinuousExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppSwitcherContinuousExposeSwitcherModifier *_continuousExposeModifier;
}




-(BOOL)_isEffectivelyHome;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)_newContinuousExposeModifier;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 continuousExposeModifier:(id)arg2 ;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;


@end


#endif