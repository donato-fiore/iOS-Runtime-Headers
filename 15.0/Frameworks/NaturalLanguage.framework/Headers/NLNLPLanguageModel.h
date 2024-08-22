// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLNLPLANGUAGEMODEL_H
#define NLNLPLANGUAGEMODEL_H



#import "NLLanguageModel.h"

@interface NLNLPLanguageModel : NLLanguageModel {
    NSInteger _granularity;
}




-(BOOL)generatesPredictions;
-(CGFloat)conditionalProbabilityForEntry:(id)arg0 context:(id)arg1 ;
-(CGFloat)conditionalProbabilityForWord:(id)arg0 context:(id)arg1 ;
-(NSInteger)granularity;
-(id)initWithLocalization:(id)arg0 options:(id)arg1 ;
-(id)sessionWithOptions:(id)arg0 ;
-(void)enumeratePredictionsForContext:(id)arg0 maxEntriesPerPrediction:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePredictionsForContext:(id)arg0 maxWordsPerPrediction:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif