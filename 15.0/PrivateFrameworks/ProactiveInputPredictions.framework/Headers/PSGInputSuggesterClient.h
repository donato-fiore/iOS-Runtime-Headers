// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGINPUTSUGGESTERCLIENT_H
#define PSGINPUTSUGGESTERCLIENT_H

@class _PASXPCClientHelper, _PASLRUCache;
@protocol PSGInputSuggesterProtocol;

#import <Foundation/Foundation.h>

#import "PSGStructuredInfoSuggestionCache.h"

@interface PSGInputSuggesterClient : NSObject <PSGInputSuggesterProtocol>

 {
    _PASXPCClientHelper *_clientHelper;
    PSGStructuredInfoSuggestionCache *_structuredSuggestionCache;
    _PASLRUCache *_triggeringCache;
}




+(BOOL)_allowSingleCharacterContactsAutocompleteTriggerForLanguage:(id)arg0 ;
+(BOOL)_shouldGenerateWordBoundaryPredictionsForContext:(id)arg0 localeIdentifier:(id)arg1 ;
+(id)_getContactsAutocompleteItemForQueryField:(id)arg0 searchTerm:(id)arg1 localeIdentifier:(id)arg2 ;
+(id)_getQueryFieldFromTextContentType:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_isFTLinkShareEnabled;
-(id)_appConnectionTriggerForTextContentType:(id)arg0 ;
-(id)_cachedStructuredSuggestionsForContext:(id)arg0 localeIdentifier:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)_combineMLAndRKItems:(id)arg0 mlItems:(id)arg1 ;
-(id)_fillSuggestionsForResponseItems:(id)arg0 localeIdentifier:(id)arg1 recipients:(id)arg2 recipientNames:(id)arg3 bundleIdentifier:(id)arg4 timeoutSeconds:(CGFloat)arg5 structuredInfoFetchLimit:(NSUInteger)arg6 availableApps:(id)arg7 textualResponseLimit:(NSUInteger)arg8 structuredInfoLimit:(NSUInteger)arg9 totalSuggestionsLimit:(NSUInteger)arg10 explanationSet:(id)arg11 error:(*id)arg12 ;
-(id)_getFTLinkShareTrigger;
-(id)_getWordBoundaryResultForRequest:(id)arg0 explanationSet:(id)arg1 ;
-(id)_getZKWResultsForRequest:(id)arg0 explanationSet:(id)arg1 ;
-(id)_logTriggerForItems:(id)arg0 request:(id)arg1 ;
-(id)_maybeModifyTrigger:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_responseKitPredictionsForContext:(id)arg0 bundleIdentifier:(id)arg1 conversationTurns:(id)arg2 languageID:(id)arg3 adaptationContextID:(id)arg4 shouldDisableAutoCaps:(BOOL)arg5 maximumResponses:(NSUInteger)arg6 isBlacklisted:(BOOL)arg7 ;
-(id)_rewriteMoneyAttributes:(id)arg0 ;
-(id)_rkResponsesForContext:(id)arg0 conversationTurns:(id)arg1 languageID:(id)arg2 maximumResponses:(NSUInteger)arg3 shouldDisableAutoCaps:(BOOL)arg4 adaptationContextID:(id)arg5 ;
-(id)_textualSuggestionsAndTriggersForRequest:(id)arg0 explanationSet:(id)arg1 ;
-(id)_wordBoundaryPredictionsForContext:(id)arg0 localeIdentifier:(id)arg1 textContentType:(id)arg2 recipientNames:(id)arg3 availableApps:(id)arg4 request:(id)arg5 explanationSet:(id)arg6 ;
-(id)init;
-(id)initWithStructuredInfoCache:(id)arg0 ;
-(void)inputSuggestionsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)logEngagement:(id)arg0 request:(id)arg1 position:(NSUInteger)arg2 ;
-(void)logErrorForRequest:(id)arg0 trigger:(id)arg1 errorType:(unsigned char)arg2 ;
-(void)logImpression:(id)arg0 request:(id)arg1 ;
-(void)logPrediction:(id)arg0 request:(id)arg1 latencyMillis:(CGFloat)arg2 ;
-(void)logSpeedMetricForLocaleIdentifier:(id)arg0 messageDurationMilliseconds:(int)arg1 messageLength:(int)arg2 messageWords:(int)arg3 ;
-(void)logTrigger:(id)arg0 request:(id)arg1 ;
-(void)warmUpWithCompletion:(id)arg0 ;


@end


#endif