// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXITSLIDEOVERPEEKSWITCHERMODIFIER_H
#define SBEXITSLIDEOVERPEEKSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBExitSlideOverPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_floatingAppLayout;
    NSInteger _floatingConfiguration;
}




-(id)initWithTransitionID:(id)arg0 floatingAppLayout:(id)arg1 floatingConfiguration:(NSInteger)arg2 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif