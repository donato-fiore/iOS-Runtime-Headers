// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONVIEWVISIBILITYSWITCHEREVENTRESPONSE_H
#define SBICONVIEWVISIBILITYSWITCHEREVENTRESPONSE_H

@class SBFFluidBehaviorSettings, NSSet;


#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBIconViewVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBFFluidBehaviorSettings *animationSettings; // ivar: _animationSettings
@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSSet *excludedIconLocations; // ivar: _excludedIconLocations
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 visible:(BOOL)arg1 animationSettings:(id)arg2 excludedIconLocations:(id)arg3 ;


@end


#endif