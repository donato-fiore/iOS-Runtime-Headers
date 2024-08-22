// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSRANKINGITEMRANKER_H
#define PRSRANKINGITEMRANKER_H

@class NSArray, NSMapTable, NSString;

#import <Foundation/Foundation.h>

#import "PRSQueryRankingConfiguration.h"
#import "SSTrialManager.h"

@interface PRSRankingItemRanker : NSObject {
    PRSQueryRankingConfiguration *_rankingConfiguration;
    SSTrialManager *_trialModelManager;
    NSArray *_rankCategories;
    BOOL _isNLSearch;
}


@property (retain, nonatomic) NSMapTable *bundleFeatures; // ivar: _bundleFeatures
@property (retain, nonatomic) NSString *clientBundle; // ivar: _clientBundle
@property (nonatomic) BOOL containsEnglishAlphabetInQuery; // ivar: _containsEnglishAlphabetInQuery
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) BOOL exact; // ivar: _exact
@property (nonatomic) CGFloat experimentalWeight1; // ivar: _experimentalWeight1
@property (nonatomic) CGFloat experimentalWeight2; // ivar: _experimentalWeight2
@property (nonatomic) BOOL hasParsecPolicyPhraseMatch; // ivar: _hasParsecPolicyPhraseMatch
@property (nonatomic) BOOL hasPolicyMultipleTermsPhraseMatch; // ivar: _hasPolicyMultipleTermsPhraseMatch
@property (nonatomic) BOOL hasPolicySingleTermPhraseMatch; // ivar: _hasPolicySingleTermPhraseMatch
@property (nonatomic) BOOL isAltNamePrefixMatchOnlyTopHitExcludedQuery; // ivar: _isAltNamePrefixMatchOnlyTopHitExcludedQuery
@property BOOL isCJK; // ivar: _isCJK
@property BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isContentWord; // ivar: _isContentWord
@property BOOL isInternalDevice; // ivar: _isInternalDevice
@property (nonatomic) BOOL isNLSearch;
@property (nonatomic) BOOL isPeopleSearch; // ivar: _isPeopleSearch
@property (nonatomic) BOOL isSpellCorrectPrefixMatchOnlyTopHitExcludedQuery; // ivar: _isSpellCorrectPrefixMatchOnlyTopHitExcludedQuery
@property (retain, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (nonatomic) float lastIsSpaceFeature; // ivar: _lastIsSpaceFeature
@property (retain, nonatomic) NSString *meContactIdentifier; // ivar: _meContactIdentifier
@property (nonatomic) BOOL policyDisabled; // ivar: _policyDisabled
@property (nonatomic) NSUInteger queryKind; // ivar: _queryKind
@property (nonatomic) NSUInteger queryTermCount; // ivar: _queryTermCount
@property (nonatomic) NSUInteger queryTermLength; // ivar: _queryTermLength
@property (retain, nonatomic) NSArray *rankCategories;
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) NSString *userQueryString; // ivar: _userQueryString


+(BOOL)isBlendingScoreDemoted:(float)arg0 ;
+(BOOL)isContentWordQuery:(id)arg0 queryTermCount:(NSInteger)arg1 keyboardLanguage:(id)arg2 ;
+(BOOL)isKeywordsHidingEnabled;
+(NSUInteger)spellCorrectedAppMinQueryLen;
+(id)importantAttributesForBundle:(id)arg0 ;
+(id)importantAttributesForParsecBundle:(id)arg0 ;
+(id)phoneFavoritesCopy;
+(id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg0 ;
+(struct _LanguageModel *)languageModel;
+(void)clearState;
+(void)initialize;
+(void)preheat;
+(void)setDockApps:(id)arg0 ;
-(*float)computeScoresForVectors:(id)arg0 withBundleFeatures:(id)arg1 ;
-(BOOL)wasItemCreatedWithinAWeek:(id)arg0 ;
-(id)comparatorByJoiningComparator:(SEL)arg0 withPredicate:(id)arg1 ;
-(id)init;
-(id)initWithSearchString:(id)arg0 language:(id)arg1 currentTime:(CGFloat)arg2 ;
-(id)initWithSearchString:(id)arg0 language:(id)arg1 isCJK:(BOOL)arg2 experimentalWeight1:(CGFloat)arg3 experimentalWeight2:(CGFloat)arg4 currentTime:(CGFloat)arg5 ;
-(id)initWithSearchString:(id)arg0 userQueryString:(id)arg1 language:(id)arg2 currentTime:(CGFloat)arg3 ;
-(id)initWithSearchString:(id)arg0 userQueryString:(id)arg1 language:(id)arg2 isCJK:(BOOL)arg3 experimentalWeight1:(CGFloat)arg4 experimentalWeight2:(CGFloat)arg5 currentTime:(CGFloat)arg6 ;
-(id)rankingConfiguration;
-(id)rankingConfigurationWithMeContact:(id)arg0 emailAddresses:(id)arg1 phoneFavorites:(id)arg2 vipList:(id)arg3 clientBundle:(id)arg4 isScopedSearch:(BOOL)arg5 spotlightQuery:(id)arg6 keyboardLanguage:(id)arg7 ;
-(id)rankingConfigurationWithMeContact:(id)arg0 emailAddresses:(id)arg1 phoneFavorites:(id)arg2 vipList:(id)arg3 clientBundle:(id)arg4 isScopedSearch:(BOOL)arg5 spotlightQuery:(id)arg6 userQuery:(id)arg7 tokenString:(id)arg8 queryKind:(NSUInteger)arg9 isPeopleSearch:(BOOL)arg10 keyboardLanguage:(id)arg11 ;
-(id)userQuery;
-(void)activate;
-(void)cancel;
-(void)computePolicyFeaturesForBundleItems:(id)arg0 isCJK:(BOOL)arg1 ;
-(void)computeRelativeFeatureForContext:(id)arg0 items:(id)arg1 ;
-(void)computeResultSetDependantFeatures:(id)arg0 allItems:(id)arg1 ;
-(void)deactivate;
-(void)dealloc;
-(void)pickMostRecentDateForItem:(id)arg0 pastItems:(*id)arg1 futureItems:(*id)arg2 ;
-(void)populateLocalResultSetDateFeaturesForItems:(id)arg0 ;
-(void)populateMailContactFeaturesWithMailItems:(id)arg0 contactItems:(id)arg1 ;
-(void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg0 withUniqueBundleMaxScores:(id)arg1 ;
-(void)prepareItems:(id)arg0 inBundle:(id)arg1 ;
-(void)prepareParsecResults:(id)arg0 inBundle:(id)arg1 ;
-(void)relevantResultSetPRSL2FeaturesFromBundleFeature:(NSUInteger)arg0 absRankFeatureOut:(*unsigned short)arg1 relRankFeatureOut:(*unsigned short)arg2 ;
-(void)rerankItemsWithPolicyForBundleItems:(id)arg0 isCJK:(BOOL)arg1 ;
-(void)resetbundleFeaturesScratchBuf:(*float)arg0 ;
-(void)setRenderEngagementFeaturesForItem:(id)arg0 counts:(id)arg1 isRender:(BOOL)arg2 bundleDict:(id)arg3 ;
-(void)setRenderEngagementFeaturesForItemAsShorts:(id)arg0 counts:(short)arg1 isRender:(BOOL)arg2 bundleDict:(id)arg3 ;
-(void)updateResultSetContext:(struct _resultset_computation_ctx *)arg0 andUniqueScores:(id)arg1 withResultSetItems:(id)arg2 ;
-(void)updateResultSetFeaturesOnItems:(id)arg0 withContext:(struct _resultset_computation_ctx *)arg1 uniqueScores:(id)arg2 ;
-(void)updateScoresForPreparedItems:(id)arg0 ;
-(void)updateScoresForPreparedItems:(id)arg0 isCJK:(BOOL)arg1 clientBundle:(id)arg2 thresholdValue:(CGFloat)arg3 ;


@end


#endif