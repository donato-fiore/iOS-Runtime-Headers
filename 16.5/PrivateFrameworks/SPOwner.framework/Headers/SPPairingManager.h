// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPPAIRINGMANAGER_H
#define SPPAIRINGMANAGER_H

@class FMXPCServiceDescription, FMXPCSession;
@protocol SPPairingManagerXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPPairingManager : NSObject

@property (retain, nonatomic) NSObject<SPPairingManagerXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session


-(id)init;
-(id)remoteInterface;
-(id)userAgentProxy;
-(void)allPairingErrorsWithCompletion:(id)arg0 ;
-(void)alwaysBeaconWildStateWithCompletion:(id)arg0 ;
-(void)currentBeaconingKeyWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)finalizePairingWithSession:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)finalizePairingWithSession:(id)arg0 name:(id)arg1 roleId:(NSInteger)arg2 roleEmoji:(id)arg3 keyStatus:(id)arg4 collaborativeKey:(id)arg5 signature:(id)arg6 completion:(id)arg7 ;
-(void)getLocalPairingDataWithCompletion:(id)arg0 ;
-(void)getOfflineFindingInfoWithCurrentData:(id)arg0 completion:(id)arg1 ;
-(void)initiatePairingSessionWithCompletion:(id)arg0 ;
-(void)invalidatePairingSession:(id)arg0 completion:(id)arg1 ;
-(void)setAlwaysBeaconState:(BOOL)arg0 completion:(id)arg1 ;
-(void)setAlwaysBeaconWildState:(BOOL)arg0 completion:(id)arg1 ;
-(void)unpairUUID:(id)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)verifyPairingWithPairingSession:(id)arg0 signature:(id)arg1 attestation:(id)arg2 systemPublicKey:(id)arg3 refKeyPublicKey:(id)arg4 systemVersion:(id)arg5 vendorId:(NSInteger)arg6 productId:(NSInteger)arg7 ecid:(id)arg8 chipId:(id)arg9 serialNumber:(id)arg10 collaborativeKey:(id)arg11 completion:(id)arg12 ;


@end


#endif