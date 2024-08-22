// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCITYSCAPEWALLPAPERSUGGESTER_H
#define PGCITYSCAPEWALLPAPERSUGGESTER_H

@class CLSSceneConfidenceThresholdHelper;


#import "PGAbstractSuggester.h"
#import "PGWallpaperSuggestionAssetGater.h"
#import "PGCityscapeWallpaperSuggesterDistancingContext.h"
#import "PGCityscapeWallpaperSuggesterFilteringContext.h"
#import "PGCityscapeWallpaperSuggesterScoringContext.h"

@interface PGCityscapeWallpaperSuggester : PGAbstractSuggester {
    PGWallpaperSuggestionAssetGater *_assetGater;
    CLSSceneConfidenceThresholdHelper *_peopleSceneConfidenceThresholdHelper;
}


@property (retain, nonatomic) PGCityscapeWallpaperSuggesterDistancingContext *distancingContext; // ivar: _distancingContext
@property (retain, nonatomic) PGCityscapeWallpaperSuggesterFilteringContext *filteringContext; // ivar: _filteringContext
@property (retain, nonatomic) PGCityscapeWallpaperSuggesterScoringContext *scoringContext; // ivar: _scoringContext


+(BOOL)candidate:(id)arg0 passesFilteringWithContext:(id)arg1 curationContext:(id)arg2 thresholdHelper:(id)arg3 statistics:(struct ? *)arg4 ;
+(BOOL)filtersForTopCityscapes;
+(BOOL)isPositiveWithUrbanSceneLabelsForAsset:(id)arg0 ;
+(BOOL)passesFilteringWithAsset:(id)arg0 curationContext:(id)arg1 reason:(*id)arg2 ;
+(id)candidatesFromAssets:(id)arg0 ;
+(id)prefilteringInternalPredicateWithForbiddenAssetUUIDs:(id)arg0 ;
+(id)sceneTaxonomy;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
+(unsigned short)cityscapeWallpaperSuggestionSubtype;
-(id)fetchCandidateAssets;
-(id)fetchUnsortedCandidatesWithProgressReporter:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)sortedDedupedCandidatesFromCandidates:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;


@end


#endif