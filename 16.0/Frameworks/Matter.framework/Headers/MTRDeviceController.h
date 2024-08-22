// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICECONTROLLER_H
#define MTRDEVICECONTROLLER_H

@class NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTRControllerFactory.h"

@interface MTRDeviceController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly, nonatomic) NSNumber *controllerNodeId;
@property (readonly) *void cppCommissioner; // ivar: _cppCommissioner
@property (readonly) *void deviceAttestationDelegateBridge; // ivar: _deviceAttestationDelegateBridge
@property (readonly) MTRControllerFactory *factory; // ivar: _factory
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly) *MTROperationalCredentialsDelegate operationalCredentialsDelegate; // ivar: _operationalCredentialsDelegate
@property (readonly) MTRP256KeypairBridge operationalKeypairBridge; // ivar: _operationalKeypairBridge
@property (readonly) *MTRDevicePairingDelegateBridge pairingDelegateBridge; // ivar: _pairingDelegateBridge
@property (readonly) MTRP256KeypairBridge signingKeypairBridge; // ivar: _signingKeypairBridge


+(id)decodeXPCReadParams:(id)arg0 ;
+(id)decodeXPCResponseValues:(id)arg0 ;
+(id)decodeXPCSubscribeParams:(id)arg0 ;
+(id)encodeXPCReadParams:(id)arg0 ;
+(id)encodeXPCResponseValues:(id)arg0 ;
+(id)encodeXPCSubscribeParams:(id)arg0 ;
+(id)sharedControllerWithId:(id)arg0 xpcConnectBlock:(id)arg1 ;
-(BOOL)_deviceBeingCommissionedOverBLE:(NSUInteger)arg0 ;
-(BOOL)checkForError:(struct ChipError )arg0 logMsg:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkForInitError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)checkForStartError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)checkIsRunning;
-(BOOL)checkIsRunning:(*id)arg0 ;
-(BOOL)commissionDevice:(NSUInteger)arg0 commissioningParams:(id)arg1 error:(*id)arg2 ;
-(BOOL)continueCommissioningDevice:(*void)arg0 ignoreAttestationFailure:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)getBaseDevice:(NSUInteger)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)openPairingWindow:(NSUInteger)arg0 duration:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)pairDevice:(NSUInteger)arg0 address:(id)arg1 port:(unsigned short)arg2 setupPINCode:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)pairDevice:(NSUInteger)arg0 discriminator:(unsigned short)arg1 setupPINCode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)pairDevice:(NSUInteger)arg0 onboardingPayload:(id)arg1 error:(*id)arg2 ;
-(BOOL)startup:(id)arg0 ;
-(BOOL)stopDevicePairing:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)getDeviceBeingCommissioned:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithFactory:(id)arg0 queue:(id)arg1 ;
-(id)openPairingWindowWithPIN:(NSUInteger)arg0 duration:(NSUInteger)arg1 discriminator:(NSUInteger)arg2 setupPIN:(NSUInteger)arg3 error:(*id)arg4 ;
-(struct ChipError )isRunningOnFabric:(*void)arg0 fabricIndex:(unsigned char)arg1 isRunning:(*BOOL)arg2 ;
-(unsigned char)fabricIndex;
-(void)cleanup;
-(void)cleanupAfterStartup;
-(void)clearDeviceAttestationDelegateBridge;
-(void)setPairingDelegate:(id)arg0 queue:(id)arg1 ;
-(void)shutDownCppController;
-(void)shutdown;


@end


#endif