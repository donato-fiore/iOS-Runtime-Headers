// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONSOURCEMERGECANDIDATES_H
#define PGSHARINGSUGGESTIONSOURCEMERGECANDIDATES_H



#import "PGSharingSuggestionPhotoKitBasedSource.h"

@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource



-(BOOL)canRunWithOptions:(id)arg0 ;
-(CGFloat)weight;
-(id)details;
-(id)filterMeNodePredicateForInput:(id)arg0 photoLibrary:(id)arg1 ;
-(id)name;
-(id)suggestedResultsForInput:(id)arg0 withOptions:(id)arg1 ;


@end


#endif