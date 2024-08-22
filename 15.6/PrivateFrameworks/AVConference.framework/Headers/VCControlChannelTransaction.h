// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONTROLCHANNELTRANSACTION_H
#define VCCONTROLCHANNELTRANSACTION_H

@class NSNumber;
@protocol VCControlChannelTransactionDelegate;


#import "VCObject.h"

@interface VCControlChannelTransaction : VCObject {
    unsigned int _sessionID;
    NSNumber *_participantID;
    NSUInteger _transactionID;
    _opaque_pthread_mutex_t _transactionLock;
    _opaque_pthread_cond_t _transactionDone;
    BOOL _isConfirmed;
    BOOL _isFlushed;
    id<VCControlChannelTransactionDelegate> *_weakTransactionDelegate;
}




+(BOOL)sendUnreliableMessage:(id)arg0 sessionID:(unsigned int)arg1 participantID:(id)arg2 transactionID:(id)arg3 transactionDelegate:(id)arg4 ;
-(BOOL)sendReliableMessage:(id)arg0 sessionID:(unsigned int)arg1 participantID:(id)arg2 timeout:(id)arg3 useFastRetries:(BOOL)arg4 ;
-(float)retryTimeoutForRetryAttempt:(unsigned int)arg0 usingFastRetries:(BOOL)arg1 ;
-(id)initWithTransportSessionID:(unsigned int)arg0 participantID:(id)arg1 transactionID:(NSUInteger)arg2 transactionDelegate:(id)arg3 ;
-(unsigned int)retryCountUsingFastRetries:(BOOL)arg0 ;
-(void)confirmedTransactionByParticipantID:(id)arg0 sessionID:(unsigned int)arg1 ;
-(void)dealloc;
-(void)flushTransaction;


@end


#endif