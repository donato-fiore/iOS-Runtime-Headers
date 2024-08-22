// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRECENTAESTHETICSSUGGESTER_H
#define PGRECENTAESTHETICSSUGGESTER_H

@class NSArray, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGRecentAestheticsSuggester : PGAbstractSuggester <PGCoordinatableSuggester>

 {
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)niceAssetsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 matchingAssetUUID:(id)arg2 progress:(id)arg3 ;
-(id)reasonsForSuggestion:(id)arg0 ;
-(id)suggestedAssetsInAssets:(id)arg0 ;
-(id)suggestedAssetsInAssets:(id)arg0 options:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;


@end


#endif