// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLPLEARNERLANGUAGEMODELINGDATA_H
#define NLPLEARNERLANGUAGEMODELINGDATA_H

@class NSString;


#import "NLPLearnerTextData.h"

@interface NLPLearnerLanguageModelingData : NLPLearnerTextData {
    CFScopedPtr<const _LXLexicon *> _lexicon;
}


@property (copy, nonatomic) NSString *tokenIDMapPath; // ivar: _tokenIDMapPath


+(NSUInteger)defaultMaxSequenceLength;
+(void)initialize;
-(BOOL)addExamples:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 limitSamplesTo:(NSUInteger)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)nextEvaluationDataPoint;
-(id)nextTrainingDataBatch:(NSUInteger)arg0 ;
-(void)addPreprocessedExample:(*void)arg0 ;
-(void)addResource:(id)arg0 ;


@end


#endif