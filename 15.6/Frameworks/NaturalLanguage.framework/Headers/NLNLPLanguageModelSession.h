// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLNLPLANGUAGEMODELSESSION_H
#define NLNLPLANGUAGEMODELSESSION_H



#import "NLLanguageModelSession.h"

@interface NLNLPLanguageModelSession : NLLanguageModelSession {
    *CoreLanguageModelWithState _model;
}




-(id)conditionalProbabilitiesForStrings:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForString:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForToken:(id)arg0 context:(id)arg1 ;
-(id)description;
-(id)initWithLanguageModel:(id)arg0 options:(id)arg1 ;
-(id)predictionInitialCharacterSet;
-(id)predictionOptionsForMaximumPredictions:(NSUInteger)arg0 maximumTokensPerPrediction:(NSUInteger)arg1 ;
-(id)stateWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePredictionsForContext:(id)arg0 maximumPredictions:(NSUInteger)arg1 maximumTokensPerPrediction:(NSUInteger)arg2 withBlock:(id)arg3 ;


@end


#endif