// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSSUGGESTER_H
#define _PSSUGGESTER_H

@class NSXPCConnection, BMSource, CNContactStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PSSuggesterConfiguration.h"

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_userConnection;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    BMSource *_feedbackSource;
    CNContactStore *_contactStore;
}


@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration; // ivar: _configuration


+(id)suggesterWithDaemon;
-(id)_getUserDaemonXPCConnection;
-(id)autocompleteSearchResultsWithPredictionContext:(id)arg0 ;
-(id)contactStore;
-(id)hourOfDayProbabilitiesToInteractWithContact:(id)arg0 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 feedbackRecording:(BOOL)arg1 ;
-(id)initWithDaemonUsingConfiguration:(id)arg0 ;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg0 candidates:(id)arg1 ;
-(id)rankedFamilySuggestions;
-(id)rankedGlobalSuggestionsFromContext:(id)arg0 contactsOnly:(BOOL)arg1 ;
-(id)rankedNameSuggestionsFromContext:(id)arg0 name:(id)arg1 ;
-(id)rankedSiriNLContactSuggestionsFromContext:(id)arg0 maxSuggestions:(id)arg1 interactionId:(id)arg2 ;
-(id)rankedZKWSuggestionsFromContext:(id)arg0 ;
-(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg0 daysAgo:(NSInteger)arg1 ;
-(id)shareExtensionSuggestionsFromContext:(id)arg0 ;
-(id)shareSheetInteractionsFromContext:(id)arg0 ;
-(id)shareSheetInteractionsFromContext:(id)arg0 maximumNumberOfSuggestions:(NSInteger)arg1 ;
-(id)suggestInteractionsFromContext:(id)arg0 ;
-(void)dealloc;
-(void)provideFeedbackForContactsAutocompleteSuggestions:(id)arg0 ;
-(void)provideFeedbackForMessagesZkwSuggestions:(id)arg0 ;
-(void)provideFeedbackForSuggestions:(id)arg0 ;
-(void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)arg0 ;
-(void)writeFeedbackForContactsAutocompleteSuggestions:(id)arg0 ;


@end


#endif