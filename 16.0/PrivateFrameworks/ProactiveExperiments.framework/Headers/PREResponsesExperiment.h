// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRERESPONSESEXPERIMENT_H
#define PRERESPONSESEXPERIMENT_H

@class RKMessageResponseManager, TIPreferencesController, NSUserDefaults, _PASLRUCache, _PASLock;
@protocol PREExperimentResolverProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;

#import <Foundation/Foundation.h>


@interface PREResponsesExperiment : NSObject {
    id<PREExperimentResolverProtocol> *_experimentResolver;
    id<PREResponsesMetricsProtocol> *_metrics;
    id<PREResponsesProtocol> *_xpcClient;
    RKMessageResponseManager *_rkClient;
    TIPreferencesController *_tiPreferencesController;
    NSUserDefaults *_defaults;
    _PASLRUCache *_responsesGeneratedCache;
    _PASLock *_guardedCachedResponsesGeneratedEvent;
}


@property (nonatomic) BOOL includeCannedResponses; // ivar: _includeCannedResponses
@property (nonatomic) BOOL includeCustomResponses; // ivar: _includeCustomResponses
@property (nonatomic) BOOL includeResponsesToRobots; // ivar: _includeResponsesToRobots
@property (nonatomic) BOOL registerDisplayed; // ivar: _registerDisplayed
@property (nonatomic) BOOL useResponseKitAsFallback; // ivar: _useResponseKitAsFallback


+(BOOL)_shouldInsertSuggestion:(id)arg0 forExistingSuggestions:(id)arg1 ;
+(id)_cannedRepliesForLanguage:(id)arg0 inputPreferences:(id)arg1 ;
+(id)_cannedSuggestionsForCannedResponseStrings:(id)arg0 ;
+(id)_combinedSuggestionsWithDynamicResponses:(id)arg0 cannedResponses:(id)arg1 ;
+(id)_getFormattedPREResponseItems:(id)arg0 inputPreferences:(id)arg1 ;
+(id)sharedManager;
-(BOOL)isStringEmpty:(id)arg0 ;
-(BOOL)shouldUseDefaultRKTreatment;
-(BOOL)shouldUseDefaultRKTreatmentForLanguage:(id)arg0 ;
-(NSUInteger)mode;
-(id)_responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 outgoingMessageHistory:(id)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 languageLastChangedDate:(id)arg7 recipientHandles:(id)arg8 options:(NSUInteger)arg9 preferredLocale:(id)arg10 ;
-(id)activeExperimentNameForLanguage:(id)arg0 ;
-(id)cacheKeyForMessage:(id)arg0 maxResponses:(NSUInteger)arg1 time:(id)arg2 language:(id)arg3 ;
-(id)cachedResponsesGeneratedEvent;
-(id)clippedMessageIfNecessary:(id)arg0 ;
-(id)fullNonEditableSuggestionsListForMessage:(id)arg0 context:(id)arg1 additionalSenderMessages:(id)arg2 date:(id)arg3 keyboardLanguageID:(id)arg4 keyboardLanguageLastChangedDate:(id)arg5 recipients:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 ;
-(id)fullNonEditableSuggestionsListForMessage:(id)arg0 context:(id)arg1 additionalSenderMessages:(id)arg2 date:(id)arg3 keyboardLanguageID:(id)arg4 recipients:(id)arg5 includeDynamicSuggestions:(BOOL)arg6 ;
-(id)handlesFromRecipients:(id)arg0 ;
-(id)init;
-(id)initWithExperimentResolver:(id)arg0 metricsClient:(id)arg1 xpcClient:(id)arg2 rkClient:(id)arg3 tiPreferencesController:(id)arg4 ;
-(id)inputMethodStringFrom:(int)arg0 ;
-(id)nonEditableSuggestionsForMessage:(id)arg0 messageDate:(id)arg1 senderID:(id)arg2 recipientHandles:(id)arg3 outgoingMessageHistory:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 ;
-(id)nonEditableSuggestionsForMessage:(id)arg0 messageDate:(id)arg1 senderID:(id)arg2 recipients:(id)arg3 outgoingMessageHistory:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 ;
-(id)responsesCache;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipients:(id)arg6 options:(NSUInteger)arg7 ;
-(id)stringArrayFromConversationTurns:(id)arg0 ;
-(id)stringArrayFromPreResponseItems:(id)arg0 ;
-(id)waitForPreResponseItemsForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 ;
-(int)preInputMethodFrom:(id)arg0 ;
-(void)_responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 outgoingMessageHistory:(id)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 languageLastChangedDate:(id)arg7 recipientHandles:(id)arg8 options:(NSUInteger)arg9 preferredLocale:(id)arg10 completionBlock:(id)arg11 ;
-(void)fullNonEditableSuggestionsListForMessage:(id)arg0 context:(id)arg1 additionalSenderMessages:(id)arg2 date:(id)arg3 keyboardLanguageID:(id)arg4 keyboardLanguageLastChangedDate:(id)arg5 recipients:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 completion:(id)arg8 ;
-(void)fullNonEditableSuggestionsListForMessage:(id)arg0 context:(id)arg1 additionalSenderMessages:(id)arg2 date:(id)arg3 keyboardLanguageID:(id)arg4 recipients:(id)arg5 includeDynamicSuggestions:(BOOL)arg6 completion:(id)arg7 ;
-(void)nonEditableSuggestionsForMessage:(id)arg0 messageDate:(id)arg1 senderID:(id)arg2 recipientHandles:(id)arg3 outgoingMessageHistory:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 completion:(id)arg8 ;
-(void)nonEditableSuggestionsForMessage:(id)arg0 messageDate:(id)arg1 senderID:(id)arg2 recipients:(id)arg3 outgoingMessageHistory:(id)arg4 keyboardLanguageID:(id)arg5 keyboardLanguageLastChangedDate:(id)arg6 includeDynamicSuggestions:(BOOL)arg7 completion:(id)arg8 ;
-(void)performWithResolvedModelAssetPathsUsingLanguage:(id)arg0 block:(id)arg1 ;
-(void)preResponseItemsForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;
-(void)primeResponsesExperimentsIfNeeded;
-(void)registerGenerationWithPreResponseItems:(id)arg0 language:(id)arg1 isCached:(BOOL)arg2 responseTimePerf:(NSUInteger)arg3 promptMessage:(id)arg4 generationStatus:(int)arg5 ;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 time:(id)arg2 metadata:(id)arg3 withLanguage:(id)arg4 ;
-(void)registerResponseDisplayedAtIndex:(id)arg0 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipients:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;
-(void)setCachedResponsesGeneratedEvent:(id)arg0 ;


@end


#endif