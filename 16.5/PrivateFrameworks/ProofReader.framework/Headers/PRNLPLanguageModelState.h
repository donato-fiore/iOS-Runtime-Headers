// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRNLPLANGUAGEMODELSTATE_H
#define PRNLPLANGUAGEMODELSTATE_H

@class NLLanguageModelState, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PRNLPLanguageModel.h"

@interface PRNLPLanguageModelState : NSObject {
    NLLanguageModelState *_state;
    NSMutableDictionary *_cachedPredictionsDictionary;
}


@property (readonly, nonatomic) PRNLPLanguageModel *languageModel; // ivar: _languageModel


-(BOOL)getConditionalProbabilityForString:(id)arg0 probability:(*CGFloat)arg1 ;
-(id)conditionalProbabilityDictionaryForStrings:(id)arg0 ;
-(id)initWithLanguageModel:(id)arg0 state:(id)arg1 ;
-(void)dealloc;
-(void)enumeratePredictions:(NSUInteger)arg0 maxTokensPerPrediction:(NSUInteger)arg1 withBlock:(id)arg2 ;


@end


#endif