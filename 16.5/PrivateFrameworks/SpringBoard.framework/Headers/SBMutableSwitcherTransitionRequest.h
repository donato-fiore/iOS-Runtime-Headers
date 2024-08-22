// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMUTABLESWITCHERTRANSITIONREQUEST_H
#define SBMUTABLESWITCHERTRANSITIONREQUEST_H

@class SBFFluidBehaviorSettings, NSString;


#import "SBSwitcherTransitionRequest.h"
#import "SBDisplayItem.h"
#import "SBAppLayout.h"

@interface SBMutableSwitcherTransitionRequest : SBSwitcherTransitionRequest

@property (retain, nonatomic) SBDisplayItem *activatingDisplayItem;
@property (nonatomic) NSInteger animationDisabled;
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings;
@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) NSInteger appLayoutEnvironment;
@property (nonatomic) NSInteger autoPIPDisabled;
@property (copy, nonatomic) NSString *bundleIdentifierForAppExpose;
@property (nonatomic) NSInteger entityInsertionPolicy;
@property (nonatomic) BOOL fenceSceneUpdate;
@property (nonatomic) NSInteger floatingConfiguration;
@property (nonatomic) NSInteger floatingSwitcherVisible;
@property (nonatomic) NSInteger peekConfiguration;
@property (nonatomic) NSInteger preferredInterfaceOrientation;
@property (nonatomic) BOOL sceneUpdatesOnly;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSInteger unlockedEnvironmentMode;




@end


#endif