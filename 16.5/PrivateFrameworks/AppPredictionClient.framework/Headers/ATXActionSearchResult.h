// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONSEARCHRESULT_H
#define ATXACTIONSEARCHRESULT_H

@class SFSearchResult, ATXHeroData, ATXProactiveSuggestion;


#import "ATXActionResponse.h"
#import "ATXAction.h"

@interface ATXActionSearchResult : SFSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse; // ivar: _actionResponse
@property (readonly, nonatomic) ATXAction *atxAction; // ivar: _atxAction
@property (readonly, nonatomic) ATXHeroData *heroApp; // ivar: _heroApp
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // ivar: _proactiveSuggestion


+(BOOL)_demoModeEnabled;
+(BOOL)shouldDisplayRecentActionsOnHomeScreen;
+(BOOL)shouldDisplayRecentDonationsForTesting;
+(BOOL)shouldDisplayUpcomingMediaForTesting;
+(BOOL)shouldDisplayValidParameterCombinations;
+(BOOL)supportsSecureCoding;
+(id)_demoModeActionResponse;
+(id)_recentDonationProactiveSuggestionFromScoredAction:(id)arg0 withClientModelId:(id)arg1 ;
+(id)_unarchiveATXHeroDataFromSuggestion:(id)arg0 ;
+(id)_unarchiveObjectFromSuggestion:(id)arg0 ;
+(id)actionResponseForDeveloperModeWithClientId:(id)arg0 shouldShowRecentDonations:(BOOL)arg1 ;
+(id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg0 shouldShowParameterCombinations:(BOOL)arg1 shouldShowUpcomingMedia:(BOOL)arg2 ;
+(id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg0 shouldShowParameterCombinations:(BOOL)arg1 shouldShowUpcomingMedia:(BOOL)arg2 withClientModelId:(id)arg3 ;
+(id)actionSearchResultFromProactiveSuggestion:(id)arg0 actionResponse:(id)arg1 avRoutingSessionHelper:(id)arg2 nowPlayingDataProvider:(id)arg3 ;
+(id)actionSearchResultFromScoredAction:(id)arg0 actionResponse:(id)arg1 avRoutingSessionHelper:(id)arg2 nowPlayingDataProvider:(id)arg3 ;
+(id)generatedSearchResultForAction:(id)arg0 actionResponse:(id)arg1 ;
+(id)generatedSearchResultForProactiveSuggestion:(id)arg0 actionResponse:(id)arg1 ;
+(id)mostRecentDonationParameterCombinations;
+(id)predictedActionSearchResultsWithLimit:(NSInteger)arg0 forBundleIdentifiers:(id)arg1 ;
+(id)recentDonationsStarting:(id)arg0 end:(id)arg1 number:(NSUInteger)arg2 ;
+(id)recentUpcomingMedia;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActionSearchResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateInlineCardWithContent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif