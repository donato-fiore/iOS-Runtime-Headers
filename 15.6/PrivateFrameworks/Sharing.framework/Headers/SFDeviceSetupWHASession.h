// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICESETUPWHASESSION_H
#define SFDEVICESETUPWHASESSION_H

@class TRSession, NSMutableArray, TROperationQueue, NSSet, UIViewController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDeviceOperationCDPSetup.h"
#import "SFDeviceOperationHomeKitSetup.h"
#import "SFDevice.h"

@interface SFDeviceSetupWHASession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    NSUInteger _peerFeatureFlags;
    NSUInteger _peerProblemsFlags;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trSetupConfigurationEnabled;
    int _trSetupConfigurationState;
    NSSet *_trUnauthServices;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    CGFloat _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetup;
    int _homeKitState;
    BOOL _homeKitDoFullSetup;
    int _finishState;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForHomeHandler; // ivar: _promptForHomeHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *promptForRoomHandler; // ivar: _promptForRoomHandler


-(BOOL)_verifyiCloudMatch:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(int)_runCDPSetup;
-(int)_runFinish;
-(int)_runHomeKitSetup;
-(int)_runInfoExchange;
-(int)_runPairSetup;
-(int)_runPairVerify;
-(int)_runSFSessionStart;
-(int)_runTRAuthentication;
-(int)_runTRSessionStart;
-(int)_runTRSetupConfiguration;
-(void)_cleanup;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)_runInfoExchangeRequest;
-(void)_runInfoExchangeResponse:(id)arg0 error:(id)arg1 ;
-(void)activate;
-(void)dealloc;
-(void)homeKitSelectHome:(id)arg0 ;
-(void)homeKitSelectRoom:(id)arg0 ;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;


@end


#endif