// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHISTORIANSWITCHERMODIFIER_H
#define SBHISTORIANSWITCHERMODIFIER_H

@protocol SBHistorianSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"

@interface SBHistorianSwitcherModifier : SBSwitcherModifier

@property (weak, nonatomic) NSObject<SBHistorianSwitcherModifierDelegate> *historianDelegate; // ivar: _historianDelegate
@property (readonly, nonatomic) SBSwitcherModifier *rootModifier; // ivar: _rootModifier


+(BOOL)canLogEvent:(id)arg0 ;
-(id)_eventSnapshotFromEvent:(id)arg0 ;
-(id)_modifierStackSnapshotFromModifier:(id)arg0 ;
-(id)_querySnapshotFromModifier:(id)arg0 ;
-(id)_responseSnapshotFromResponse:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)initWithRootModifier:(id)arg0 ;
-(void)_populateAppLayoutQueryMethodDescription:(id)arg0 fromModifier:(id)arg1 queryName:(id)arg2 descriptionProvider:(id)arg3 ;
// -(void)_populateIndexedQueryMethodDescription:(id)arg0 fromModifier:(id)arg1 queryName:(id)arg2 descriptionProvider:(id)arg3 appLayouts:(unk)arg4  ;
-(void)_populateLayoutRoleInAppLayoutAtIndexQueryMethodDescription:(id)arg0 fromModifier:(id)arg1 queryName:(id)arg2 descriptionProvider:(id)arg3 ;
-(void)_populateLayoutRoleInAppLayoutQueryMethodDescription:(id)arg0 fromModifier:(id)arg1 queryName:(id)arg2 descriptionProvider:(id)arg3 ;
// -(void)_populateQueryMethodDescription:(id)arg0 fromModifier:(id)arg1 queryName:(id)arg2 descriptionProvider:(id)arg3 appLayouts:(unk)arg4  ;
-(void)setDelegate:(id)arg0 ;


@end


#endif