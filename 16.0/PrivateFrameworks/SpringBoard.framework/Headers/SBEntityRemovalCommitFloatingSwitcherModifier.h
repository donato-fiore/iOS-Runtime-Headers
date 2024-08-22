// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBENTITYREMOVALCOMMITFLOATINGSWITCHERMODIFIER_H
#define SBENTITYREMOVALCOMMITFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBEntityRemovalCommitFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    NSInteger _floatingConfiguration;
}




-(BOOL)_isIndexFromAppLayout:(NSUInteger)arg0 ;
-(BOOL)_isIndexToAppLayout:(NSUInteger)arg0 ;
-(BOOL)isContentStatusBarVisible;
-(CGFloat)_toBeRemovedFinalScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 floatingConfiguration:(NSInteger)arg3 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )containerViewBounds;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif