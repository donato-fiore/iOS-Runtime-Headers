// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTCLIENT_H
#define PPSOCIALHIGHLIGHTCLIENT_H

@protocol PPSocialHighlightClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPSocialHighlightClient : NSObject <PPSocialHighlightClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)rankedHighlightsForSyncedItems:(id)arg0 client:(id)arg1 variant:(id)arg2 error:(*id)arg3 handleBatch:(id)arg4 ;
-(BOOL)rankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 error:(*id)arg3 handleBatch:(id)arg4 ;
-(CGFloat)decayInterval;
-(id)_remoteObjectProxy;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)attributionForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_unblockPendingQueries;
-(void)feedbackForAttribution:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)feedbackForHighlight:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)rankedHighlightsBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif