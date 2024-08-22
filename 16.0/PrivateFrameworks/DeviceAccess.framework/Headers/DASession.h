// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DASESSION_H
#define DASESSION_H

@class NSString;
@protocol CUXPCCodable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DAAppContext.h"

@interface DASession : NSObject <CUXPCCodable>

 {
    DAAppContext *_appContext;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSObject<OS_xpc_object> *_xpcListener;
}


@property (readonly, nonatomic) DAAppContext *appContext;
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // ivar: _xpcCnx
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint; // ivar: _xpcListenerEndpoint


+(BOOL)networkingAllowedWithUUID:(id)arg0 error:(*id)arg1 ;
+(BOOL)processAllowedWithAuditToken:(struct ? )arg0 error:(*id)arg1 ;
+(BOOL)setState:(NSInteger)arg0 device:(id)arg1 session:(id)arg2 error:(*id)arg3 ;
+(BOOL)setState:(NSInteger)arg0 device:(id)arg1 session:(id)arg2 simulateApp:(BOOL)arg3 error:(*id)arg4 ;
+(id)diagnosticShow:(id)arg0 endpoint:(id)arg1 error:(*id)arg2 ;
+(id)diagnosticShow:(id)arg0 error:(*id)arg1 ;
-(BOOL)appIsUsingDeviceAccess;
-(id)_ensureXPCStarted;
-(id)bluetoothAccessInfoAndReturnError:(*id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activateStart:(BOOL)arg0 ;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_getAuthorizedDevicesCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getBluetoothAccessInfoCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_reportEvent:(id)arg0 ;
-(void)_reportEventType:(NSInteger)arg0 ;
-(void)_xpcConnectionAccept:(id)arg0 ;
-(void)_xpcListenerEvent:(id)arg0 ;
-(void)_xpcReceivedDAEvent:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)activate;
-(void)diagnosticShow:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)getAuthorizedDevices:(id)arg0 ;
-(void)getBluetoothAccessInfoWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)setState:(NSInteger)arg0 device:(id)arg1 completionHandler:(id)arg2 ;
-(void)setState:(NSInteger)arg0 device:(id)arg1 simulateApp:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif