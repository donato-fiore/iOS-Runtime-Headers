// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTOPICREADONLYSERVERREQUESTHANDLER_H
#define PPTOPICREADONLYSERVERREQUESTHANDLER_H

@class _PASBundleIdResolver, NSString;
@protocol PPTopicReadOnlyServerProtocol, PPTopicClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol>

 {
    id<PPTopicClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // ivar: _bundleIdResolver
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


+(id)filterQIDDictionary:(id)arg0 withAllowlistOfProcess:(id)arg1 allowlist:(id)arg2 ;
+(id)filterScoredTopicsNotInAllowlist:(id)arg0 withAllowlistOfProcess:(id)arg1 allowlist:(id)arg2 ;
+(id)filterTopicRecordsNotInAllowlist:(id)arg0 withAllowlistOfProcess:(id)arg1 allowlist:(id)arg2 ;
-(id)init;
-(void)cachePath:(id)arg0 ;
-(void)rankedTopicsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)registerUniversalSearchSpotlightFeedback:(id)arg0 completion:(id)arg1 ;
-(void)scoresForTopicMapping:(id)arg0 query:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)topicCacheSandboxExtensionToken:(id)arg0 ;
-(void)topicExtractionsFromText:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)topicRecordsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)unblockPendingQueries;
-(void)unmapMappedTopicIdentifier:(id)arg0 mappingIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif