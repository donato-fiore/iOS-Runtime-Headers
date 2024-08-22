// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEPAIRINGMANAGER_H
#define NRDEVICEPAIRINGMANAGER_H

@class NSString, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRDevicePairingCriteria.h"

@interface NRDevicePairingManager : NSObject {
    NSString *_name;
    NRDevicePairingCriteria *_pairingCriteria;
    NSData *_extendedMetadata;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (copy, nonatomic) id *authRequestHandler; // ivar: _authRequestHandler
@property (copy, nonatomic) id *candidateDiscoveredHandler; // ivar: _candidateDiscoveredHandler
@property (copy, nonatomic) id *candidateLostHandler; // ivar: _candidateLostHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) NSUInteger managerState; // ivar: _managerState


-(id)initWithDeviceName:(id)arg0 pairingCriteria:(id)arg1 extendedMetadata:(id)arg2 queue:(id)arg3 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cancelDiscovery;
-(void)cancelPairing;
-(void)invalidate;
-(void)prepareForPairingWithCompletion:(id)arg0 ;
-(void)requestAuthMethodForDevice:(id)arg0 authMethod:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)retrieveExtendedMetadata:(id)arg0 withCompletion:(id)arg1 ;
-(void)startDiscoveryWithCompletion:(id)arg0 ;
// -(void)startPairingDevice:(id)arg0 withCompletion:(id)arg1 resultBlock:(unk)arg2  ;


@end


#endif