// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNIVERSALBLENDINGLAYERSERVER_H
#define ATXUNIVERSALBLENDINGLAYERSERVER_H

@class _PASLock, _PASSimpleCoalescingTimer, NSXPCListener, NSString;
@protocol ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate, ATXBlendingLayerServerDelegateProtocol, ATXEngagementRecordManagerProtocol, ATXUniversalBlendingLayerHyperParametersProtocol, OS_dispatch_queue, ATXClientModelCacheManagerProtocol;

#import <Foundation/Foundation.h>

#import "ATXClientModelNotificationManager.h"
#import "ATXUniversalRealTimeSuggestionRequestCoordinator.h"
#import "ATXUniversalBlendingFeedbackWriter.h"
#import "ATXUniversalBlendingLayer.h"

@interface ATXUniversalBlendingLayerServer : NSObject <ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate>

 {
    _PASLock *_pendingRefreshTrackerLock;
    ATXClientModelNotificationManager *_clientModelNotificationManager;
    id<ATXBlendingLayerServerDelegateProtocol> *_serverDelegate;
    id<ATXEngagementRecordManagerProtocol> *_engagementRecordsManager;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
    ATXUniversalRealTimeSuggestionRequestCoordinator *_realTimeSuggestionRequestCoordinator;
    ATXUniversalBlendingFeedbackWriter *_feedbackWriter;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _blendingDarwinNotificationObserver;
    NSXPCListener *_xpcListener;
}


@property (readonly, nonatomic) ATXUniversalBlendingLayer *blendingLayer; // ivar: _blendingLayer
@property (readonly, nonatomic) NSObject<ATXClientModelCacheManagerProtocol> *clientModelCacheManager; // ivar: _clientModelCacheManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)willForceRefreshOfAllUIs;
-(id)clientModelsThatUpdatedSuggestionsRecently;
-(id)consumerSubTypesToRefreshGivenUpdatesFromClientModels:(id)arg0 ;
-(id)generatedRankedSuggestionsForSuggestionRequest:(id)arg0 limit:(id)arg1 ;
-(id)initWithBlendingLayer:(id)arg0 engagementRecordsManager:(id)arg1 hyperParameters:(id)arg2 clientModelCacheManager:(id)arg3 clientModelNotificationManager:(id)arg4 serverDelegate:(id)arg5 pendingRefreshTracker:(id)arg6 ;
-(id)initWithBlendingLayer:(id)arg0 engagementRecordsManager:(id)arg1 hyperParameters:(id)arg2 serverDelegate:(id)arg3 ;
-(id)selectedLayoutForSuggestionRequest:(id)arg0 ;
-(void)clientModelUpdatedNotificationId:(id)arg0 clientModelId:(id)arg1 completion:(id)arg2 ;
-(void)clientModelUpdatedSuggestions:(id)arg0 feedbackMetadata:(id)arg1 clientModelId:(id)arg2 completion:(id)arg3 ;
-(void)coalescedBlendingLayerRefresh;
-(void)dealloc;
-(void)generateLayoutForRequest:(id)arg0 reply:(id)arg1 ;
-(void)generateRankedSuggestionsForRequest:(id)arg0 limit:(id)arg1 reply:(id)arg2 ;
-(void)refreshBlendingLayer;
-(void)refreshBlendingLayerIfNeededForNewSuggestions:(id)arg0 previousCacheUpdate:(id)arg1 clientModelId:(id)arg2 ;
-(void)registerRealTimeSuggestionProviderDelegate:(id)arg0 clientModelId:(id)arg1 ;
-(void)retrieveSuggestionsForClientModelId:(id)arg0 reply:(id)arg1 ;
-(void)setupXPCListener;
-(void)start;
-(void)updateClientModelCacheWithCacheUpdate:(id)arg0 previousCacheUpdate:(id)arg1 completion:(id)arg2 ;


@end


#endif