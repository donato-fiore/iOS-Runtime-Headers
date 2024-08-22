// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCENTERWINDOWTONEWSPLITVIEWSWITCHERMODIFIER_H
#define SBCENTERWINDOWTONEWSPLITVIEWSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCenterWindowToNewSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromFullScreenAppLayout;
    SBAppLayout *_toSpaceAppLayout;
    NSInteger _layoutRoleBeingAdded;
}




-(BOOL)_wasItemPreviouslyCenter:(id)arg0 ;
-(BOOL)_wasItemPreviouslyFullScreen:(id)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromFullScreenAppLayout:(id)arg1 toSpaceAppLayout:(id)arg2 ;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif