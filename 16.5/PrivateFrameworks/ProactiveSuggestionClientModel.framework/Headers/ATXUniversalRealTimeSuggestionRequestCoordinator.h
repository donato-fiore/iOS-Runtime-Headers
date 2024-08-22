// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNIVERSALREALTIMESUGGESTIONREQUESTCOORDINATOR_H
#define ATXUNIVERSALREALTIMESUGGESTIONREQUESTCOORDINATOR_H

@class _PASLock;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>

#import "ATXUniversalBlendingLayer.h"
#import "ATXUniversalBlendingLayerServer.h"
#import "ATXUniversalBlendingFeedbackWriter.h"

@interface ATXUniversalRealTimeSuggestionRequestCoordinator : NSObject {
    _PASLock *_pendingRefreshTrackerLock;
    ATXUniversalBlendingLayer *_blendingLayer;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
    ATXUniversalBlendingLayerServer *_server;
    ATXUniversalBlendingFeedbackWriter *_feedbackWriter;
}




-(id)cacheUpdateDictionaryFromCacheUpdatesArray:(id)arg0 ;
-(id)clientModelUpdatesForSuggestionRequest:(id)arg0 ;
-(id)generatedRankedSuggestionsForSuggestionRequest:(id)arg0 limit:(id)arg1 ;
-(id)initWithBlendingLayer:(id)arg0 hyperParameters:(id)arg1 pendingRefreshTracker:(id)arg2 server:(id)arg3 ;
-(id)selectedLayoutForSuggestionRequest:(id)arg0 ;
-(void)delegateUpdatedSuggestionsForClientModelId:(id)arg0 suggestionRequest:(id)arg1 response:(id)arg2 clientModelsPendingUpdate:(id)arg3 ;
-(void)realTimeProviderDelegateForClientModelId:(id)arg0 completion:(id)arg1 ;
-(void)registerRealTimeSuggestionProviderDelegate:(id)arg0 clientModelId:(id)arg1 ;
-(void)remoteAsyncDelegateForClientModel:(id)arg0 completion:(id)arg1 ;
-(void)respondToRequestWithPreviouslyCachedPredictionsForClientModelId:(id)arg0 suggestionRequest:(id)arg1 ;
-(void)updateSuggestionsFromDelegate:(id)arg0 clientModelId:(id)arg1 clientModelsPendingUpdate:(id)arg2 dispatchGroup:(id)arg3 suggestionRequest:(id)arg4 ;


@end


#endif