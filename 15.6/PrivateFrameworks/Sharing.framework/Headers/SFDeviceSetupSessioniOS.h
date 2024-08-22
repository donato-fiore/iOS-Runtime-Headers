// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICESETUPSESSIONIOS_H
#define SFDEVICESETUPSESSIONIOS_H

@class BYDeviceSetupSourceSession, NSData, NSString, CoreTelephonyClient, TSCellularPlanProximityTransferController, CDPContext, CDPStateController, RPFileTransferSession;
@protocol ESIMProxTransferControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFDeviceDiscovery.h"
#import "SFSession.h"
#import "SFDevice.h"

@interface SFDeviceSetupSessioniOS : NSObject <ESIMProxTransferControllerDelegate>

 {
    BOOL _activateCalled;
    unsigned int _appNextID;
    BOOL _buddyComplete;
    BYDeviceSetupSourceSession *_buddySession;
    BOOL _buddyConfigured;
    BOOL _configRequestSent;
    BOOL _configResponseReceived;
    BOOL _invalidateCalled;
    BOOL _pairSetupDone;
    BOOL _pairSetupReset;
    BOOL _pairSetupRunning;
    int _preAuthPairSetupState;
    BOOL _preAuthRequestSent;
    BOOL _preAuthResponseReceived;
    NSData *_resumeAuthTag;
    SFDeviceDiscovery *_resumeDiscovery;
    NSString *_resumePassword;
    int _resumeState;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    CoreTelephonyClient *_eSIMClient;
    BOOL _eSIMSetupEnabled;
    int _eSIMSetupState;
    TSCellularPlanProximityTransferController *_secureESIMTransferController;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate; // ivar: _fileTransferSessionTemplate
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) unsigned int pairFlags; // ivar: _pairFlags
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *receivedObjectHandler; // ivar: _receivedObjectHandler


-(id)init;
-(int)_runCoreCDPSetup;
-(int)_runESIMSetup;
-(int)_runPreAuthPairSetup;
-(int)_runResume;
-(void)_cleanup;
-(void)_completedWithError:(id)arg0 ;
-(void)_handleBuddyProgress:(id)arg0 ;
-(void)_handleSetupActionRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSetupActionSoftwareUpdate;
-(void)_handleSetupPeerSuspended;
-(void)_handleSetupResumeFoundDevice:(id)arg0 ;
-(void)_receivedConfigResponse:(id)arg0 ;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_run;
-(void)_runSFSessionActivated;
-(void)_runSFSessionStart;
-(void)_sendConfigInfo;
-(void)_sendPreAuthInfo;
-(void)_startBuddySession;
-(void)activate;
-(void)dealloc;
-(void)didComplete;
-(void)didRequestPresentationForProxCard:(id)arg0 ;
-(void)invalidate;
-(void)sendAppEvent:(id)arg0 ;
-(void)tryPIN:(id)arg0 ;


@end


#endif