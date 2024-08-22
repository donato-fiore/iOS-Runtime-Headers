// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCENTERWINDOWPAGEPRESENTATIONSWITCHERMODIFIER_H
#define SBCENTERWINDOWPAGEPRESENTATIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCenterWindowPagePresentationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenAppLayout;
    BOOL _isMorph;
}




-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 toAppLayout:(id)arg1 isMorph:(BOOL)arg2 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif