// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)initWithBlendingLayer:(id)arg0 hyperParameters:(id)arg1 pendingRefreshTracker:(id)arg2 server:(id)arg3 ;
-(id)selectedLayoutAfterReceivingClientModelSuggestionsForRequest:(id)arg0 ;
-(id)selectedLayoutForInteractionSuggestionRequest:(id)arg0 ;
-(id)selectedLayoutForSuggestionRequest:(id)arg0 ;
-(void)realTimeProviderDelegateForClientModelId:(id)arg0 completion:(id)arg1 ;
-(void)registerRealTimeSuggestionProviderDelegate:(id)arg0 clientModelId:(id)arg1 ;
-(void)remoteAsyncDelegateForClientModel:(id)arg0 completion:(id)arg1 ;
-(void)respondToRequestWithPreviouslyCachedPredictionsForClientModelId:(id)arg0 suggestionRequest:(id)arg1 ;


@end


#endif