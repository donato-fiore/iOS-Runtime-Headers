// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPINPAIRSESSION_H
#define SFPINPAIRSESSION_H

@class NSData;
@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"
#import "SFService.h"

@interface SFPINPairSession : NSObject {
    BOOL _activateCalled;
    BOOL _clientStarted;
    NSData *_clientSessionUUID;
    BOOL _invalidateCalled;
    NSUInteger _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _heartbeatSending;
    BOOL _pairSetupDone;
    *PairingSessionPrivate _pairSetupSession;
    BOOL _pairSetupWaitingForUser;
    BOOL _pairVerifyDone;
    *PairingSessionPrivate _pairVerifySession;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    NSUInteger _startTicks;
    NSObject<OS_os_transaction> *_transaction;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (retain, nonatomic) SFService *sfService; // ivar: _sfService
@property (copy, nonatomic) id *showPINHandler; // ivar: _showPINHandler


-(id)init;
-(void)_activate;
-(void)_cleanup;
-(void)_clientHeartbeatSend;
-(void)_clientPairSetup:(id)arg0 start:(BOOL)arg1 ;
-(void)_clientPairVerify:(id)arg0 start:(BOOL)arg1 ;
-(void)_clientRun;
-(void)_clientSFSessionStart;
-(void)_clientTryPIN:(id)arg0 ;
-(void)_completed:(int)arg0 ;
-(void)_handleServerRequest:(id)arg0 ;
-(void)_hearbeatTimer;
-(void)_invalidate;
-(void)activate;
-(void)clientTryPIN:(id)arg0 ;
-(void)dealloc;
-(void)handleServerHeartbeat:(id)arg0 ;
-(void)handleServerPairSetup:(id)arg0 reset:(BOOL)arg1 ;
-(void)handleServerPairVerify:(id)arg0 reset:(BOOL)arg1 ;
-(void)handleServerRequest:(id)arg0 ;
-(void)invalidate;


@end


#endif