// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARSESSION_H
#define PARSESSION_H

@class NSSet, NSXPCConnection, NSString;
@protocol SFFeedbackListener, SFResourceLoader, PARSessionDelegate;

#import <Foundation/Foundation.h>

#import "PARSessionSwiftInternal.h"
#import "PARBag.h"
#import "_TtC10CoreParsec15PARSearchClient.h"
#import "PARSessionConfiguration.h"

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader>

 {
    PARSessionSwiftInternal *_internal;
}


@property (retain) NSSet *allowedAppsForSiriSuggestions;
@property (readonly) PARBag *bag;
@property (readonly, nonatomic) _TtC10CoreParsec15PARSearchClient *client;
@property (retain) PARSessionConfiguration *configuration;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PARSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sessionWithConfiguration:(id)arg0 ;
+(id)sessionWithConfiguration:(id)arg0 delegate:(id)arg1 startImmediately:(BOOL)arg2 ;
+(id)sharedPARSessionWithConfiguration:(id)arg0 ;
+(id)sharedSession;
-(BOOL)loadCard:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)loadImage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)loadImage:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)loadMoreResults:(id)arg0 withCompletionHandler:(id)arg1 ;
-(NSUInteger)enabledStatus;
-(id)initInternal:(id)arg0 startImmediately:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 connection:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 connection:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(id)taskWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)addCompletion:(id)arg0 forInput:(id)arg1 ;
-(void)addEngagedSuggestions:(id)arg0 ;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)clearCompletionsFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)didAppendLateSections:(id)arg0 ;
-(void)didClearInput:(id)arg0 ;
-(void)didEndSearch:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didEngageSection:(id)arg0 ;
-(void)didEngageSuggestion:(id)arg0 ;
-(void)didErrorOccur:(id)arg0 ;
-(void)didGoToSearch:(id)arg0 ;
-(void)didGoToSite:(id)arg0 ;
-(void)didGradeLookupHintRelevancy:(id)arg0 ;
-(void)didGradeResultRelevancy:(id)arg0 ;
-(void)didPerformCommand:(id)arg0 ;
-(void)didRankSections:(id)arg0 ;
-(void)didReceiveResultsAfterTimeout:(id)arg0 ;
-(void)didReportUserResponseFeedback:(id)arg0 ;
-(void)didStartSearch:(id)arg0 ;
-(void)didSubmitUserReportFeedback:(id)arg0 ;
-(void)fileHandleAndAttributesForResource:(id)arg0 completion:(id)arg1 ;
-(void)loadTask:(id)arg0 ;
-(void)reportEvent:(id)arg0 ;
-(void)reportFeedback:(id)arg0 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)searchViewDidAppear:(id)arg0 ;
-(void)searchViewDidDisappear:(id)arg0 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg0 ;
-(void)sendCBAEngagementFeedback:(id)arg0 query:(NSUInteger)arg1 ;
-(void)sendCustomFeedback:(id)arg0 ;
-(void)sendCustomFeedback:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)suggestionsDidBecomeVisible:(id)arg0 ;
-(void)updateParametersForSmartSearchV1:(id)arg0 smartSearchV2:(id)arg1 ;


@end


#endif