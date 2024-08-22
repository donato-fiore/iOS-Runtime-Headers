// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICESETUPTVCOLORCALIBRATORSESSION_H
#define SFDEVICESETUPTVCOLORCALIBRATORSESSION_H

@class TVLDisplayColorCalibrator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"

@interface SFDeviceSetupTVColorCalibratorSession : NSObject {
    BOOL _activateCalled;
    int _finishState;
    BOOL _invalidateCalled;
    int _pairSetupState;
    int _pairVerifyState;
    BOOL _sessionSecured;
    NSUInteger _startTicks;
    SFSession *_sfSession;
    int _sfSessionState;
    int _tvLatencySetupState;
    TVLDisplayColorCalibrator *_tvColorCalibrator;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (nonatomic) NSUInteger triggerMs; // ivar: _triggerMs


-(id)init;
-(int)_runFinish;
-(int)_runPairSetup;
-(int)_runPairVerify:(BOOL)arg0 ;
-(int)_runSFSessionStart;
-(int)_runTVLatencySetup;
-(void)_cleanup;
-(void)_handleSetupActionRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)_runSFSessionActivated;
-(void)_runTVColorCalibratorProgressEvent:(NSUInteger)arg0 info:(id)arg1 ;
-(void)_runTVColorCalibratorSetup;
-(void)_runTVLatencySetupRequest;
-(void)activate;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)tryAgain;


@end


#endif