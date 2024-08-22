// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKACCOUNTSSYNCSERVICECLIENT_H
#define NNMKACCOUNTSSYNCSERVICECLIENT_H

@protocol NNMKAccountsSyncServiceClientDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKAccountsSyncServiceClientDelegate> *delegate; // ivar: _delegate


-(id)initWithQueue:(id)arg0 ;
-(id)sendAccountAuthenticationStatus:(id)arg0 ;
-(id)updateAccountSourceTypeForAccount:(id)arg0 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif