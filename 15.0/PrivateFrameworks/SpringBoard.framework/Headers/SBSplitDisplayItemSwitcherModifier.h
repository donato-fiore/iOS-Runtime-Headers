// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPLITDISPLAYITEMSWITCHERMODIFIER_H
#define SBSPLITDISPLAYITEMSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBDisplayItem.h"
#import "SBAppLayout.h"

@interface SBSplitDisplayItemSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (nonatomic) BOOL hasInvalidatedAppLayoutsForInsertion; // ivar: _hasInvalidatedAppLayoutsForInsertion
@property (nonatomic) BOOL hasInvalidatedAppLayoutsForRemoval; // ivar: _hasInvalidatedAppLayoutsForRemoval
@property (retain, nonatomic) SBAppLayout *overrideAndPromoteChildAppLayout; // ivar: _overrideAndPromoteChildAppLayout
@property (readonly, nonatomic) SBSwitcherModifier *wrappingModifier; // ivar: _wrappingModifier


-(BOOL)completesWhenChildrenComplete;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)initWithDisplayItem:(id)arg0 ;
-(id)initWithDisplayItem:(id)arg0 wrappingModifier:(id)arg1 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(id)resizeGrabberLayoutAttributesForAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(void)_performOverrideAndPromoteChildAppLayoutToParent:(id)arg0 withBlock:(id)arg1 ;


@end


#endif