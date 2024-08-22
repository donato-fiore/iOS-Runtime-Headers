// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIVEAPPLAYOUTFLOATINGSWITCHERMODIFIER_H
#define SBACTIVEAPPLAYOUTFLOATINGSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBStackedFloatingSwitcherModifier.h"
#import "_SBActiveAppFloorFloatingSwitcherModifier.h"

@interface SBActiveAppLayoutFloatingSwitcherModifier : SBSwitcherModifier {
    SBStackedFloatingSwitcherModifier *_stackedModifier;
    _SBActiveAppFloorFloatingSwitcherModifier *_floorModifier;
}




-(id)initWithActiveAppLayout:(id)arg0 floatingConfiguration:(NSInteger)arg1 environmentMode:(NSInteger)arg2 ;


@end


#endif