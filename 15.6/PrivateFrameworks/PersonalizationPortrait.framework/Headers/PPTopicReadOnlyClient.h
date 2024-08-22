// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICREADONLYCLIENT_H
#define PPTOPICREADONLYCLIENT_H

@protocol PPTopicClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)rankedTopicsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)scoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 handleBatch:(id)arg3 ;
-(BOOL)topicExtractionsFromText:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)topicRecordsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(id)_remoteObjectProxy;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)cachePath:(*id)arg0 ;
-(id)init;
-(id)topicCacheSandboxExtensionToken:(*id)arg0 ;
-(id)unmapMappedTopicIdentifier:(id)arg0 mappingIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)_unblockPendingQueries;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)registerUniversalSearchSpotlightFeedback:(id)arg0 completion:(id)arg1 ;
-(void)scoredMappedTopicBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)topicBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)topicExtractionsFromTextBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)topicRecordBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif