// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPDEVICECONTROLLER_H
#define CHIPDEVICECONTROLLER_H

@class NSRecursiveLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHIPDeviceController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue
@property (readonly) *void cppCommissioner; // ivar: _cppCommissioner
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly) unsigned short listenPort; // ivar: _listenPort
@property (readonly) NSUInteger localDeviceId; // ivar: _localDeviceId
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (readonly) *void operationalCredentialsDelegate; // ivar: _operationalCredentialsDelegate
@property (readonly) *CHIPDevicePairingDelegateBridge pairingDelegateBridge; // ivar: _pairingDelegateBridge
@property (readonly) *CHIPPersistentStorageDelegateBridge persistentStorageDelegateBridge; // ivar: _persistentStorageDelegateBridge


+(id)sharedController;
-(BOOL)checkForError:(int)arg0 logMsg:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkForInitError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)checkForStartError:(BOOL)arg0 logMsg:(id)arg1 ;
-(BOOL)pairDevice:(NSUInteger)arg0 address:(id)arg1 port:(unsigned short)arg2 discriminator:(unsigned short)arg3 setupPINCode:(unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)pairDevice:(NSUInteger)arg0 discriminator:(unsigned short)arg1 setupPINCode:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)pairDevice:(NSUInteger)arg0 onboardingPayload:(id)arg1 onboardingPayloadType:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)pairDeviceWithoutSecurity:(NSUInteger)arg0 address:(id)arg1 port:(unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)shutdown;
-(BOOL)startup:(id)arg0 ;
-(BOOL)stopDevicePairing:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)unpairDevice:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_getControllerNodeId;
-(id)getControllerNodeId;
-(id)getPairedDevice:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(void)setPairingDelegate:(id)arg0 queue:(id)arg1 ;
-(void)updateDevice:(NSUInteger)arg0 fabricId:(NSUInteger)arg1 ;


@end


#endif