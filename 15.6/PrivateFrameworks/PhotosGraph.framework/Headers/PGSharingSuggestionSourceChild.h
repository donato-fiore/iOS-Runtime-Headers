// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONSOURCECHILD_H
#define PGSHARINGSUGGESTIONSOURCECHILD_H



#import "PGSharingSuggestionGraphBasedSource.h"

@interface PGSharingSuggestionSourceChild : PGSharingSuggestionGraphBasedSource



-(CGFloat)weight;
-(id)details;
-(id)name;
-(id)suggestedResultsForInput:(id)arg0 withOptions:(id)arg1 ;


@end


#endif