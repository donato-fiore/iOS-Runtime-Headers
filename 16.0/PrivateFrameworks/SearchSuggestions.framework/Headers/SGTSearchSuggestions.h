// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGTSEARCHSUGGESTIONS_H
#define SGTSEARCHSUGGESTIONS_H


#import <Foundation/Foundation.h>


@interface SGTSearchSuggestions : NSObject



+(BOOL)sectionSupportsShowMoreInApp:(id)arg0 ;
+(id)dedupeWebURLSuggestionsFromSections:(id)arg0 ;
+(id)defaultSearchSuggestions;
+(id)filteredSuggestions:(id)arg0 seen:(id)arg1 ignore:(id)arg2 maxCount:(NSInteger)arg3 threshold:(CGFloat)arg4 ;
+(id)orderedSuggestionsWithUserSuggestion:(id)arg0 userWebSuggestion:(id)arg1 contactSuggestions:(id)arg2 localSuggestions:(id)arg3 serverSuggestions:(id)arg4 options:(id)arg5 ;
+(id)searchThroughSuggestionForQuery:(id)arg0 withInfo:(id)arg1 ;


@end


#endif