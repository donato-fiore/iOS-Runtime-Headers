// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEPEEKSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEPEEKSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBContinuousExposePeekTransitionModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposePeekSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_contentModifier;
    SBContinuousExposePeekTransitionModifier *_dismissalTransitionModifier;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger configuration; // ivar: _configuration


-(BOOL)isSwitcherWindowVisible;
-(NSUInteger)transactionCompletionOptions;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)debugPotentialChildModifiers;
-(id)handleEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 configuration:(NSInteger)arg1 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif