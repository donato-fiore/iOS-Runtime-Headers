// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGDAYHIGHLIGHTSHARINGSUGGESTER_H
#define PGDAYHIGHLIGHTSHARINGSUGGESTER_H

@class NSString;
@protocol PGSuggester;


#import "PGAbstractSuggester.h"

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(BOOL)canSuggestHighlightNodeWithoutPeople:(id)arg0 loggingConnection:(id)arg1 ;
+(BOOL)shouldSuggestHighlightNode:(id)arg0 neighborScoreComputer:(id)arg1 loggingConnection:(id)arg2 ;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;


@end


#endif