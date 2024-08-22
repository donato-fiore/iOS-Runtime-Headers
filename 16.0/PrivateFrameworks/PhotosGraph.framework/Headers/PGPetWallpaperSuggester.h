// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPETWALLPAPERSUGGESTER_H
#define PGPETWALLPAPERSUGGESTER_H

@class CLSSceneConfidenceThresholdHelper;


#import "PGAbstractSuggester.h"
#import "PGWallpaperSuggestionAssetGater.h"
#import "PGPetWallpaperSuggesterFilteringContext.h"

@interface PGPetWallpaperSuggester : PGAbstractSuggester {
    PGWallpaperSuggestionAssetGater *_assetGater;
    CLSSceneConfidenceThresholdHelper *_peopleSceneConfidenceThresholdHelper;
}


@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *filteringContext; // ivar: _filteringContext


+(BOOL)candidate:(id)arg0 passesFilteringWithContext:(id)arg1 curationContext:(id)arg2 thresholdHelper:(id)arg3 statistics:(struct ? *)arg4 ;
+(BOOL)filtersForTopPets;
+(BOOL)passesFilteringWithAsset:(id)arg0 curationContext:(id)arg1 reason:(*id)arg2 ;
+(id)prefilteringInternalPredicateWithContext:(id)arg0 ;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
+(unsigned short)petWallpaperSuggestionSubtype;
-(id)candidatesForPet:(id)arg0 ;
-(id)fetchPets;
-(id)initWithSession:(id)arg0 ;
-(id)rankedAndDedupedCandidatesFromCandidates:(id)arg0 ;
-(id)sortedCandidatesByPetLocalIdentifierFromPets:(id)arg0 progressReporter:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;


@end


#endif