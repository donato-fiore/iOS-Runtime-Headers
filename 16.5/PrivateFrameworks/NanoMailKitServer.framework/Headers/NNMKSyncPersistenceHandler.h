// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKSYNCPERSISTENCEHANDLER_H
#define NNMKSYNCPERSISTENCEHANDLER_H

@protocol NNMKDeviceRegistryHolder, NNMKSyncStateManager;

#import <Foundation/Foundation.h>

#import "NNMKBatchRequestHandler.h"
#import "NNMKSyncSessionController.h"
#import "NNMKSyncController.h"

@interface NNMKSyncPersistenceHandler : NSObject

@property (retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // ivar: _batchRequestHandler
@property (weak, nonatomic) NSObject<NNMKDeviceRegistryHolder> *delegate; // ivar: _delegate
@property (retain, nonatomic) NNMKSyncSessionController *sessionController; // ivar: _sessionController
@property (retain, nonatomic) NNMKSyncController *syncController; // ivar: _syncController
@property (weak, nonatomic) NSObject<NNMKSyncStateManager> *syncStateManager; // ivar: _syncStateManager


-(id)addAccountAuthenticationStatusRequest:(CGFloat)arg0 ;
-(id)addMessageContent:(id)arg0 forMessage:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(id)addMessages:(id)arg0 containsNewMessages:(BOOL)arg1 mailbox:(id)arg2 ;
-(id)addMessagesToResend:(id)arg0 mailbox:(id)arg1 isProtectedData:(BOOL)arg2 ;
-(id)addMoreConversationSpecificMessages:(id)arg0 conversationId:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(id)addMoreMessages:(id)arg0 mailbox:(id)arg1 isProtectedData:(BOOL)arg2 ;
-(id)addStandaloneAccountIdentity:(id)arg0 ;
-(id)currentDeviceRegistry;
-(id)deleteMessagesWithIds:(id)arg0 mailbox:(id)arg1 ;
-(id)persistAccounts:(id)arg0 ;
-(id)protoMessageFromMessage:(id)arg0 ;
-(id)updateMailboxListForAccount:(id)arg0 mailboxListChanged:(*BOOL)arg1 ;
-(id)updateMessagesFromConversation:(id)arg0 withState:(NSUInteger)arg1 include:(BOOL)arg2 mailbox:(id)arg3 ;
-(id)updateMessagesStatus:(id)arg0 mailbox:(id)arg1 ;
-(void)_createDefaultMailbox:(id)arg0 ;


@end


#endif