// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEAPPTOINLINEAPPEXPOSESWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEAPPTOINLINEAPPEXPOSESWITCHERMODIFIER_H

@class NSString;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeAppToInlineAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_activeAppLayout;
    NSString *_appExposeBundleIdentifier;
    NSInteger _direction;
}




-(CGFloat)adjustedSpaceAccessoryViewScale:(CGFloat)arg0 forAppLayout:(id)arg1 ;
-(id)_inlineAppExposeAppLayouts;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 activeAppLayout:(id)arg2 appExposeBundleIdentifier:(id)arg3 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif