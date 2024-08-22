// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGRIDTOFULLSCREENSWITCHERMODIFIER_H
#define SBGRIDTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
}




-(id)appLayoutToScrollToBeforeTransitioning;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 fullScreenAppLayout:(id)arg2 gridModifier:(id)arg3 ;
-(id)transitionWillBegin;


@end


#endif