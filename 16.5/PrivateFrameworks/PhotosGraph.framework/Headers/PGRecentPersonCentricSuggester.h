// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGRECENTPERSONCENTRICSUGGESTER_H
#define PGRECENTPERSONCENTRICSUGGESTER_H

@class NSDictionary, NSMutableSet, NSArray, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGRecentPersonCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester>

 {
    PGSuggestionOptions *_options;
    NSDictionary *_verifiedPersonByPersonLocalIdentifier;
    NSDictionary *_assetsByPersonLocalIdentifier;
    NSMutableSet *_usedPersonLocalIdentifiers;
    NSArray *_birthdayPersonPotentialSuggestions;
    NSArray *_longTimeNoSeePersonPotentialSuggestions;
    NSArray *_personPotentialSuggestions;
    NSEnumerator *_birthdayPersonPotentialSuggestionEnumerator;
    NSEnumerator *_longTimeNoSeePersonPotentialSuggestionEnumerator;
    NSEnumerator *_personPotentialSuggestionEnumerator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(NSUInteger)relationScoreWithPersonNode:(id)arg0 ;
-(id)assetsByPersonLocalIdentifierWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)assetsWithSinglePersonBetweenStartDate:(id)arg0 andEndDate:(id)arg1 matchingAssetUUID:(id)arg2 progress:(id)arg3 ;
-(id)assetsWithSinglePersonWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)birthdayPersonPotentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)lastAssetWithPerson:(id)arg0 beforeDate:(id)arg1 matchingAssetUUID:(id)arg2 ;
-(id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)nextBirthdayPersonPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextLongTimeNoSeePersonPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextPersonPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)personPotentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)suggestionWithPotentialSuggestion:(id)arg0 progress:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)verifiedPersonByPersonLocalIdentifier;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;
-(void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)arg0 ;


@end


#endif