// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTIONRERANKER_H
#define ATXSUGGESTIONRERANKER_H

@class NSDictionary, NSString;
@protocol ATXSuggestionRerankerProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXSuggestionReranker : NSObject <ATXSuggestionRerankerProtocol>

 {
    NSDictionary *_clientModelSuggestions;
    NSString *_promotedClientModelId;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_blendingLayerHyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)clientModelPriorityOrder;
-(id)constructConfidenceCategoryDictionaryForClientModelSuggestions;
-(id)convertConfidenceCategoryDictionaryToArray:(id)arg0 ;
-(id)init;
-(id)initWithClientModelSuggestions:(id)arg0 promoteSuggestionsFromClientModel:(id)arg1 hyperParameters:(id)arg2 ;
-(id)initWithProactiveSuggestions:(id)arg0 hyperParameters:(id)arg1 ;
-(id)initializeConfidenceCategoryToSuggestionsDictionary;
-(id)rerankedSuggestions;


@end


#endif