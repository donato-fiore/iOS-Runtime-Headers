// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHARINGSUGGESTIONSOURCEFAMILY_H
#define PGSHARINGSUGGESTIONSOURCEFAMILY_H



#import "PGSharingSuggestionGraphBasedSource.h"

@interface PGSharingSuggestionSourceFamily : PGSharingSuggestionGraphBasedSource



-(CGFloat)weight;
-(id)details;
-(id)name;
-(id)suggestedResultsForInput:(id)arg0 withOptions:(id)arg1 ;


@end


#endif