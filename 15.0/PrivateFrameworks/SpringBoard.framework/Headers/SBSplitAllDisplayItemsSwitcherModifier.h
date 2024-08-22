// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPLITALLDISPLAYITEMSSWITCHERMODIFIER_H
#define SBSPLITALLDISPLAYITEMSSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBSplitAllDisplayItemsSwitcherModifier : SBSwitcherModifier

@property (nonatomic) BOOL hasInvalidatedAppLayoutsForInsertion; // ivar: _hasInvalidatedAppLayoutsForInsertion
@property (nonatomic) BOOL hasInvalidatedAppLayoutsForRemoval; // ivar: _hasInvalidatedAppLayoutsForRemoval


-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;


@end


#endif