// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTEMPORALCLUSTERSERVERREQUESTHANDLER_H
#define PPTEMPORALCLUSTERSERVERREQUESTHANDLER_H

@class NSString;
@protocol PPTemporalClusterServerProtocol, PPTemporalClusterClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPTemporalClusterServerRequestHandler : NSObject <PPTemporalClusterServerProtocol>

 {
    id<PPTemporalClusterClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)rankedTemporalClustersForStartDate:(id)arg0 endDate:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif