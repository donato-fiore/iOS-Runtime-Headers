// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSXPCCONNECTION_H
#define DSXPCCONNECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "DSKappaSession.h"
#import "DSMotionSession.h"
#import "DSXPCServer.h"

@interface DSXPCConnection : NSObject {
    BOOL _isEntitledForKappa;
    BOOL _isEntitledForMotion;
    NSMutableDictionary *_deviceDictionary;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) DSKappaSession *kappaSession; // ivar: _kappaSession
@property (retain, nonatomic) DSMotionSession *motionSession; // ivar: _motionSession
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) DSXPCServer *xpcDaemonServer; // ivar: _xpcDaemonServer


-(void)_activateKappaSessionMessage:(id)arg0 ;
-(void)_activateMotionSessionMessage:(id)arg0 ;
-(void)_checkEntitlement:(char *)arg0 error:(*id)arg1 ;
-(void)_deviceChangedHandler:(id)arg0 ;
-(void)_deviceFoundHandler:(id)arg0 ;
-(void)_deviceLostHandler:(id)arg0 ;
-(void)_handleXPCMessage:(id)arg0 ;
-(void)_printCohortMessage:(id)arg0 ;
-(void)_updateCoordinationStatusMessage:(id)arg0 ;
-(void)_updateVehicleStateMessage:(id)arg0 ;
-(void)_xpcCohortDeviceMessage:(id)arg0 type:(char *)arg1 ;
-(void)_xpcConnectionSendEvent:(id)arg0 ;
-(void)_xpcEventHandler:(id)arg0 ;
-(void)_xpcSendReplyForMessage:(id)arg0 error:(id)arg1 ;
-(void)activate;
-(void)invalidate;


@end


#endif