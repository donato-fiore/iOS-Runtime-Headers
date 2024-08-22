// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTSERVERREQUESTHANDLER_H
#define PPEVENTSERVERREQUESTHANDLER_H

@class NSString;
@protocol PPEventServerProtocol, PPEventClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol>

 {
    id<PPEventClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)eventHighlightsFrom:(id)arg0 to:(id)arg1 options:(int)arg2 queryId:(NSUInteger)arg3 ;
-(void)eventNameRecordsForClient:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)interactionSummaryMetricsWithQueryId:(NSUInteger)arg0 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)resolveEventNameRecordChanges:(id)arg0 client:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)scoredEventsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)sendRTCLogsWithWithCompletion:(id)arg0 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif