// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKFETCHESSYNCSERVICECLIENT_H
#define NNMKFETCHESSYNCSERVICECLIENT_H

@protocol NNMKFetchesSyncServiceClientDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKFetchesSyncServiceClientDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(id)notifyCompanionAboutWebKitStatus:(id)arg0 ;
-(id)notifyInitialSyncFinished:(id)arg0 ;
-(id)requestContent:(id)arg0 highPriority:(BOOL)arg1 ;
-(id)requestFetch:(id)arg0 ;
-(id)requestFullSync:(id)arg0 ;
-(id)requestHaltSync:(id)arg0 ;
-(id)requestMoreMessagesInBatch:(id)arg0 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)requestMoreMessagesForConversation:(id)arg0 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif