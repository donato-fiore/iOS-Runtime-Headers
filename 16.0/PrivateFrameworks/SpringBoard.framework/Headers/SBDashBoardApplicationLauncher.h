// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDAPPLICATIONLAUNCHER_H
#define SBDASHBOARDAPPLICATIONLAUNCHER_H

@class NSString, CSCoverSheetViewController;
@protocol CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming;

#import <Foundation/Foundation.h>

#import "SBInProcessSecureAppAction.h"
#import "SBSecureAppManager.h"

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming>

 {
    SBInProcessSecureAppAction *_secureAppAction;
    BOOL _cameraIsPrewarming;
    BOOL _cameraPrewarmSucceeded;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController; // ivar: _coverSheetViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger participantState;
@property (weak, nonatomic) SBSecureAppManager *secureAppManager; // ivar: _secureAppManager
@property (readonly) Class superclass;


-(BOOL)_backgroundLaunchCamera;
-(BOOL)_canHandleTransitionRequest:(id)arg0 outActivatingSceneEntity:(*id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)handleTransitionRequest:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(void)_activateAppSceneBelowDashBoard:(id)arg0 secureAppType:(NSUInteger)arg1 withActions:(id)arg2 interactive:(BOOL)arg3 completion:(id)arg4 ;
-(void)_activateCameraAnimated:(BOOL)arg0 actions:(id)arg1 completion:(id)arg2 ;
-(void)_attemptToUnlockToCameraCompletion:(id)arg0 ;
-(void)_coolCameraIfNecessary;
-(void)_launchQuickNote;
-(void)_presentApplicationSceneEntity:(id)arg0 withResult:(id)arg1 ;
-(void)_prewarmCamera;
-(void)_reallyActivateAppSceneWithEntity:(id)arg0 interactive:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)launchQuickNote;
-(void)notePrewarmRequestEnded;
-(void)notePrewarmRequestWasUseful;
-(void)prewarmCameraHardware:(BOOL)arg0 andApplication:(BOOL)arg1 ;


@end


#endif