// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKMESSAGECONTENTSYNCSERVICECLIENT_H
#define NNMKMESSAGECONTENTSYNCSERVICECLIENT_H

@protocol NNMKMessageContentSyncServiceClientDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKMessageContentSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKMessageContentSyncServiceClientDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif