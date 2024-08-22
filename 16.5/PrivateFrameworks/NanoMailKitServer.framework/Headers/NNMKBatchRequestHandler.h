// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKBATCHREQUESTHANDLER_H
#define NNMKBATCHREQUESTHANDLER_H

@class NSMutableDictionary, NSDate;
@protocol NNMKBatchRequestHandlerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NNMKResendScheduler.h"
#import "NNMKSyncController.h"

@interface NNMKBatchRequestHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *batchedRequestByMailboxId; // ivar: _batchedRequestByMailboxId
@property (weak, nonatomic) NSObject<NNMKBatchRequestHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchTimeoutTimer; // ivar: _fetchTimeoutTimer
@property (retain, nonatomic) NSDate *lastRetryDate; // ivar: _lastRetryDate
@property (retain, nonatomic) NNMKResendScheduler *resendScheduler; // ivar: _resendScheduler
@property (nonatomic) NSUInteger retryCountForRequestingMissingHeadersInBatchedResponse; // ivar: _retryCountForRequestingMissingHeadersInBatchedResponse
@property (retain, nonatomic) NNMKSyncController *syncController; // ivar: _syncController


-(id)_batchedFetchResultForBatchedRequest:(id)arg0 mailbox:(id)arg1 diff:(id)arg2 localSyncedMessagesByMessageId:(id)arg3 ;
-(id)_checkBatchFetchedMessagesWithMailbox:(id)arg0 messageHeadersToFetch:(*id)arg1 attemptsFailed:(*BOOL)arg2 ;
-(id)checkBatchFetchedMessages;
-(id)firstMessageIds:(NSUInteger)arg0 fromBatchedFetchResults:(id)arg1 ;
-(id)init;
-(void)_rescheduleFetchTimeout;
-(void)cancelFetchTimeout;
-(void)handleBatchRequest:(id)arg0 ;
-(void)handleMessageAdded:(id)arg0 ;
-(void)handleMessageDeleted:(id)arg0 mailboxId:(id)arg1 ;
-(void)reset;
-(void)startFetchTimeout;


@end


#endif