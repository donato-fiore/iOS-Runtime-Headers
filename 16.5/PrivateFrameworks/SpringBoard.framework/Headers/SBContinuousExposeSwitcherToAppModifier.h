// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSESWITCHERTOAPPMODIFIER_H
#define SBCONTINUOUSEXPOSESWITCHERTOAPPMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBContinuousExposeSwitcherToAppModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) NSInteger direction; // ivar: _direction


-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 ;


@end


#endif