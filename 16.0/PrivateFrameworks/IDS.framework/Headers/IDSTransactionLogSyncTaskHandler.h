// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSTRANSACTIONLOGSYNCTASKHANDLER_H
#define IDSTRANSACTIONLOGSYNCTASKHANDLER_H

@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;


#import "IDSTransactionLogTaskHandler.h"
#import "IDSTransactionLogSyncTask.h"

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler

@property (weak, nonatomic) NSObject<IDSTransactionLogTaskHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSTransactionLogSyncTask *syncTask; // ivar: _syncTask


-(id)_destinationsInMessages:(id)arg0 ;
-(id)_groupIDsFromMessages:(id)arg0 ;
-(id)_groupsByGroupIDFromGroups:(id)arg0 ;
-(id)_participantsByAliasFromParticipants:(id)arg0 ;
-(id)_transactionMessageFromTransportMessage:(id)arg0 groups:(id)arg1 participants:(id)arg2 accountInfo:(id)arg3 ;
-(id)_transactionMessageFromTransportMessage:(id)arg0 withDecryptedPayload:(id)arg1 accountInfo:(id)arg2 ;
-(id)_transactionMessageFromTransportMessage:(id)arg0 withGroupID:(id)arg1 groups:(id)arg2 accountInfo:(id)arg3 ;
-(id)_transactionMessageFromTransportMessage:(id)arg0 withParticipants:(id)arg1 accountInfo:(id)arg2 ;
-(id)initWithTask:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_transactionMessagesFromTransportMessages:(id)arg0 withParticipants:(id)arg1 groups:(id)arg2 accountInfo:(id)arg3 completion:(id)arg4 ;
-(void)perform;
-(void)qFetchParticipantsFromDeviceMessges:(id)arg0 andGroupsFromGroupMessages:(id)arg1 completion:(id)arg2 ;
-(void)qIngestMessages:(id)arg0 completion:(id)arg1 ;
-(void)qPerformWithToken:(id)arg0 ;


@end


#endif