// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSETUPCAPTIVENETWORKJOINCLIENT_H
#define SKSETUPCAPTIVENETWORKJOINCLIENT_H

@class CUBonjourBrowser, NSString, CUBonjourDevice, NRDeviceIdentifier, NRDeviceManager, NRDeviceMonitor;
@protocol NRDeviceMonitorDelegate, OS_dispatch_source;


#import "SKSetupBase.h"

@interface SKSetupCaptiveNetworkJoinClient : SKSetupBase <NRDeviceMonitorDelegate>

 {
    BOOL _captiveNetworkLoginDone;
    BOOL _captiveNetworkProbingSuccess;
    BOOL _awdlAdvertiserPeerStarted;
    CUBonjourBrowser *_awdlBrowser;
    NSString *_awdlName;
    CUBonjourDevice *_awdlPeerDevice;
    NSObject<OS_dispatch_source> *_awdlTimer;
    NSString *_networkRelayPeerIPStr;
    NSString *_networkRelayProxyInterface;
    NSObject<OS_dispatch_source> *_networkRelayTimer;
    NRDeviceIdentifier *_nrDeviceIdentifier;
    NRDeviceManager *_nrDeviceManager;
    NRDeviceMonitor *_nrDeviceMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_runNetworkRelayPeerStart;
-(id)init;
-(void)_captiveProbeRequest;
-(void)_captiveProbeResponse:(id)arg0 ;
-(void)_invalidate;
-(void)_networkRelayEnsureStopped;
-(void)_postEvent:(id)arg0 ;
-(void)_run;
-(void)_runAWDLFoundDevice:(id)arg0 ;
-(void)_runAWDLFoundTimerStart;
-(void)_runAWDLStart;
-(void)_runCaptiveNetworkLoginResponse:(id)arg0 ;
-(void)_runCaptiveNetworkLoginStart;
-(void)_runNetworkRelaySelfStart;
-(void)deviceIsConnectedDidChange:(id)arg0 isConnected:(BOOL)arg1 ;
-(void)deviceLinkTypeDidChange:(id)arg0 linkType:(unsigned char)arg1 linkSubtype:(unsigned char)arg2 ;
-(void)deviceProxyServiceInterfaceNameDidChange:(id)arg0 interfaceName:(id)arg1 ;


@end


#endif