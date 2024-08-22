// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKMESSAGESSYNCSERVICESERVER_H
#define NNMKMESSAGESSYNCSERVICESERVER_H

@protocol NNMKMessagesSyncServiceServerDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKMessagesSyncServiceServerDelegate> *delegate; // ivar: _delegate


-(id)addMessages:(id)arg0 notificationPriority:(BOOL)arg1 ;
-(id)deleteMessages:(id)arg0 notificationPriority:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)sendBatchedFetchResult:(id)arg0 ;
-(id)sendBatchedInitialMessagesSync:(id)arg0 ;
-(id)sendCoalescedBatchedFetchResult:(id)arg0 ;
-(id)sendInitialMessagesSync:(id)arg0 ;
-(id)sendMoreMessages:(id)arg0 ;
-(id)sendMoreMessagesForConversation:(id)arg0 ;
-(id)updateMailboxSelection:(id)arg0 ;
-(id)updateMessagesStatus:(id)arg0 notificationPriority:(BOOL)arg1 ;
-(void)connectivityChanged;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)readResourceAtURL:(id)arg0 metadata:(id)arg1 ;
-(void)spaceBecameAvailable;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif