// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENSWITCHERMODIFIER_H
#define SBHOMESCREENSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "_SBHomeScreenFloorSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"

@interface SBHomeScreenSwitcherModifier : SBSwitcherModifier {
    _SBHomeScreenFloorSwitcherModifier *_homeScreenFloorModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}




-(id)init;


@end


#endif