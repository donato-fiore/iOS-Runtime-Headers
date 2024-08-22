// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIPADOSPLATFORMSWITCHERMODIFIER_H
#define SBIPADOSPLATFORMSWITCHERMODIFIER_H

@class NSSet;


#import "SBSwitcherModifier.h"
#import "SBDisplayItem.h"
#import "SBTransitionSwitcherModifierEvent.h"

@interface SBiPadOSPlatformSwitcherModifier : SBSwitcherModifier {
    NSSet *_previousDisplayItems;
    NSSet *_displayItems;
    SBDisplayItem *_lastGesturedDisplayItem;
    SBDisplayItem *_lastPulsedDisplayItem;
    NSSet *_activatingLiveAppLayouts;
    SBTransitionSwitcherModifierEvent *_lastTransitionEvent;
}




-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)foregroundAppLayouts;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handlePrepareForSceneUpdateEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)handleUpdateWindowingModeEvent:(id)arg0 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif