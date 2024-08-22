// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTEMPORALCLUSTERCLIENT_H
#define PPTEMPORALCLUSTERCLIENT_H

@protocol PPTemporalClusterClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPTemporalClusterClient : NSObject <PPTemporalClusterClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)rankedTemporalClustersForStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 handleBatch:(id)arg3 ;
-(id)_remoteObjectProxy;
-(id)init;
-(void)_unblockPendingQueries;
-(void)rankedTemporalClusterBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif