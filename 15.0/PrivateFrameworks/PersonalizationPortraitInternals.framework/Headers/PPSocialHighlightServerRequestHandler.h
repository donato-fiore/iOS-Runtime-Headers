// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTSERVERREQUESTHANDLER_H
#define PPSOCIALHIGHLIGHTSERVERREQUESTHANDLER_H

@class NSArray, NSString;
@protocol PPSocialHighlightServerProtocol, PPSocialHighlightClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPSocialHighlightServerRequestHandler : NSObject <PPSocialHighlightServerProtocol>

 {
    id<PPSocialHighlightClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (copy, nonatomic) NSArray *applicationIdentifiers; // ivar: _applicationIdentifiers
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)attributionForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)decayIntervalWithCompletion:(id)arg0 ;
-(void)feedbackForAttribution:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)feedbackForHighlight:(id)arg0 type:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 completion:(id)arg4 ;
-(void)rankedHighlightsForSyncedItems:(id)arg0 client:(id)arg1 variant:(id)arg2 queryId:(NSUInteger)arg3 ;
-(void)rankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 queryId:(NSUInteger)arg3 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif