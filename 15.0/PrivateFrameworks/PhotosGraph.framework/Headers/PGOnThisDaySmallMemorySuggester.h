// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGONTHISDAYSMALLMEMORYSUGGESTER_H
#define PGONTHISDAYSMALLMEMORYSUGGESTER_H

@class NSArray, NSDictionary, NSEnumerator, NSString;
@protocol PGCoordinatableSuggester;


#import "PGAbstractSuggester.h"
#import "PGSuggestionOptions.h"

@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester>

 {
    PGSuggestionOptions *_options;
    NSArray *_suggestedMomentLocalIdentifiers;
    NSDictionary *_momentByMomentLocalIdentifier;
    NSEnumerator *_suggestedMomentLocalIdentifierEnumerator;
    NSString *_titleDateMatchingTitleOnThisDay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg0 ;
-(id)nextSuggestionWithProgress:(id)arg0 ;
-(id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg0 ;
-(id)suggestionWithMomentLocalIdentifier:(id)arg0 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)reset;
-(void)startSuggestingWithOptions:(id)arg0 ;


@end


#endif