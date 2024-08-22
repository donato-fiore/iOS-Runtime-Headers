// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPUNDERFLOATINGSWITCHERSWITCHERMODIFIER_H
#define SBAPPUNDERFLOATINGSWITCHERSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBFullScreenAppLayoutSwitcherModifier.h"

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
}




-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(id)appLayoutsToResignActive;
-(id)initWithActiveAppLayout:(id)arg0 ;
-(id)keyboardSuppressionMode;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif