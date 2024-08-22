// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGRECENTSYNDICATEDASSETSUGGESTER_H
#define PGRECENTSYNDICATEDASSETSUGGESTER_H

@class NSArray, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGRecentSyndicatedAssetSuggester : PGAbstractSuggester <PGCoordinatableSuggester>

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
-(id)createSuggestionWithAsset:(id)arg0 ;
-(id)eligibleAssetsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 matchingAssetUUID:(id)arg2 progress:(id)arg3 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)reasonsForSuggestion:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;


@end


#endif