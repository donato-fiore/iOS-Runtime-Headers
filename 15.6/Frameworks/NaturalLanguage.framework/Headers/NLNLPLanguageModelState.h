// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLNLPLANGUAGEMODELSTATE_H
#define NLNLPLANGUAGEMODELSTATE_H



#import "NLLanguageModelState.h"

@interface NLNLPLanguageModelState : NLLanguageModelState {
    *CoreLanguageModelWithState _modelState;
}




-(id)conditionalProbabilitiesForStrings:(id)arg0 ;
-(id)conditionalProbabilityForString:(id)arg0 ;
-(id)conditionalProbabilityForToken:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSession:(id)arg0 options:(id)arg1 context:(id)arg2 modelState:(*void)arg3 ;
-(void)addContext:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePredictions:(NSUInteger)arg0 maximumTokensPerPrediction:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)resetContext;


@end


#endif