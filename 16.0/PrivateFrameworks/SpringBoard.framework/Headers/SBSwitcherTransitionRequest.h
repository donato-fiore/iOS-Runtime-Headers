// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERTRANSITIONREQUEST_H
#define SBSWITCHERTRANSITIONREQUEST_H

@class SBFFluidBehaviorSettings, NSString;
@protocol BSDescriptionProviding, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding, NSMutableCopying>



@property (nonatomic) NSInteger animationDisabled; // ivar: _animationDisabled
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings; // ivar: _animationSettings
@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) NSInteger appLayoutEnvironment; // ivar: _appLayoutEnvironment
@property (nonatomic) NSInteger autoPIPDisabled; // ivar: _autoPIPDisabled
@property (copy, nonatomic) NSString *bundleIdentifierForAppExpose; // ivar: _bundleIdentifierForAppExpose
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fenceSceneUpdate; // ivar: _fenceSceneUpdate
@property (nonatomic) NSInteger floatingConfiguration; // ivar: _floatingConfiguration
@property (nonatomic) NSInteger floatingSwitcherVisible; // ivar: _floatingSwitcherVisible
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger peekConfiguration; // ivar: _peekConfiguration
@property (nonatomic) NSInteger preferredInterfaceOrientation; // ivar: _preferredInterfaceOrientation
@property (nonatomic) BOOL sceneUpdatesOnly; // ivar: _sceneUpdatesOnly
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) NSInteger unlockedEnvironmentMode; // ivar: _unlockedEnvironmentMode


+(id)requestForActivatingAppLayout:(id)arg0 ;
+(id)requestForActivatingAppSwitcher;
+(id)requestForActivatingFloatingSwitcher;
+(id)requestForActivatingHomeScreen;
+(id)requestForDeactivatingFloatingSwitcher;
+(id)requestForStashingFloatingApplicationWithFloatingConfiguration:(NSInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif