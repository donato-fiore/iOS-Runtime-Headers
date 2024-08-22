// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPEOPLEWALLPAPERSUGGESTER_H
#define PGPEOPLEWALLPAPERSUGGESTER_H

@class NSDictionary;


#import "PGAbstractSuggester.h"
#import "PGPeopleWallpaperSuggesterFilteringContext.h"
#import "PGSinglePersonWallpaperAssetSuggesterScoringContext.h"
#import "PGSinglePersonWallpaperAssetSuggesterDistancingContext.h"
#import "PGWallpaperSuggestionAssetGater.h"

@interface PGPeopleWallpaperSuggester : PGAbstractSuggester {
    NSDictionary *_suggesterByPersonLocalIdentifier;
    PGPeopleWallpaperSuggesterFilteringContext *_filteringContext;
    PGSinglePersonWallpaperAssetSuggesterScoringContext *_scoringContext;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext *_distancingContext;
    PGWallpaperSuggestionAssetGater *_assetGater;
}




+(BOOL)filtersForTopPeople;
+(BOOL)passesFilteringWithAsset:(id)arg0 curationContext:(id)arg1 reason:(*id)arg2 ;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
+(unsigned short)peopleWallpaperSuggestionSubtype;
-(id)initWithSession:(id)arg0 ;
-(id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)_buildSuggestersWithProgress:(id)arg0 ;


@end


#endif