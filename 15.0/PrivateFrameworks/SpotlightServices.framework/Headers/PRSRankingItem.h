// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSRANKINGITEM_H
#define PRSRANKINGITEM_H

@class NSMutableArray, NSString, NSArray, NSDate, NSData;
@protocol SSDataCollectible;

#import <Foundation/Foundation.h>

#import "PRSRankingSpanCalculator.h"
#import "PRSL2FeatureVector.h"

@interface PRSRankingItem : NSObject <SSDataCollectible>

 {
    BOOL _isInternal;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    BOOL _isPrepared;
    unsigned int _bundleIDType;
    PRSRankingSpanCalculator *_spanCalculator;
    NSString *_contentType;
    NSUInteger _importantPropertiesPrefixMatched;
    NSUInteger _importantPropertiesWordMatched;
    NSArray *_emailAddresses;
    unk _inputToModelScore;
    unk _indexScore;
}


@property (retain, nonatomic) PRSL2FeatureVector *L2FeatureVector; // ivar: _L2FeatureVector
@property (nonatomic) *? attributes; // ivar: _attributes
@property (nonatomic) CGFloat closestUpComingDate; // ivar: _closestUpComingDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayNameInitials; // ivar: _displayNameInitials
@property (nonatomic) BOOL displayNameInitialsFirstWordAndMoreMatchOnly; // ivar: _displayNameInitialsFirstWordAndMoreMatchOnly
@property (nonatomic) BOOL displayNameInitialsPrefixMatchOnly; // ivar: _displayNameInitialsPrefixMatchOnly
@property (nonatomic) BOOL eligibleForDemotion; // ivar: _eligibleForDemotion
@property (retain, nonatomic) NSString *exactMatchedKeyword; // ivar: _exactMatchedKeyword
@property (nonatomic) float feedbackScore; // ivar: _feedbackScore
@property (retain, nonatomic) NSString *firstMatchedAltName; // ivar: _firstMatchedAltName
@property (nonatomic) BOOL hasPolicyMultipleTermsNearMatch; // ivar: _hasPolicyMultipleTermsNearMatch
@property (nonatomic) BOOL hasPolicyMultipleTermsPhraseMatch; // ivar: _hasPolicyMultipleTermsPhraseMatch
@property (nonatomic) BOOL hasPolicySingleTermPhraseMatch; // ivar: _hasPolicySingleTermPhraseMatch
@property (nonatomic) BOOL hasShortCut; // ivar: _hasShortCut
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *interestingDate;
@property (nonatomic) BOOL isBundleDemotedForBullseyeCommittedSearch; // ivar: _isBundleDemotedForBullseyeCommittedSearch
@property (nonatomic) BOOL isKeywordMatch; // ivar: _isKeywordMatch
@property (nonatomic) BOOL isNotExecutable; // ivar: _isNotExecutable
@property (nonatomic) BOOL isSafariTopHit; // ivar: _isSafariTopHit
@property (nonatomic) BOOL isServerAlternativeResult; // ivar: _isServerAlternativeResult
@property (retain, nonatomic) NSData *localSuggestionsData; // ivar: _localSuggestionsData
@property (nonatomic) BOOL matchedQueryTerms; // ivar: _matchedQueryTerms
@property (nonatomic) CGFloat mostRecentUsedDate; // ivar: _mostRecentUsedDate
@property (nonatomic) BOOL photosExactMatch; // ivar: _photosExactMatch
@property (nonatomic) BOOL photosMatch; // ivar: _photosMatch
@property (nonatomic) float rawScore; // ivar: _rawScore
@property (nonatomic) BOOL recentForAboveThresholdTopHit; // ivar: _recentForAboveThresholdTopHit
@property (nonatomic) BOOL recentForTopHit; // ivar: _recentForTopHit
@property (nonatomic) float score; // ivar: _score
@property (retain, nonatomic) NSString *sectionBundleIdentifier; // ivar: _sectionBundleIdentifier
@property (retain, nonatomic) NSData *serverFeaturesJSON; // ivar: _serverFeaturesJSON
@property (retain, nonatomic) NSData *serverSuggestionsData; // ivar: _serverSuggestionsData
@property (nonatomic) BOOL shouldHideUnderShowMore; // ivar: _shouldHideUnderShowMore
@property (nonatomic) BOOL shouldHideUnderShowMoreIfNotTophit; // ivar: _shouldHideUnderShowMoreIfNotTophit
@property (nonatomic) CGFloat suggestionScore; // ivar: _suggestionScore
@property (readonly) Class superclass;
@property (nonatomic) unk test_indexScore;
@property (nonatomic) unk test_inputToModelScore;
@property (nonatomic) int topHitReason; // ivar: _topHitReason
@property (nonatomic) BOOL vendorNameIsDisplayNamePrefix; // ivar: _vendorNameIsDisplayNamePrefix
@property (nonatomic) float withinBundleScore; // ivar: _withinBundleScore
@property (nonatomic) BOOL wordMatchedKeyword; // ivar: _wordMatchedKeyword


+(id)rankingDescriptorForBundleFeature:(NSUInteger)arg0 ;
+(unsigned short)featureFromVirtualIdx:(NSUInteger)arg0 ;
+(void)initialize;
-(?)populateCrossAttributeDerivedFeaturesWithContextfeatureScoreInfo;
-(?)populateTextFeatureValuesForProperty:(?)arg0 updatingBundleFeatureValues:(?)arg1 propertyIndex:(?)arg2 withEvaluator:(?)arg3 withContext:(?)arg4 featureScoreInfo:(?)arg5 propertyCanFuzzyMatch:(?)arg6 keyboardLanguage:(?)arg7 isCJK:(?)arg8 featureListpropertyName;
-(BOOL)didMatchRankingDescriptor:(id)arg0 ;
-(BOOL)isInSectionWithRankCategory:(id)arg0 ;
-(BOOL)isTopHit;
-(BOOL)serializeToJSON:(*void)arg0 valuesOnly:(BOOL)arg1 ;
-(NSInteger)compare:(id)arg0 currentTime:(CGFloat)arg1 ;
-(id)contentType;
-(id)dataCollectionBundle;
-(id)displayName;
-(id)dueDate;
-(id)getBundleSpecificValue:(id)arg0 forPropertyName:(id)arg1 withQueryString:(id)arg2 isCJK:(BOOL)arg3 isBullseyeSearch:(BOOL)arg4 withEvaluator:(id)arg5 keyboardLanguage:(id)arg6 ;
-(id)initForParsecResultWithBundleID:(id)arg0 ;
-(id)initWithAttrs:(struct ? *)arg0 ;
-(id)initWithAttrs:(struct ? *)arg0 isServerAlternativeResult:(BOOL)arg1 ;
-(id)likelyDisplayTitle;
-(id)moreRecentDateFromDate1:(id)arg0 date2:(id)arg1 ;
-(id)rankingFeedbackBundleID;
-(void)dealloc;
-(void)inferDateBinsFromDates:(id)arg0 intoBins:(*int)arg1 ;
-(void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 ;
-(void)populateContactFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 ;
-(void)populateMailFeatures:(struct PRSL2FeatureScoreInfo *)arg0 ;
-(void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo *)arg0 withEvaluator:(id)arg1 currentTime:(CGFloat)arg2 ;
-(void)populateParsecAlbumFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecAnyFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecAppFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecEPubBookFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecMovieFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecPodcastFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecProfileFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecRemainingFeatures;
-(void)populateParsecRoundTripFeatures:(id)arg0 forParsecResult:(id)arg1 ;
-(void)populateParsecSongFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecTvShowFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecWebVideoFeatures:(struct PRSL2FeatureScoreInfo *)arg0 currentTime:(CGFloat)arg1 forParsecResult:(id)arg2 ;
-(void)populatePortraitScore:(struct PRSL2FeatureScoreInfo *)arg0 scorer:(id)arg1 attributeHolder:(id)arg2 ;
-(void)populateRemainingFeaturesWithRanker:(id)arg0 ;
-(void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo *)arg0 ;
-(void)populateTextContentDistanceMeasures:(struct PRSL2FeatureScoreInfo *)arg0 ;
-(void)populateTextFeatureValuesForProperty:(id)arg0 updatingBundleFeatureValues:(*float)arg1 propertyIndex:(NSUInteger)arg2 withEvaluator:(id)arg3 withContext:(struct prs_feature_population_ctx_t *)arg4 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg5 propertyCanFuzzyMatch:(BOOL)arg6 keyboardLanguage:(id)arg7 isCJK:(BOOL)arg8 propertyName:(id)arg9 ;
-(void)setSuggestionBundleIDType;
-(void)updateAccumulatedBundleFeatures:(*float)arg0 values:(*float)arg1 feature:(NSUInteger)arg2 ;
-(void)updateBundleFeatures:(*float)arg0 withArrValues:(*float)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg2 ;
-(void)updateNumScoreDescriptorBundleFeatures:(*float)arg0 feature:(NSUInteger)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg2 ;
-(void)updateScoreDescriptorBundleFeatures:(*float)arg0 feature:(NSUInteger)arg1 ;


@end


#endif