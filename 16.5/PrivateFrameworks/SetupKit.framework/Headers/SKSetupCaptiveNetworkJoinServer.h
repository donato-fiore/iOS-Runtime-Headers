// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSETUPCAPTIVENETWORKJOINSERVER_H
#define SKSETUPCAPTIVENETWORKJOINSERVER_H

@class CBAdvertiser, CBServer, NSString, FLFollowUpController, CUBonjourAdvertiser, NRDeviceIdentifier, NRDeviceManager, NRDeviceMonitor;
@protocol NRDeviceMonitorDelegate;


#import "SKSetupBase.h"

@interface SKSetupCaptiveNetworkJoinServer : SKSetupBase <NRDeviceMonitorDelegate>

 {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    unsigned int _captiveNetworkCookie;
    NSString *_captiveNetworkInterfaceName;
    BOOL _captiveNetworkWebSheetActive;
    BOOL _captiveNetworkWebSheetCompleted;
    BOOL _cfuCleared;
    FLFollowUpController *_cfuController;
    CUBonjourAdvertiser *_awdlAdvertiser;
    NRDeviceIdentifier *_nrDeviceIdentifier;
    NRDeviceManager *_nrDeviceManager;
    NRDeviceMonitor *_nrDeviceMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mode; // ivar: _mode
@property (readonly) Class superclass;


+(void)resetWithCompletionHandler:(id)arg0 ;
-(BOOL)_bleAdvertiserShouldRun;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activate;
-(void)_bleAdvertiserEnsureStarted;
-(void)_bleAdvertiserEnsureStopped;
-(void)_bleServerAcceptConnecton:(id)arg0 ;
-(void)_bleServerEnsureStarted;
-(void)_bleServerEnsureStopped;
-(void)_captiveNetworkLoginInfo:(id)arg0 cookie:(unsigned int)arg1 responseHandler:(id)arg2 ;
-(void)_captiveNetworkLoginRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_captiveNetworkProbeEnsureStopped;
-(void)_captiveNetworkProbeRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_captiveNetworkProbeResult:(int)arg0 responseHandler:(id)arg1 ;
-(void)_cfuEnsuredStarted;
-(void)_cfuEnsuredStopped;
-(void)_connectionEnded:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_networkRelayAWDLStartRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_networkRelayDeviceEnsureStopped;
-(void)_networkRelaySetupRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_oobEnsureStarted;
-(void)_run;
-(void)_runDefault;
-(void)_runDetected;
-(void)_runUserRequest;
-(void)deviceIsConnectedDidChange:(id)arg0 isConnected:(BOOL)arg1 ;
-(void)deviceLinkTypeDidChange:(id)arg0 linkType:(unsigned char)arg1 linkSubtype:(unsigned char)arg2 ;
-(void)deviceProxyServiceInterfaceNameDidChange:(id)arg0 interfaceName:(id)arg1 ;


@end


#endif