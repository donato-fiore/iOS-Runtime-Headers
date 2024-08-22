// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOSEVENTHANDLER_H
#define SBSOSEVENTHANDLER_H

@class SBFUserAuthenticationController, NSString, SOSManager;
@protocol SOSManagerClientObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBLockScreenManager.h"

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver>

 {
    id *_coversheetObserverToken;
    id<BSInvalidatable> *_disableSTARAssertion;
}


@property (readonly, nonatomic, getter=isSOSActive) BOOL SOSActive;
@property (readonly, nonatomic, getter=_authenticationController) SBFUserAuthenticationController *authenticationController; // ivar: _override_authenticationController
@property (readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController; // ivar: _override_backlightController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_lockScreenManager) SBLockScreenManager *lockScreenManager; // ivar: _override_lockscreenManager
@property (nonatomic, getter=_isRunning, setter=_setRunning:) BOOL running; // ivar: _running
@property (readonly, nonatomic, getter=_sosManager) SOSManager *sosManager; // ivar: _override_sosManager
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg0 showingPasscode:(BOOL)arg1 ;
-(void)dealloc;
-(void)didDismissSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)didUpdateCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)run;


@end


#endif