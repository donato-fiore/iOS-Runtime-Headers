// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPLITVIEWTOCENTERWINDOWSWITCHERMODIFIER_H
#define SBSPLITVIEWTOCENTERWINDOWSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSplitViewToCenterWindowSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    NSInteger _layoutRoleBeingMoved;
    NSInteger _layoutRoleBeingResized;
}




-(BOOL)_isItemBeingMovedToCenter:(id)arg0 ;
-(BOOL)_isItemBeingResized:(id)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;


@end


#endif