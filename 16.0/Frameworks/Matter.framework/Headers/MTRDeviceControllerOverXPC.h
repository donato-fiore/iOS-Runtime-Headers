// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICECONTROLLEROVERXPC_H
#define MTRDEVICECONTROLLEROVERXPC_H

@protocol NSCopying, OS_dispatch_queue;


#import "MTRDeviceController.h"
#import "MTRDeviceControllerXPCConnection.h"

@interface MTRDeviceControllerOverXPC : MTRDeviceController

@property (retain, nonatomic) NSObject<NSCopying> *controllerId; // ivar: _controllerId
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedControllerWithId:(id)arg0 xpcConnectBlock:(id)arg1 ;
-(BOOL)commissionDevice:(NSUInteger)arg0 commissioningParams:(id)arg1 error:(*id)arg2 ;
-(BOOL)getBaseDevice:(NSUInteger)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)openPairingWindow:(NSUInteger)arg0 duration:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)pairDevice:(NSUInteger)arg0 address:(id)arg1 port:(unsigned short)arg2 discriminator:(unsigned short)arg3 setupPINCode:(unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)pairDevice:(NSUInteger)arg0 discriminator:(unsigned short)arg1 setupPINCode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)pairDevice:(NSUInteger)arg0 onboardingPayload:(id)arg1 error:(*id)arg2 ;
-(BOOL)stopDevicePairing:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)getDeviceBeingCommissioned:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithControllerId:(id)arg0 workQueue:(id)arg1 connectBlock:(id)arg2 ;
-(id)initWithControllerId:(id)arg0 workQueue:(id)arg1 xpcConnection:(id)arg2 ;
-(id)openPairingWindowWithPIN:(NSUInteger)arg0 duration:(NSUInteger)arg1 discriminator:(NSUInteger)arg2 setupPIN:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)setListenPort:(unsigned short)arg0 ;


@end


#endif