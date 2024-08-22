// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICESETUPSESSIONIOS_H
#define SFDEVICESETUPSESSIONIOS_H

@class BYDeviceSetupSourceSession, NSData, NSString, CoreTelephonyClient, TSCellularPlanProximityTransferController, CDPContext, CDPStateController, PASUIGuardianViewPresenter, RPFileTransferSession;
@protocol ESIMProxTransferControllerDelegate, PASUIGuardianViewPresenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFDeviceDiscovery.h"
#import "SFSession.h"
#import "SFDevice.h"

@interface SFDeviceSetupSessioniOS : NSObject <ESIMProxTransferControllerDelegate, PASUIGuardianViewPresenterDelegate>

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
    int _dependentSetupState;
    PASUIGuardianViewPresenter *_dependentSetupSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate; // ivar: _fileTransferSessionTemplate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) unsigned int pairFlags; // ivar: _pairFlags
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *receivedObjectHandler; // ivar: _receivedObjectHandler
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDependentSetup; // ivar: _supportsDependentSetup


-(id)init;
-(id)sfSession;
-(int)_runCoreCDPSetup;
-(int)_runDependentSetup;
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
-(void)guardianFlowDidCompleteWithPresenter:(id)arg0 ;
-(void)invalidate;
-(void)proximitySetupCompletedWithResult:(id)arg0 ;
-(void)sendAppEvent:(id)arg0 ;
-(void)tryPIN:(id)arg0 ;


@end


#endif