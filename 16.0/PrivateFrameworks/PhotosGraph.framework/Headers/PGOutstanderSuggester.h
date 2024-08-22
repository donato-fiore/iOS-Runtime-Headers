// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGOUTSTANDERSUGGESTER_H
#define PGOUTSTANDERSUGGESTER_H

@class NSDictionary, NSArray, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester>

 {
    PGSuggestionOptions *_options;
    NSDictionary *_assetUUIDsByScore;
    NSArray *_sortedScores;
    NSInteger _currentScoreIndex;
    NSEnumerator *_currentSuggestedAssetEnumerator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topTierAestheticScore; // ivar: _topTierAestheticScore


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(NSUInteger)scoreWithAsset:(id)arg0 ;
-(id)assetInternalPredicate:(id)arg0 andEndDate:(id)arg1 matchingAssetUUID:(id)arg2 ;
-(id)nextSuggestedAssetEnumeratorWithProgress:(id)arg0 ;
-(id)nextSuggestedAssetWithProgress:(id)arg0 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)reasonsForSuggestion:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)computeNiceAssetsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withProgress:(id)arg2 ;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;


@end


#endif