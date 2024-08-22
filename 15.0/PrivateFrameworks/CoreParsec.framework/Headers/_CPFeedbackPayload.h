// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPFEEDBACKPAYLOAD_H
#define _CPFEEDBACKPAYLOAD_H

@class PBCodable, PBCodable<_CPProcessableFeedback>, NSString, NSData;
@protocol _CPFeedbackPayload, NSSecureCoding;


#import "_CPCacheHitFeedback.h"
#import "_CPCardSectionEngagementFeedback.h"
#import "_CPCardSectionFeedback.h"
#import "_CPCardViewAppearFeedback.h"
#import "_CPCardViewDisappearFeedback.h"
#import "_CPCBAEngagementFeedback.h"
#import "_CPClearInputFeedback.h"
#import "_CPClientTimingFeedback.h"
#import "_CPCommandEngagementFeedback.h"
#import "_CPConnectionInvalidatedFeedback.h"
#import "_CPCustomFeedback.h"
#import "_CPDidGoToSearchFeedback.h"
#import "_CPDidGoToSiteFeedback.h"
#import "_CPDynamicButtonVisibilityFeedback.h"
#import "_CPEndLocalSearchFeedback.h"
#import "_CPEndNetworkSearchFeedback.h"
#import "_CPEndSearchFeedback.h"
#import "_CPErrorFeedback.h"
#import "_CPExperimentTriggeredFeedback.h"
#import "_CPFeedback.h"
#import "_CPLateSectionsAppendedFeedback.h"
#import "_CPLookupHintRelevancyFeedback.h"
#import "_CPMapsCardSectionEngagementFeedback.h"
#import "_CPRankingFeedback.h"
#import "_CPResultEngagementFeedback.h"
#import "_CPResultFeedback.h"
#import "_CPResultGradingFeedback.h"
#import "_CPResultRankingFeedback.h"
#import "_CPResultsReceivedAfterTimeoutFeedback.h"
#import "_CPSearchViewAppearFeedback.h"
#import "_CPSearchViewDisappearFeedback.h"
#import "_CPSectionEngagementFeedback.h"
#import "_CPSectionRankingFeedback.h"
#import "_CPSessionEndFeedback.h"
#import "_CPSessionMissingResultsFeedback.h"
#import "_CPSessionMissingSuggestionsFeedback.h"
#import "_CPSkipSearchFeedback.h"
#import "_CPStartLocalSearchFeedback.h"
#import "_CPStartNetworkSearchFeedback.h"
#import "_CPStartSearchFeedback.h"
#import "_CPStoreCardSectionEngagementFeedback.h"
#import "_CPSuggestionEngagementFeedback.h"
#import "_CPVisibleResultsFeedback.h"
#import "_CPVisibleSectionHeaderFeedback.h"
#import "_CPVisibleSuggestionsFeedback.h"

@interface _CPFeedbackPayload : PBCodable <_CPFeedbackPayload, NSSecureCoding>



@property (retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback; // ivar: _cacheHitFeedback
@property (retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback; // ivar: _cardSectionEngagementFeedback
@property (retain, nonatomic) _CPCardSectionFeedback *cardSectionFeedback; // ivar: _cardSectionFeedback
@property (retain, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback; // ivar: _cardViewAppearFeedback
@property (retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback; // ivar: _cardViewDisappearFeedback
@property (retain, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback; // ivar: _cbaEngagementFeedback
@property (retain, nonatomic) _CPClearInputFeedback *clearInputFeedback; // ivar: _clearInputFeedback
@property (retain, nonatomic) _CPClientTimingFeedback *clientTimingFeedback; // ivar: _clientTimingFeedback
@property (readonly, nonatomic) PBCodable<_CPProcessableFeedback> *codable;
@property (retain, nonatomic) _CPCommandEngagementFeedback *commandEngagementFeedback; // ivar: _commandEngagementFeedback
@property (retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback; // ivar: _connectionInvalidatedFeedback
@property (retain, nonatomic) _CPCustomFeedback *customFeedback; // ivar: _customFeedback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback; // ivar: _didGoToSearchFeedback
@property (retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback; // ivar: _didGoToSiteFeedback
@property (retain, nonatomic) _CPDynamicButtonVisibilityFeedback *dynamicButtonVisibilityFeedback; // ivar: _dynamicButtonVisibilityFeedback
@property (retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback; // ivar: _endLocalSearchFeedback
@property (retain, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback; // ivar: _endNetworkSearchFeedback
@property (retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback; // ivar: _endSearchFeedback
@property (retain, nonatomic) _CPErrorFeedback *errorFeedback; // ivar: _errorFeedback
@property (retain, nonatomic) _CPExperimentTriggeredFeedback *experimentTriggeredFeedback; // ivar: _experimentTriggeredFeedback
@property (retain, nonatomic) _CPFeedback *feedback; // ivar: _feedback
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback; // ivar: _lateSectionsAppendedFeedback
@property (retain, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback; // ivar: _lookupHintRelevancyFeedback
@property (retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback; // ivar: _mapsCardSectionEngagementFeedback
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) _CPRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback; // ivar: _resultEngagementFeedback
@property (retain, nonatomic) _CPResultFeedback *resultFeedback; // ivar: _resultFeedback
@property (retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback; // ivar: _resultGradingFeedback
@property (retain, nonatomic) _CPResultRankingFeedback *resultRankingFeedback; // ivar: _resultRankingFeedback
@property (retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback; // ivar: _resultsReceivedAfterTimeoutFeedback
@property (retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback; // ivar: _searchViewAppearFeedback
@property (retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback; // ivar: _searchViewDisappearFeedback
@property (retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback; // ivar: _sectionEngagementFeedback
@property (retain, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback; // ivar: _sectionRankingFeedback
@property (retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback; // ivar: _sessionEndFeedback
@property (retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback; // ivar: _sessionMissingResultsFeedback
@property (retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback; // ivar: _sessionMissingSuggestionsFeedback
@property (retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback; // ivar: _skipSearchFeedback
@property (retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback; // ivar: _startLocalSearchFeedback
@property (retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback; // ivar: _startNetworkSearchFeedback
@property (retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback; // ivar: _startSearchFeedback
@property (retain, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback; // ivar: _storeCardSectionEngagementFeedback
@property (retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback; // ivar: _suggestionEngagementFeedback
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;
@property (retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback; // ivar: _visibleResultsFeedback
@property (retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback; // ivar: _visibleSectionHeaderFeedback
@property (retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback; // ivar: _visibleSuggestionsFeedback
@property (readonly, nonatomic) NSUInteger whichContained_Feedback; // ivar: _whichContained_Feedback


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithCodable:(id)arg0 ;
-(id)initWithFeedback:(id)arg0 ;
-(void)clearContained_Feedback;
-(void)updateQueryId:(NSUInteger)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif