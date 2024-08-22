// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTCLIENT_H
#define PPCONTACTCLIENT_H

@protocol PPContactClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPContactClient : NSObject <PPContactClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)contactHandlesForSource:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)contactHandlesForTopics:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)contactNameRecordChangesForClient:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)contactNameRecordsForClient:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)rankedContactsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)upcomingRelevantContactsForQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(id)_remoteObjectProxy;
-(id)init;
-(void)_unblockPendingQueries;
-(void)contactHandlesForSourceBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)contactHandlesForTopicsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)contactNameRecordBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)contactNameRecordChangesBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)contactNameRecordChangesForClient:(id)arg0 completion:(id)arg1 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg0 chosenContactIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)rankedContactsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)upcomingRelevantContactsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif