// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNIVERSALBLENDINGLAYER_H
#define ATXUNIVERSALBLENDINGLAYER_H

@class NSString, NSDictionary;
@protocol ATXSuggestionPreprocessorProtocol, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerSessionLoggerProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>

#import "ATXUniversalBlendingFeedbackWriter.h"

@interface ATXUniversalBlendingLayer : NSObject {
    NSString *_promotedClientModelId;
    id<ATXSuggestionPreprocessorProtocol> *_suggestionPreprocessor;
    id<ATXBlendingLayerDelegateProtocol> *_delegate;
    NSDictionary *_layoutSelectorsForConsumerSubTypes;
    id<ATXBlendingLayerSessionLoggerProtocol> *_blendingSessionLogger;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
}


@property (readonly, nonatomic) ATXUniversalBlendingFeedbackWriter *feedbackWriter; // ivar: _feedbackWriter


+(id)validConsumerSubTypesForLayoutGeneration;
+(void)logLongDescriptionForBlendingLayerString:(id)arg0 prefix:(id)arg1 shouldUseDefaultLogLevel:(BOOL)arg2 limit:(NSUInteger)arg3 ;
-(BOOL)updateCachedLayout:(id)arg0 uiConsumer:(unsigned char)arg1 clientModelSuggestions:(id)arg2 ;
-(BOOL)updateSuggestionsForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 clientModelSuggestions:(id)arg2 ;
-(id)init;
-(id)initWithSuggestionPreprocessor:(id)arg0 delegate:(id)arg1 layoutSelectorsForConsumerSubTypes:(id)arg2 blendingSessionLogger:(id)arg3 hyperParameters:(id)arg4 ;
-(id)rerankedSuggestions:(id)arg0 ;
-(id)rerankedValidSuggestionsFromClientModelSuggestions:(id)arg0 ;
-(id)selectedLayoutForUIConsumer:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;
-(void)promoteSuggestionsFromClientModelWithIdentifier:(id)arg0 ;
-(void)updateSuggestionsForAllConsumerSubTypesWithClientModelSuggestions:(id)arg0 ;
-(void)updateSuggestionsForConsumerSubTypes:(id)arg0 clientModelSuggestions:(id)arg1 ;


@end


#endif