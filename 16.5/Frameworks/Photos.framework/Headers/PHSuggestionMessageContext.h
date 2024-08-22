// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSUGGESTIONMESSAGECONTEXT_H
#define PHSUGGESTIONMESSAGECONTEXT_H

@class NSArray, NSDateInterval, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHSuggestionMessageContext : NSObject

@property (readonly, nonatomic) NSArray *cnParticipants; // ivar: _cnParticipants
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain, nonatomic) NSArray *messageTokens; // ivar: _messageTokens
@property (readonly, nonatomic) NSArray *messages; // ivar: _messages
@property (readonly, nonatomic) NSUInteger numberOfParticipants; // ivar: _numberOfParticipants
@property (readonly, nonatomic) NSArray *phParticipants; // ivar: _phParticipants
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSArray *resolvedParticipants; // ivar: _resolvedParticipants
@property (readonly, nonatomic) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier; // ivar: _suggestionMatchingResultsBySuggestionIdentifier


-(id)_mostRecentSuggestionFromSuggestions:(id)arg0 ;
-(id)_suggestionsMatchingType:(NSInteger)arg0 ;
-(id)confidentMatchSuggestionUsingStrategy:(NSUInteger)arg0 ;
-(id)description;
-(id)detailedDescription;
-(id)initWithMessages:(id)arg0 ;
-(id)initWithMessages:(id)arg0 participantsFromContacts:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithMessages:(id)arg0 participantsFromPersons:(id)arg1 photoLibrary:(id)arg2 ;
-(id)matchingResultWithSuggestion:(id)arg0 ;
-(void)matchWithSuggestions:(id)arg0 ;


@end


#endif