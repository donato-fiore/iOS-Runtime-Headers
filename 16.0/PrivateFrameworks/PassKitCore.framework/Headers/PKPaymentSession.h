// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSESSION_H
#define PKPAYMENTSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKTransactionSessionWrapper.h"

@interface PKPaymentSession : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    PKTransactionSessionWrapper *_internalSession;
}


@property (readonly, nonatomic) NSUInteger lifecycleState; // ivar: _lifecycleState


+(id)forceContactlessInterfaceSessionWithCompletion:(id)arg0 ;
// +(id)forceContactlessInterfaceSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startApplePayTrustSessionWithCompletion:(id)arg0 ;
// +(id)startApplePayTrustSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startContactlessInterfaceSessionWithCompletion:(id)arg0 ;
// +(id)startContactlessInterfaceSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startDigitalCarKeySessionWithCompletion:(id)arg0 ;
// +(id)startDigitalCarKeySessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startInAppSessionWithCompletion:(id)arg0 ;
// +(id)startInAppSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startPeerPaymentSessionWithCompletion:(id)arg0 ;
// +(id)startPeerPaymentSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startReaderSessionWithCompletion:(id)arg0 ;
// +(id)startReaderSessionWithCompletion:(id)arg0 targetQueue:(unk)arg1  ;
+(id)startSTSContactlessInterfaceSessionWithDelegate:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;
-(void)createSessionHandoffTokenWithCompletion:(id)arg0 ;
-(void)invalidateSession;
-(void)invalidateSessionWithCompletion:(id)arg0 ;
-(void)performBlockAsyncOnInternalSession:(id)arg0 ;
-(void)performBlockSyncOnInternalSession:(id)arg0 ;


@end


#endif