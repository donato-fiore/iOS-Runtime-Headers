// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDONATIONMANAGER_H
#define CKVDONATIONMANAGER_H

@protocol CKVDonateRequestDelegate, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKVQueue.h"
#import "CKVDonateRequest.h"
#import "CKVIndexUpdaterFactory.h"

@interface CKVDonationManager : NSObject <CKVDonateRequestDelegate>

 {
    unsigned int _eventIdCounter;
    unsigned int _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    CGFloat _donationTimeout;
    NSObject<OS_dispatch_queue> *_registryQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    CKVQueue *_requestQueue;
    CKVDonateRequest *_activeRequest;
    BOOL _suspended;
}


@property (readonly, nonatomic) CKVIndexUpdaterFactory *updaterFactory; // ivar: _updaterFactory


-(id)init;
-(id)initWithDonationTimeout:(CGFloat)arg0 indexManager:(id)arg1 settings:(id)arg2 ;
-(void)_beginTransaction;
-(void)_endTransaction;
-(void)_handleNextRequest;
-(void)completeRequest:(id)arg0 ;
-(void)resume;
-(void)submitRequest:(id)arg0 ;
-(void)suspend;


@end


#endif