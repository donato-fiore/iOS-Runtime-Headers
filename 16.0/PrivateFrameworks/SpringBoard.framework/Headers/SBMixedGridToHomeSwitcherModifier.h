// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMIXEDGRIDTOHOMESWITCHERMODIFIER_H
#define SBMIXEDGRIDTOHOMESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBMixedGridSwitcherModifier.h"

@interface SBMixedGridToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
}




-(id)_newMixedGridModifier;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 mixedGridModifier:(id)arg2 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif