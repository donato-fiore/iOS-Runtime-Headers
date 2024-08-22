// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLAYOUTGENERATOR_H
#define ATXLAYOUTGENERATOR_H

@class NSArray;
@protocol ATXLayoutGeneratorProtocol, ATXUniversalBlendingLayerHyperParametersProtocol, ATXUniversalSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>


@interface ATXLayoutGenerator : NSObject <ATXLayoutGeneratorProtocol>

 {
    NSArray *_rankedSuggestions;
    NSArray *_layoutsToConsider;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
    id<ATXUniversalSuggestionDeduplicatorProtocol> *_deduplicator;
}




+(id)sortLayouts:(id)arg0 ;
-(CGFloat)marginalScoreForSuggestion:(id)arg0 topRankingSuggestion:(id)arg1 ;
-(CGFloat)weightForConfidenceCategory:(NSInteger)arg0 ;
-(id)generateGreedySuggestionLayoutForUILayoutType:(NSInteger)arg0 layoutTypesForRankedSuggestions:(id)arg1 isSuggestionsWidgetLayout:(BOOL)arg2 ;
-(id)generateLayoutToSuggestionDictionary;
-(id)generateValidLayouts;
-(id)init;
-(id)initWithRankedSuggestions:(id)arg0 layoutsToConsider:(id)arg1 hyperParameters:(id)arg2 suggestionDeduplicator:(id)arg3 ;
-(id)uuidOfHighestConfidenceSuggestionFromRankedSuggestions:(id)arg0 uiLayoutType:(NSInteger)arg1 ;
-(void)scoreLayout:(id)arg0 ;


@end


#endif