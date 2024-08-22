// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICECONTROLLER_H
#define MTRDEVICECONTROLLER_H

@class NSNumber, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTRDeviceControllerFactory.h"

@interface MTRDeviceController : NSObject {
    atomic<unsigned char> _storedFabricIndex;
}


@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly) NSNumber *compressedFabricID;
@property (readonly, nonatomic) NSNumber *controllerNodeID;
@property (readonly, nonatomic) NSNumber *controllerNodeId;
@property (readonly) *void cppCommissioner; // ivar: _cppCommissioner
@property (readonly) *void deviceAttestationDelegateBridge; // ivar: _deviceAttestationDelegateBridge
@property (readonly) *MTRDeviceControllerDelegateBridge deviceControllerDelegateBridge; // ivar: _deviceControllerDelegateBridge
@property (readonly) os_unfair_lock_s deviceMapLock; // ivar: _deviceMapLock
@property (readonly) unsigned char fabricIndex;
@property (readonly) MTRDeviceControllerFactory *factory; // ivar: _factory
@property (readonly) NSMutableDictionary *nodeIDToDeviceMap; // ivar: _nodeIDToDeviceMap
@property (readonly) *void operationalCredentialsDelegate; // ivar: _operationalCredentialsDelegate
@property (readonly) MTRP256KeypairBridge operationalKeypairBridge; // ivar: _operationalKeypairBridge
@property (readonly) *void partialDACVerifier; // ivar: _partialDACVerifier
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) MTRP256KeypairBridge signingKeypairBridge; // ivar: _signingKeypairBridge


+(BOOL)checkForError:(struct ChipError )arg0 logMsg:(id)arg1 error:(*id)arg2 ;
+(id)computePASEVerifierForSetupPasscode:(id)arg0 iterations:(id)arg1 salt:(id)arg2 error:(*id)arg3 ;
+(id)decodeXPCReadParams:(id)arg0 ;
+(id)decodeXPCResponseValues:(id)arg0 ;
+(id)decodeXPCSubscribeParams:(id)arg0 ;
+(id)encodeXPCReadParams:(id)arg0 ;
+(id)encodeXPCResponseValues:(id)arg0 ;
+(id)encodeXPCSubscribeParams:(id)arg0 ;
+(id)sharedControllerWithID:(id)arg0 xpcConnectBlock:(id)arg1 ;
+(id)sharedControllerWithId:(id)arg0 xpcConnectBlock:(id)arg1 ;
+(id)xpcInterfaceForClientProtocol;
+(id)xpcInterfaceForServerProtocol;
-(BOOL)cancelCommissioningForNodeID:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkForInitError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)checkForStartError:(struct ChipError )arg0 logMsg:(id)arg1 ;
-(BOOL)checkIsRunning;
-(BOOL)checkIsRunning:(*id)arg0 ;
-(BOOL)commissionDevice:(NSUInteger)arg0 commissioningParams:(id)arg1 error:(*id)arg2 ;
-(BOOL)commissionNodeWithID:(id)arg0 commissioningParams:(id)arg1 error:(*id)arg2 ;
-(BOOL)continueCommissioningDevice:(*void)arg0 ignoreAttestationFailure:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)getBaseDevice:(NSUInteger)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)openPairingWindow:(NSUInteger)arg0 duration:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)pairDevice:(NSUInteger)arg0 address:(id)arg1 port:(unsigned short)arg2 setupPINCode:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)pairDevice:(NSUInteger)arg0 discriminator:(unsigned short)arg1 setupPINCode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)pairDevice:(NSUInteger)arg0 onboardingPayload:(id)arg1 error:(*id)arg2 ;
-(BOOL)setOperationalCertificateIssuer:(id)arg0 queue:(id)arg1 ;
-(BOOL)setupCommissioningSessionWithPayload:(id)arg0 newNodeID:(id)arg1 error:(*id)arg2 ;
-(BOOL)startup:(id)arg0 ;
-(BOOL)stopDevicePairing:(NSUInteger)arg0 error:(*id)arg1 ;
// -(BOOL)syncRunOnWorkQueueWithBoolReturnValue:(id)arg0 error:(unk)arg1  ;
-(id)attestationChallengeForDeviceID:(id)arg0 ;
-(id)baseDeviceForNodeID:(id)arg0 ;
-(id)computePaseVerifier:(unsigned int)arg0 iterations:(unsigned int)arg1 salt:(id)arg2 ;
-(id)deviceBeingCommissionedWithNodeID:(id)arg0 error:(*id)arg1 ;
-(id)deviceForNodeID:(id)arg0 ;
-(id)fetchAttestationChallengeForDeviceId:(NSUInteger)arg0 ;
-(id)getDeviceBeingCommissioned:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithFactory:(id)arg0 queue:(id)arg1 ;
-(id)openPairingWindowWithPIN:(NSUInteger)arg0 duration:(NSUInteger)arg1 discriminator:(NSUInteger)arg2 setupPIN:(NSUInteger)arg3 error:(*id)arg4 ;
// -(id)syncRunOnWorkQueueWithReturnValue:(id)arg0 error:(unk)arg1  ;
-(struct ChipError )isRunningOnFabric:(*void)arg0 fabricIndex:(unsigned char)arg1 isRunning:(*BOOL)arg2 ;
-(unsigned char)sessionTransportTypeForDevice:(id)arg0 ;
// -(void)asyncDispatchToMatterQueue:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)asyncGetCommissionerOnMatterQueue:(id)arg0 errorHandler:(unk)arg1  ;
-(void)cleanup;
-(void)cleanupAfterStartup;
-(void)clearDeviceAttestationDelegateBridge;
-(void)deinitFromFactory;
-(void)getSessionForCommissioneeDevice:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getSessionForNode:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidateCASESessionForNode:(NSUInteger)arg0 ;
-(void)operationalInstanceAdded:(NSUInteger)arg0 ;
-(void)preWarmCommissioningSession;
-(void)removeDevice:(id)arg0 ;
-(void)setDeviceControllerDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setNocChainIssuer:(id)arg0 queue:(id)arg1 ;
-(void)setPairingDelegate:(id)arg0 queue:(id)arg1 ;
-(void)shutDownCppController;
-(void)shutdown;
// -(void)syncRunOnWorkQueue:(id)arg0 error:(unk)arg1  ;


@end


#endif