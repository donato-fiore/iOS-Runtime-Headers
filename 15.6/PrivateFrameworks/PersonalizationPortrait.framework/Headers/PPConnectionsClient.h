// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSCLIENT_H
#define PPCONNECTIONSCLIENT_H

@protocol PPConnectionsClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)recentLocationDonationsSinceDate:(id)arg0 client:(id)arg1 error:(*id)arg2 handleBatch:(id)arg3 ;
-(BOOL)recentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 explanationSet:(id)arg3 client:(id)arg4 error:(*id)arg5 handleBatch:(id)arg6 ;
-(id)_remoteObjectProxy;
-(id)init;
-(void)_unblockPendingQueries;
-(void)recentLocationsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif