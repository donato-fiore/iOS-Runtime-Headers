// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKMESSAGECONTENTSYNCSERVICESERVER_H
#define NNMKMESSAGECONTENTSYNCSERVICESERVER_H

@protocol NNMKMessageContentSyncServiceServerDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKMessageContentSyncServiceServerDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(id)notifyInitialContentSyncCompleted:(id)arg0 ;
-(id)syncAttachment:(id)arg0 notificationPriority:(BOOL)arg1 userRequested:(BOOL)arg2 ;
-(id)syncMessageContent:(id)arg0 notificationPriority:(BOOL)arg1 userRequested:(BOOL)arg2 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif