// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLLANGUAGEMODELSESSION_H
#define NLLANGUAGEMODELSESSION_H


#import <Foundation/Foundation.h>

#import "NLLanguageModel.h"

@interface NLLanguageModelSession : NSObject

@property (readonly, retain, nonatomic) NLLanguageModel *languageModel; // ivar: _languageModel


+(void)performMaintenance;
+(void)setLogLevel:(NSInteger)arg0 ;
-(NSInteger)blocklistStatusForString:(id)arg0 matchType:(NSInteger)arg1 ;
-(id)conditionalProbabilitiesForStrings:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilitiesForTokens:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForString:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForToken:(id)arg0 context:(id)arg1 ;
-(id)initWithLanguageModel:(id)arg0 options:(id)arg1 ;
-(id)stateWithOptions:(id)arg0 ;
-(void)adaptToText:(id)arg0 ;
-(void)adaptToToken:(id)arg0 context:(id)arg1 ;
-(void)addPriorText:(id)arg0 type:(NSInteger)arg1 time:(id)arg2 ;
-(void)applyExponentialDecay;
-(void)enumeratePredictionsForContext:(id)arg0 maximumPredictions:(NSUInteger)arg1 maximumTokensPerPrediction:(NSUInteger)arg2 withBlock:(id)arg3 ;
-(void)flushDynamicData;
-(void)pruneToSize:(NSUInteger)arg0 ;
-(void)recordWithDifferentialPrivacy:(id)arg0 ;
-(void)registerNegativeEvidenceForToken:(id)arg0 ;
-(void)reset;
-(void)unadaptToToken:(id)arg0 context:(id)arg1 ;


@end


#endif