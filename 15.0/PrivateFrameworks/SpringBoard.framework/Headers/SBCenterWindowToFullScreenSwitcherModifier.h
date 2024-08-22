// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCENTERWINDOWTOFULLSCREENSWITCHERMODIFIER_H
#define SBCENTERWINDOWTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface SBCenterWindowToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fullScreenAppLayoutWithCenterRemoved;
    SBDisplayItem *_movingCenterItem;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fullScreenWithCenterAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif