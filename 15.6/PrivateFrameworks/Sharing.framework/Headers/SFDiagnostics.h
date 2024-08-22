// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDIAGNOSTICS_H
#define SFDIAGNOSTICS_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFDiagnostics : NSObject {
    BOOL _btUser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)init;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_logControl:(id)arg0 completion:(id)arg1 ;
-(void)_show:(id)arg0 completion:(id)arg1 ;
-(void)bluetoothUserInteraction;
-(void)dealloc;
-(void)diagnosticBLEModeWithCompletion:(id)arg0 ;
-(void)diagnosticControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticMock:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)diagnosticMockStart:(id)arg0 ;
-(void)diagnosticMockStop:(id)arg0 ;
-(void)invalidate;
-(void)logControl:(id)arg0 completion:(id)arg1 ;
-(void)show:(id)arg0 completion:(id)arg1 ;
-(void)unlockTestClientWithDevice:(id)arg0 ;
-(void)unlockTestServer;


@end


#endif