// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPSECURITYSESSION_H
#define HAPSECURITYSESSION_H

@class HMFObject, NSDictionary, NSData, NSString;
@protocol HMFLogging, HAPEncryptedSession, HAPSecuritySessionDelegate, OS_dispatch_queue;


#import "HAPSecuritySessionEncryption.h"

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSDictionary *additionalDerivedKeys; // ivar: _additionalDerivedKeys
@property (readonly) NSData *broadcastKey; // ivar: _broadcastKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HAPSecuritySessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPSecuritySessionEncryption *encryption; // ivar: _encryption
@property (readonly) NSUInteger hash;
@property (readonly, getter=isOpen) BOOL open;
@property (readonly, getter=isOpening) BOOL opening;
@property (nonatomic) *PairingSessionPrivate pairingSession; // ivar: _pairingSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger resumeSessionID; // ivar: _resumeSessionID
@property (readonly, nonatomic) NSUInteger role; // ivar: _role
@property (readonly) NSUInteger sessionStartTime; // ivar: _sessionStartTime
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_initializeSetupSession:(NSUInteger)arg0 ;
-(id)_broadcastInfo;
-(id)_handleLocalPairingIdentityRequestWithStatus:(*int)arg0 ;
-(id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg0 status:(*int)arg1 ;
-(id)_inputInfo;
-(id)_outputInfo;
-(id)decryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)encryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)initWithRole:(NSUInteger)arg0 resumeSessionID:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleSetupExchangeComplete;
-(void)_initiateClientSessionSetupExchange;
-(void)_notifyOpened;
-(void)_notifyOpening;
-(void)_processSetupExchangeData:(id)arg0 error:(id)arg1 ;
-(void)close;
-(void)closeWithError:(id)arg0 ;
-(void)dealloc;
-(void)open;
-(void)reallyOpen;
-(void)receivedSetupExchangeData:(id)arg0 error:(id)arg1 ;


@end


#endif