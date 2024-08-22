// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPLEGACYSESSION_H
#define RPLEGACYSESSION_H

@class NSMutableArray, CUMobileDeviceSession, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPDevice.h"

@interface RPLegacySession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_messageSendQueue;
    BOOL _messagingReady;
    int _pairVerifyState;
    BOOL _secureReady;
    BOOL _mdEnabled;
    CUMobileDeviceSession *_mdSession;
    int _mdState;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) RPDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (nonatomic) unsigned int securityFlags; // ivar: _securityFlags
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)init;
-(int)_runMobileDeviceStart;
-(int)_runPairVerify;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_cleanup;
-(void)_invalidate;
-(void)_invalidated;
-(void)_pairSetupTryPIN:(id)arg0 ;
-(void)_pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_run;
-(void)_sendMessage:(id)arg0 ;
-(void)_sendQueuedMessages;
-(void)_unpairWithCompletion:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)requestSystemInfoWithCompletion:(id)arg0 ;
-(void)sendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;
-(void)unpairWithCompletion:(id)arg0 ;


@end


#endif