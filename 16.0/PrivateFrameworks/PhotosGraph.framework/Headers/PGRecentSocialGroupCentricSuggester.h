// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGRECENTSOCIALGROUPCENTRICSUGGESTER_H
#define PGRECENTSOCIALGROUPCENTRICSUGGESTER_H

@class NSArray, NSMutableSet, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester>

 {
    PGSuggestionOptions *_options;
    NSArray *_allPotentialSuggestions;
    NSMutableSet *_usedPotentialSuggestions;
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;
    NSArray *_socialGroupPotentialSuggestions;
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;
    NSArray *_eligibleAssets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(id)assetsMatchingSocialGroup:(id)arg0 betweenStartDate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 ;
-(id)assetsWithPersonsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 matchAssetUUID:(id)arg2 ;
-(id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)nextLongTimeNoSeeSocialGroupPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextSocialGroupPotentialSuggestionWithProgress:(id)arg0 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)potentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)socialGroupPotentialSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)verifiedPersons;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;
-(void)usePotentialSuggestions:(id)arg0 ;


@end


#endif