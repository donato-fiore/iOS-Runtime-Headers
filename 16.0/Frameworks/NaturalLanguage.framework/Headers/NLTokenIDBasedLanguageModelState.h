// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLTOKENIDBASEDLANGUAGEMODELSTATE_H
#define NLTOKENIDBASEDLANGUAGEMODELSTATE_H

@class NSMutableArray;


#import "NLLanguageModelState.h"

@interface NLTokenIDBasedLanguageModelState : NLLanguageModelState {
    NSMutableArray *_contextTokenIDArray;
}




-(*unsigned int)contextTokenIDs;
-(NSUInteger)contextLength;
-(id)conditionalProbabilitiesForTokenIDs:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(id)conditionalProbabilityForToken:(id)arg0 ;
-(id)conditionalProbabilityForTokenID:(unsigned int)arg0 ;
-(id)contextTokenIDArrayForContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSession:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(id)initWithSession:(id)arg0 options:(id)arg1 context:(id)arg2 contextTokenIDArray:(id)arg3 ;
-(void)addContext:(id)arg0 ;
-(void)addContextTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(void)enumeratePredictions:(NSUInteger)arg0 maximumTokensPerPrediction:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)resetContext;


@end


#endif