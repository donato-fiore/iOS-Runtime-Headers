// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPEXPOSETOHOMESWITCHERMODIFIER_H
#define SBAPPEXPOSETOHOMESWITCHERMODIFIER_H

@class NSString;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppExposeGridSwitcherModifier.h"

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
}




-(BOOL)_isEffectivelyHome;
-(CGFloat)plusButtonAlpha;
-(id)_newAppExposeModifier;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 bundleIdentifier:(id)arg2 appExposeModifier:(id)arg3 ;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif