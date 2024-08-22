// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENAPPLAYOUTSWITCHERMODIFIER_H
#define SBFULLSCREENAPPLAYOUTSWITCHERMODIFIER_H

@class NSUUID;


#import "SBSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"
#import "_SBFullScreenAppFloorSwitcherModifier.h"

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}


@property (retain, nonatomic) NSUUID *homeAffordanceReuseIdentifier; // ivar: _homeAffordanceReuseIdentifier


-(id)initWithActiveAppLayout:(id)arg0 ;
-(id)initWithActiveAppLayout:(id)arg0 homeAffordanceReuseIdentifier:(id)arg1 ;


@end


#endif