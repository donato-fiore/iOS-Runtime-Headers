// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONSOURCEASSETLEARNING_H
#define PGSHARINGSUGGESTIONSOURCEASSETLEARNING_H

@class MALearningStreamUtils;


#import "PGSharingSuggestionSource.h"

@interface PGSharingSuggestionSourceAssetLearning : PGSharingSuggestionSource {
    MALearningStreamUtils *_learningStreamUtils;
}




-(CGFloat)weight;
-(id)details;
-(id)initWithLearningStreamUtils:(id)arg0 ;
-(id)name;
-(id)suggestedResultsForInput:(id)arg0 withOptions:(id)arg1 ;


@end


#endif