// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSTATICSUGGESTIONSMANAGER_H
#define ATXSTATICSUGGESTIONSMANAGER_H


#import <Foundation/Foundation.h>


@interface ATXStaticSuggestionsManager : NSObject



+(BOOL)isValidPreviousPosition:(id)arg0 uiLimit:(NSUInteger)arg1 newSuggestionsCount:(NSUInteger)arg2 ;
+(BOOL)suggestionsAreAllAppExecutableTypeAndHaveValidHash:(id)arg0 ;
+(id)executableObjectHashToPositionMappingForSuggestions:(id)arg0 ;
+(id)preservePreviousAppPositionsForPreviousSuggestions:(id)arg0 newSuggestions:(id)arg1 uiLimit:(NSUInteger)arg2 ;


@end


#endif