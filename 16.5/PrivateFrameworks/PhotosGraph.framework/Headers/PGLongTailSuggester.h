// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGLONGTAILSUGGESTER_H
#define PGLONGTAILSUGGESTER_H

@class NSArray, NSDictionary, NSMutableSet, NSString;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"
#import "PGLongTailAdditionalOptions.h"

@interface PGLongTailSuggester : PGAbstractSuggester {
    PGSuggestionOptions *_options;
    PGLongTailAdditionalOptions *_additionalOptions;
    NSUInteger _maximumNumberOfSuggestions;
    NSUInteger _numberOfGeneratedSuggestions;
    unsigned int _randomSeed;
    NSArray *_eligibleAssetUUIDs;
    NSDictionary *_verifiedPersonUUIDsByAssetUUIds;
    NSMutableSet *_suggestedAssetsFromPreviousBatch;
    NSMutableSet *_candidateAssetsFromPreviousBatch;
    NSString *_meNodeLocalIdentifier;
    CGFloat _topTierAestheticScoreThreshold;
}




+(NSUInteger)randomIntegerWithUpperBound:(NSUInteger)arg0 seed:(unsigned int)arg1 ;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)_shouldUsePreviousBatchOfCandidateAssets;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(BOOL)isMomentNodeInteresting:(id)arg0 withNeighborScoreComputer:(id)arg1 ;
-(NSUInteger)_longTailScoreWithAsset:(id)arg0 withAdditionalOptions:(id)arg1 ;
-(id)_assetUUIDByWeightedProbablisticSamplingFromAssetUUIDS:(id)arg0 weights:(id)arg1 ;
-(id)_assetUUIDsFromAssets:(id)arg0 atIndices:(id)arg1 ;
-(id)_batchOfRandomAssetsWithCount:(NSUInteger)arg0 progress:(id)arg1 ;
-(id)_bestAssetUUIDsFromCandidates:(id)arg0 percentile:(NSUInteger)arg1 ;
-(id)_candidateByAssetUUIDsFromAssets:(id)arg0 ;
-(id)_eligibleAssetUUIDsWithProgress:(id)arg0 ;
-(id)_fetchVerifiedPersonUUIDsByAssetUUIds:(id)arg0 ;
-(id)_nextCandidateAssetsWithProgress:(id)arg0 ;
-(id)allInterestingMomentsFromGraph:(id)arg0 progress:(id)arg1 ;
-(id)highlightedAssetInternalPredicate;
-(id)nextSuggestedAssetWithProgress:(id)arg0 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)reasonsForSuggestion:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(struct _NSRange )_randomRangeWithLocationUpperBound:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 ;
-(void)captureInformationFromGraph:(id)arg0 ;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;


@end


#endif