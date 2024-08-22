// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPEXPOSETOFULLSCREENSWITCHERMODIFIER_H
#define SBAPPEXPOSETOFULLSCREENSWITCHERMODIFIER_H

@class NSString, NSArray;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBAppExposeGridSwitcherModifier.h"
#import "SBSwitcherModifier.h"
#import "SBRouteToAppExposeSwitcherModifier.h"

@interface SBAppExposeToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_floatingAppLayout;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    SBSwitcherModifier *_fullscreenModifier;
    SBRouteToAppExposeSwitcherModifier *_routeToAppExposeModifier;
    BOOL _isSimulatingPreTransitionState;
    NSArray *_appLayoutsBeforeTransition;
}




-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_newAppExposeModifier;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appLayouts;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 fullScreenAppLayout:(id)arg2 floatingAppLayout:(id)arg3 bundleIdentifier:(id)arg4 appExposeModifier:(id)arg5 fullScreenModifier:(id)arg6 ;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(void)_performBlockBySimulatingPreTransitionState:(id)arg0 ;


@end


#endif