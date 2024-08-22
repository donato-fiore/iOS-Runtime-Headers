// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKRESENDSCHEDULER_H
#define NNMKRESENDSCHEDULER_H

@protocol NNMKResendSchedulerDelegate;

#import <Foundation/Foundation.h>

#import "NNMKSyncController.h"

@interface NNMKResendScheduler : NSObject

@property (weak, nonatomic) NSObject<NNMKResendSchedulerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger initialSyncResendInterval; // ivar: _initialSyncResendInterval
@property (retain, nonatomic) NNMKSyncController *syncController; // ivar: _syncController


-(id)deviceRegistry;
-(id)messageTypeForIDSIdentifier:(id)arg0 ;
-(id)objectIdsForPendingIDSIdentifier:(id)arg0 ;
-(void)_executePendingResendsAndContentRequests;
-(void)_failPendingComposedMessages;
-(void)_resendInitialSyncWithIDSIdentifier:(id)arg0 newResendInterval:(NSUInteger)arg1 mailboxIds:(id)arg2 ;
-(void)_resendObjectIds:(id)arg0 type:(id)arg1 resendInterval:(NSUInteger)arg2 idsIdentifier:(id)arg3 ;
-(void)_resendPendingAccountWithIds:(id)arg0 forIDSIdentifier:(id)arg1 newResendInterval:(NSUInteger)arg2 ;
-(void)_resendPendingMessageContentWithId:(id)arg0 sentBecauseUserRequested:(BOOL)arg1 idsIdentifier:(id)arg2 newResendInterval:(NSUInteger)arg3 ;
-(void)_resendPendingMessagesWithIds:(id)arg0 forIDSIdentifier:(id)arg1 newResendInterval:(NSUInteger)arg2 ;
-(void)_resendSendingProgressForComposedMessageWithId:(id)arg0 forIDSIdentifier:(id)arg1 newResendInterval:(NSUInteger)arg2 ;
-(void)_scheduleIdsIdentifierForResend:(id)arg0 currentResendInterval:(NSUInteger)arg1 newResendInterval:(NSUInteger)arg2 errorCode:(NSInteger)arg3 ;
-(void)deletePendingIDSMessagesForMailboxId:(id)arg0 ;
-(void)forceRetryingAllPendingIDSMessages;
-(void)handleIDSMessageFailedWithId:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)handleIDSMessageSentSuccessfullyWithId:(id)arg0 ;
-(void)registerIDSIdentifier:(id)arg0 objectIds:(id)arg1 type:(id)arg2 resendInterval:(NSUInteger)arg3 ;
-(void)resendObjectsForIDSIdentifier:(id)arg0 ;


@end


#endif