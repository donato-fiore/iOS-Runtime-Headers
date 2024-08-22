// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIPROACTIVEQUICKTYPEMANAGER_H
#define TIPROACTIVEQUICKTYPEMANAGER_H

@class NSDate, NSString;
@protocol TIProactiveQuickTypeManaging, TIKeyboardActivityObserving, OS_dispatch_queue, _ICPredictionManaging;

#import <Foundation/Foundation.h>

#import "TIProactiveTrigger.h"

@interface TIProactiveQuickTypeManager : NSObject <TIProactiveQuickTypeManaging, TIKeyboardActivityObserving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<_ICPredictionManaging> *_inputContextPredictionManager;
    TIProactiveTrigger *_lastTriggerForSuggestion;
    NSDate *_lastSuggestionTime;
    NSString *_maxLengthProactiveCandidate;
    NSUInteger _textBeforeLength;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buildSecureCandidateForTestFrom:(id)arg0 withSecureCandidateRenderer:(id)arg1 input:(id)arg2 ;
+(id)buildSecureCandidateFrom:(id)arg0 withSecureCandidateRenderer:(id)arg1 input:(id)arg2 ;
+(id)proactiveTriggerForTextContentType:(id)arg0 ;
+(id)proactiveTriggerForTextContentType:(id)arg0 withContextBeforeInput:(id)arg1 autofillMode:(NSUInteger)arg2 ;
+(id)sharedInstance;
+(id)singletonInstance;
+(void)setSharedTIProactiveQuickTypeManager:(id)arg0 ;
-(BOOL)isAutoCompleteEnabled;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isEnabled;
-(BOOL)usePQT2Flow;
-(NSUInteger)matchProactiveCandidateToUserInput:(id)arg0 userInput:(id)arg1 ;
-(id)_makeQueue;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg0 withSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 textContentType:(id)arg3 ;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 nextInputWillInsertAutospace:(BOOL)arg9 withAvailableApps:(id)arg10 logBlock:(id)arg11 ;
-(id)getLastSuggestionTime;
-(id)init;
-(id)initWithICManager:(id)arg0 ;
-(id)renderItems:(id)arg0 withAdditionalPredictions:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 withInput:(id)arg4 ;
-(id)searchForMeCardEmailAddresses;
-(id)searchForMeCardRegions;
// -(void)addToTypologyTrace:(id)arg0 withTriggerSource:(unk)arg1 withTriggerType:(id)arg2 withTriggerSubType:(id)arg3 withPredictionResults:(id)arg4 withFirstTrigger:(id)arg5  ;
-(void)dealloc;
// -(void)generateAndRenderProactiveSuggestionsForInput:(id)arg0 withKeyboardState:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 nextInputWillInsertAutospace:(BOOL)arg9 withIsResponseDenyListed:(BOOL)arg10 withShouldDisableAutoCaps:(BOOL)arg11 withAvailableApps:(id)arg12 logBlock:(id)arg13 async:(unk)arg14 completion:(BOOL)arg15  ;
-(void)generateAndRenderProactiveSuggestionsWithInput:(id)arg0 withSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 textContentType:(id)arg3 async:(BOOL)arg4 completion:(id)arg5 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)loggingProactiveEngagementMetric:(NSUInteger)arg0 withLocale:(id)arg1 fieldType:(id)arg2 ;
-(void)propogateMetrics:(id)arg0 data:(id)arg1 ;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)reset;
-(void)suggestionAccepted:(id)arg0 fieldType:(id)arg1 ;
-(void)suggestionNotAccepted:(id)arg0 ;
-(void)userActionWithNoNewTriggers:(id)arg0 fieldType:(id)arg1 ;


@end


#endif