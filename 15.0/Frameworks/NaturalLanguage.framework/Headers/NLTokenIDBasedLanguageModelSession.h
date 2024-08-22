// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLTOKENIDBASEDLANGUAGEMODELSESSION_H
#define NLTOKENIDBASEDLANGUAGEMODELSESSION_H



#import "NLLanguageModelSession.h"

@interface NLTokenIDBasedLanguageModelSession : NLLanguageModelSession



-(NSInteger)blocklistStatusForTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 matchType:(NSInteger)arg2 ;
-(id)conditionalProbabilitiesForTokenIDs:(*unsigned int)arg0 count:(NSUInteger)arg1 contextTokenIDs:(*unsigned int)arg2 length:(NSUInteger)arg3 ;
-(id)conditionalProbabilityForTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;
-(id)stateWithOptions:(id)arg0 ;
-(void)adaptToTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;
-(void)enumeratePredictionsForContextTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 maximumPredictions:(NSUInteger)arg2 maximumTokensPerPrediction:(NSUInteger)arg3 withBlock:(id)arg4 ;
-(void)unadaptToTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;


@end


#endif