// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKMESSAGESSYNCSERVICECLIENT_H
#define NNMKMESSAGESSYNCSERVICECLIENT_H

@protocol NNMKMessagesSyncServiceClientDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKMessagesSyncServiceClientDelegate> *delegate; // ivar: _delegate


-(id)deleteMessages:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)moveMessages:(id)arg0 ;
-(id)sendAttachmentAtURL:(id)arg0 forComposedMessageId:(id)arg1 ;
-(id)sendMessage:(id)arg0 ;
-(id)updateMailboxSelection:(id)arg0 ;
-(id)updateMessagesStatus:(id)arg0 ;
-(void)connectivityChanged;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)requestCompactMessages:(id)arg0 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;
-(void)warnMessagesFilteredOut:(id)arg0 ;


@end


#endif