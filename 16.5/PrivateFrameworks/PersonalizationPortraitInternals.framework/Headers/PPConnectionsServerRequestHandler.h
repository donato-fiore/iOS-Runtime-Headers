// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONNECTIONSSERVERREQUESTHANDLER_H
#define PPCONNECTIONSSERVERREQUESTHANDLER_H

@class NSString;
@protocol PPConnectionsServerProtocol, PPConnectionsClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol>

 {
    id<PPConnectionsClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)recentLocationDonationsSinceDate:(id)arg0 client:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)recentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 explanationSet:(id)arg3 client:(id)arg4 queryId:(NSUInteger)arg5 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif