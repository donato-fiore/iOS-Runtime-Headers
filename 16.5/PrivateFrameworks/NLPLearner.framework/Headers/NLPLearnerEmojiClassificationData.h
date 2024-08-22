// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPLEARNEREMOJICLASSIFICATIONDATA_H
#define NLPLEARNEREMOJICLASSIFICATIONDATA_H

@class NSMutableArray, NSNumber, NSDictionary;


#import "NLPLearnerTextData.h"

@interface NLPLearnerEmojiClassificationData : NLPLearnerTextData {
    NSMutableArray *_labels;
    NSNumber *_noneClassProbability;
    CFScopedPtr<void *> _embedding;
}


@property (readonly, nonatomic) NSUInteger embeddingDimension; // ivar: _embeddingDimension
@property (readonly, nonatomic) NSDictionary *labelClasses; // ivar: _labelClasses
@property (readonly, nonatomic) NSUInteger numOutputClasses;


+(void)initialize;
-(BOOL)addExamples:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 limitSamplesTo:(NSUInteger)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)nextEvaluationDataPoint;
-(id)nextTrainingDataBatch:(NSUInteger)arg0 ;
-(void)addResource:(id)arg0 ;
-(void)sampleNoneClassExample:(id)arg0 ;


@end


#endif