// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICEOPERATIONHANDLERCNJSETUP_H
#define SFDEVICEOPERATIONHANDLERCNJSETUP_H

@class SKSetupCaptiveNetworkJoinServer, CUReachabilityMonitor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationHandlerCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinServer *_cnjServer;
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    int _captiveDetectedToken;
    BOOL _reachabilityDone;
    id *_responseHandler;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession


-(id)init;
-(void)_handleCaptiveJoinRequestWithResponseHandler:(id)arg0 ;
-(void)_runReachability:(id)arg0 responseHandler:(id)arg1 ;
-(void)_updateCaptiveState;
-(void)activate;
-(void)invalidate;


@end


#endif