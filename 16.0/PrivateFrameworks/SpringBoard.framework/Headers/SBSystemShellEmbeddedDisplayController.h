// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSHELLEMBEDDEDDISPLAYCONTROLLER_H
#define SBSYSTEMSHELLEMBEDDEDDISPLAYCONTROLLER_H

@class SBAppSwitcherDefaults, FBSceneManager, FBScene, FBSDisplayConfiguration, NSString;
@protocol SBDisplayControlling, SBDisplayControllerProviding;

#import <Foundation/Foundation.h>

#import "SBDisplayAssertion.h"

@interface SBSystemShellEmbeddedDisplayController : NSObject <SBDisplayControlling, SBDisplayControllerProviding>

 {
    SBAppSwitcherDefaults *_appSwitcherDefaults;
    FBSceneManager *_sceneManager;
    FBScene *_scene;
    FBSDisplayConfiguration *_displayConfiguration;
    NSInteger _initialOrientation;
    SBDisplayAssertion *_displayAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createSystemShellSceneWithOrientation:(NSInteger)arg0 ;
-(id)displayControllerInfoForConnectingDisplay:(id)arg0 configuration:(id)arg1 ;
-(id)initWithAppSwitcherDefaults:(id)arg0 sceneManager:(id)arg1 initialOrientation:(NSInteger)arg2 ;
-(void)_updateDisplayAssertionPreferences;
-(void)connectToDisplayIdentity:(id)arg0 configuration:(id)arg1 displayManager:(id)arg2 sceneManager:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5 ;
-(void)dealloc;
-(void)displayAssertion:(id)arg0 didLoseControlOfDisplayForDeactivationReasons:(NSUInteger)arg1 ;
-(void)displayAssertion:(id)arg0 didReceiveNewDeactivationReasons:(NSUInteger)arg1 ;
-(void)displayAssertionDidGainControlOfDisplay:(id)arg0 ;
-(void)displayAssertionDidInvalidate:(id)arg0 ;
-(void)displayIdentityDidDisconnect:(id)arg0 ;
-(void)displayIdentityDidUpdate:(id)arg0 configuration:(id)arg1 ;


@end


#endif