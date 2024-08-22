// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSHELFZOOMTRANSITIONMODIFIER_H
#define SBSHELFZOOMTRANSITIONMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherShelf.h"

@interface SBShelfZoomTransitionModifier : SBTransitionSwitcherModifier {
    NSUInteger _direction;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBSwitcherShelf *_shelf;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenSpaceAppLayout;
    SBAppLayout *_centerWindowBeingReplacedAppLayout;
}




-(BOOL)_isEffectivelyInShelf;
-(BOOL)_shouldDimLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 forZoomDirection:(NSUInteger)arg2 ;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)hiddenAppLayoutsInShelf:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSUInteger)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 shelf:(id)arg4 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif