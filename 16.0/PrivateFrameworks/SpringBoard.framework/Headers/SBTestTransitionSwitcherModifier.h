// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTESTTRANSITIONSWITCHERMODIFIER_H
#define SBTESTTRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBTestTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _shouldAsyncRenderUntilDelay;
    CGFloat _delay;
}




-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(void)setshouldAsyncRenderUntilDelay:(CGFloat)arg0 ;


@end


#endif