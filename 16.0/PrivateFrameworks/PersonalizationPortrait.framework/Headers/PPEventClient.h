// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPEVENTCLIENT_H
#define PPEVENTCLIENT_H

@protocol PPEventClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPEventClient : NSObject <PPEventClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)eventHighlightsFrom:(id)arg0 to:(id)arg1 options:(int)arg2 error:(*id)arg3 handleBatch:(id)arg4 ;
-(BOOL)eventNameRecordsForClient:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)interactionSummaryMetricsWithError:(*id)arg0 handleBatch:(id)arg1 ;
-(BOOL)resolveEventNameRecordChanges:(id)arg0 client:(id)arg1 error:(*id)arg2 handleBatch:(id)arg3 ;
-(BOOL)scoredEventsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)sendRTCLogsWithError:(*id)arg0 ;
-(id)_remoteObjectProxy;
-(id)init;
-(void)_unblockPendingQueries;
-(void)eventHighlightsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)eventNameRecordBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)eventNameRecordChangesBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)interactionSummaryMetricsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)scoredEventsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif