// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICEREPAIRSESSION_H
#define SFDEVICEREPAIRSESSION_H

@class TRSession, NSMutableArray, TROperationQueue, NSString, UIViewController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDeviceOperationCDPSetup.h"
#import "SFDeviceOperationHomeKitSetup.h"
#import "SFDeviceOperationWiFiSetup.h"
#import "SFDevice.h"

@interface SFDeviceRepairSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    NSUInteger _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    int _pairVerifyState;
    int _getProblemsState;
    NSUInteger _problemFlags;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    CGFloat _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    CGFloat _wifiSetupSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trAuthenticationState;
    NSUInteger _trAuthenticationStartTicks;
    CGFloat _trAuthenticationSecs;
    int _finishState;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) unsigned int repairFlags; // ivar: _repairFlags
@property (nonatomic) NSUInteger triggerMs; // ivar: _triggerMs


-(id)init;
-(int)_runCDPSetup;
-(int)_runFinish;
-(int)_runGetProblems;
-(int)_runHomeKitSetup;
-(int)_runPairVerify;
-(int)_runPreflightWiFiEarly;
-(int)_runPreflightWiFiFull;
-(int)_runSFSessionStart;
-(int)_runTRAuthentication;
-(int)_runTRSessionStart;
-(int)_runWiFiSetup;
-(void)_cleanup;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif