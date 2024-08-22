// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTRIPHIGHLIGHTSHARINGSUGGESTER_H
#define PGTRIPHIGHLIGHTSHARINGSUGGESTER_H

@class NSString;
@protocol PGSuggester;


#import "PGAbstractSuggester.h"

@interface PGTripHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;


+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;


@end


#endif