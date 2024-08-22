// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFEEDBACKSESSIONROUTER_H
#define ATXFEEDBACKSESSIONROUTER_H

@class NSDictionary, NSMutableArray;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXBlendingLayerHyperParameters.h"

@interface ATXFeedbackSessionRouter : NSObject {
    NSDictionary *_feedbackListeners;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableArray *clientModelResults; // ivar: _clientModelResults


+(BOOL)_shouldProcessFeedbackSession:(id)arg0 ;
+(id)_clientModelIdToFeedbackListenersMapping:(id)arg0 ;
+(id)_executableToSuggestionMappingFromSuggestions:(id)arg0 ;
+(id)_suggestionsFromClientModelEqualToSuggestionsFromSessionWithUUIDs:(id)arg0 sessionUUIDToProactiveSuggestionMapping:(id)arg1 clientModelExecutableMapping:(id)arg2 ;
+(id)_uuidToSuggestionMappingForSuggestionsInFeedbackSession:(id)arg0 clientModelCacheUpdates:(id)arg1 ;
-(id)_predictionTimeContextWithDate:(id)arg0 ;
-(id)clientModelIdsAcceptingFeedback;
-(id)init;
-(id)initWithClientModelFeedbackListeners:(id)arg0 hyperParameters:(id)arg1 tracker:(id)arg2 ;
-(void)logFeedbackRecordedEngagementTypesForSession:(id)arg0 ;
-(void)processFeedbackResultForSession:(id)arg0 uiContext:(id)arg1 ;


@end


#endif