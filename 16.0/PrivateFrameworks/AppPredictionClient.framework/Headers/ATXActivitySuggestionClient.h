// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIVITYSUGGESTIONCLIENT_H
#define ATXACTIVITYSUGGESTIONCLIENT_H

@class BMInferredModeStream, NSHashTable, BMBiomeScheduler, BPSSink, _PASSimpleCoalescingTimer, RTRoutineManager, CLCircularRegion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXActivitySuggestionFeedbackStream.h"

@interface ATXActivitySuggestionClient : NSObject {
    BMInferredModeStream *_inferredModeStream;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    _PASSimpleCoalescingTimer *_coalescingTimer;
    RTRoutineManager *_routineManager;
}


@property (retain) CLCircularRegion *homeRegion; // ivar: _homeRegion
@property (retain) CLCircularRegion *workRegion; // ivar: _workRegion


+(Class)ATXTriggerClassFromDNDModeConfigurationTrigger:(id)arg0 ;
+(Class)DNDModeConfigurationTriggerClassFromATXTrigger:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_activityIsEligibleForSetUpSuggestion:(id)arg0 modeGlobals:(id)arg1 ;
-(BOOL)_activityIsEligibleForTriggerSuggestion:(id)arg0 modeGlobals:(id)arg1 ;
-(BOOL)_shouldSendAutomationSuggestionForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldSendModeSetUpSuggestionAtEndOfModeToLockScreen:(id)arg0 modeGlobals:(id)arg1 ;
-(BOOL)_shouldSendModeTriggerSuggestionAtEndOfModeToLockScreen:(id)arg0 modeGlobals:(id)arg1 ;
-(id)DNDModeConfigurationTriggersToATXTriggers:(id)arg0 ;
-(id)_activityForEvent:(id)arg0 ;
-(id)_suggestionWithActivity:(id)arg0 modeGlobals:(id)arg1 ;
-(id)currentSuggestion;
-(id)init;
-(id)initWithRoutineManager:(id)arg0 ;
-(id)localizedSuggestionReasonForBMInferredModeEvent:(id)arg0 ;
-(id)previousSuggestion;
-(id)suggestionWithUUID:(id)arg0 ;
-(id)triggersToDNDModeConfigurationTriggers:(id)arg0 ;
-(void)_fetchAndCacheLOIs;
-(void)_logFeedbackEventForActivitySetUpSuggestionWithSuggestionUUID:(id)arg0 eventType:(NSUInteger)arg1 acceptedTriggers:(id)arg2 location:(NSUInteger)arg3 ;
-(void)_logFeedbackEventForConfiguredActivitySuggestionWithSuggestionUUID:(id)arg0 eventType:(NSUInteger)arg1 location:(NSUInteger)arg2 ;
-(void)_logFeedbackEventForSuggestionUUID:(id)arg0 suggestionType:(NSUInteger)arg1 eventType:(NSUInteger)arg2 acceptedTriggers:(id)arg3 location:(NSUInteger)arg4 ;
-(void)_logFeedbackEventForTriggerSuggestionWithSuggestionUUID:(id)arg0 eventType:(NSUInteger)arg1 acceptedTriggers:(id)arg2 location:(NSUInteger)arg3 ;
-(void)_modeDidChange;
-(void)_setUpPublisherIfNecessary;
-(void)addObserver:(id)arg0 sendingInitialChangeNotification:(BOOL)arg1 ;
-(void)currentSuggestionWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)didShowActivitySetUpSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)didShowActivitySuggestion:(id)arg0 ;
-(void)didShowConfiguredActivitySuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)didShowTriggerSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 sendingInitialChangeNotification:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)userDidAcceptActivitySetUpSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidAcceptActivitySuggestion:(id)arg0 acceptedTriggers:(id)arg1 ;
-(void)userDidAcceptConfiguredActivitySuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidAcceptTriggerSuggestionWithSuggestionUUID:(id)arg0 acceptedTriggers:(id)arg1 location:(NSUInteger)arg2 ;
-(void)userDidFinishActivitySetUpWithSuggestionUUID:(id)arg0 acceptedTriggers:(id)arg1 location:(NSUInteger)arg2 ;
-(void)userDidRejectActivitySetUpSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidRejectActivitySuggestion:(id)arg0 ;
-(void)userDidRejectConfiguredActivitySuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidRejectTriggerSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidSeeActivitySetUpSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidSeeConfiguredActivitySuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidSeeTriggerSuggestionWithSuggestionUUID:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidStartActivity:(id)arg0 location:(NSUInteger)arg1 ;
-(void)userDidStopActivity:(id)arg0 location:(NSUInteger)arg1 ;


@end


#endif