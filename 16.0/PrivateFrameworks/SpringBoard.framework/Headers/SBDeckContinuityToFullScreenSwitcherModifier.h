// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDECKCONTINUITYTOFULLSCREENSWITCHERMODIFIER_H
#define SBDECKCONTINUITYTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}




-(BOOL)_isInsertingIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 deckModifier:(id)arg2 fullscreenModifier:(id)arg3 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )_initialFrameForContinuityAppLayout;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif