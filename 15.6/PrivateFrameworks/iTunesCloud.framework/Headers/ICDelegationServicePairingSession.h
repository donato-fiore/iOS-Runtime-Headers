// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONSERVICEPAIRINGSESSION_H
#define ICDELEGATIONSERVICEPAIRINGSESSION_H

@class NSMutableArray, NSData, NSMutableData;
@protocol OS_dispatch_queue, ICDelegationServicePairingSessionDelegate;

#import <Foundation/Foundation.h>

#import "ICDelegationServiceSecuritySettings.h"

@interface ICDelegationServicePairingSession : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_existingPairingCompletionHandlers;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
    *PairingSessionPrivate _pairingSession;
    NSInteger _state;
}


@property (weak, nonatomic) NSObject<ICDelegationServicePairingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger role; // ivar: _role
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings; // ivar: _securitySettings


-(BOOL)_deriveEncryptionKeysReturningError:(*id)arg0 ;
-(id)_encryptedDataForData:(id)arg0 ;
-(id)initWithRole:(NSInteger)arg0 securitySettings:(id)arg1 ;
-(void)_handlePairingSessionCompletionWithError:(id)arg0 ;
-(void)_receivedData:(id)arg0 ;
-(void)_sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(void)getDecryptedDataForEncryptedData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getEncryptedDataForData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)prepareEncryptedSessionWithCompletionHandler:(id)arg0 ;
-(void)receievedData:(id)arg0 ;


@end


#endif