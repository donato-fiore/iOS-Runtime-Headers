// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMDHTTPSERVERCLIENTCONNECTION_H
#define _HMDHTTPSERVERCLIENTCONNECTION_H

@class HMFObject, NSMutableDictionary, HMFHTTPClientConnection, HMFTimer, NSMutableArray, NSOperationQueue;


#import "HMDHTTPDevice.h"

@interface _HMDHTTPServerClientConnection : HMFObject {
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) HMFHTTPClientConnection *connection; // ivar: _connection
@property (readonly, nonatomic) HMDHTTPDevice *device; // ivar: _device
@property (readonly, nonatomic) HMFTimer *lostConnectionTimer; // ivar: _lostConnectionTimer
@property (readonly, nonatomic) NSMutableArray *receiveMessageRequests; // ivar: _receiveMessageRequests
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // ivar: _requestOperationQueue
@property (readonly, nonatomic) NSOperationQueue *transactionOperationQueue; // ivar: _transactionOperationQueue


+(id)shortDescription;
-(id)debugDescription;
-(id)dequeueRequest;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)removeCompletionHandlerForTransactionIdentifier:(SEL)arg0 ;
-(id)shortDescription;
-(void)_reallySendMessage:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
// -(void)addCompletionHandler:(id)arg0 forTransactionIdentifier:(unk)arg1  ;
-(void)invalidate;
-(void)queueRequest:(id)arg0 ;
-(void)sendMessage:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif