// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIRELAYDELEGATEIOS_H
#define RWIRELAYDELEGATEIOS_H

@class RBSProcessMonitor;
@protocol RWIRelayDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "RWIRelay.h"

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate>

 {
    RWIRelay *_relay;
    RBSProcessMonitor *_processMonitor;
    id<BSInvalidatable> *_idleTimerAssertion;
}




-(BOOL)relay:(id)arg0 allowIncomingApplicationConnection:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)relay:(id)arg0 allowIncomingApplicationViaProxy:(struct ? )arg1 pid:(int)arg2 ;
-(id)_processMonitorPredicatesForConnectedApplications;
-(id)relay:(id)arg0 applicationInfoForIncomingConnection:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)relaySetupResponseForClientConnection:(id)arg0 ;
-(void)_createProcessMonitorIfNeeded;
-(void)_handleProcessMonitorStateUpdate:(id)arg0 forProcess:(id)arg1 ;
-(void)_startPreventingDeviceFromIdling;
-(void)_stopPreventingDeviceFromIdling;
-(void)_updateDeviceIdlePrevention;
-(void)_updateProcessMonitorPredicates;
-(void)relay:(id)arg0 activateApplicationWithBundleIdentifier:(id)arg1 ;
-(void)relay:(id)arg0 applicationConnected:(id)arg1 ;
-(void)relay:(id)arg0 applicationDisconnected:(id)arg1 ;
-(void)relay:(id)arg0 applicationUpdated:(id)arg1 ;
-(void)relay:(id)arg0 unhandledApplicationXPCMessage:(id)arg1 ;
-(void)relayClientConnectionDidChange:(id)arg0 ;
-(void)relayInitialize:(id)arg0 ;


@end


#endif