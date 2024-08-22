// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKFETCHESSYNCSERVICESERVER_H
#define NNMKFETCHESSYNCSERVICESERVER_H

@protocol NNMKFetchesSyncServiceServerDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKFetchesSyncServiceServerDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(id)reportComposedMessageSendingProgress:(id)arg0 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)notifyFetchRequestCompleted:(id)arg0 ;
-(void)notifyOldMessagesAvailable:(id)arg0 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)requestPrepareForFullSync:(id)arg0 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;
-(void)warnErrorDownloadingContentForMessage:(id)arg0 notificationPriority:(BOOL)arg1 userRequested:(BOOL)arg2 ;


@end


#endif