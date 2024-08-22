// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKACCOUNTSSYNCSERVICESERVER_H
#define NNMKACCOUNTSSYNCSERVICESERVER_H

@protocol NNMKAccountsSyncServiceServerDelegate;


#import "NNMKSyncServiceEndpoint.h"

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKAccountsSyncServiceServerDelegate> *delegate; // ivar: _delegate


-(id)addOrUpdateAccount:(id)arg0 ;
-(id)deleteAccount:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)requestWatchAccountsStatus:(id)arg0 ;
-(id)sendInitialAccountsSync:(id)arg0 ;
-(id)sendStandaloneAccountIdentity:(id)arg0 ;
-(id)syncVIPList:(id)arg0 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)readProtobufData:(id)arg0 type:(NSUInteger)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg0 ;


@end


#endif