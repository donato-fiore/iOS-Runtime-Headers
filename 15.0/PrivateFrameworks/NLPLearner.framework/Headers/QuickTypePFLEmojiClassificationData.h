// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUICKTYPEPFLEMOJICLASSIFICATIONDATA_H
#define QUICKTYPEPFLEMOJICLASSIFICATIONDATA_H

@class NSMutableArray, NSLocale, NSNumber, NSDictionary;


#import "QuickTypePFLTrainingData.h"

@interface QuickTypePFLEmojiClassificationData : QuickTypePFLTrainingData {
    NSMutableArray *_labels;
    NSLocale *_locale;
    NSNumber *_noneClassProbability;
    CFScopedPtr<void *> _embedding;
}


@property (readonly, nonatomic) NSUInteger embeddingDimension; // ivar: _embeddingDimension
@property (readonly, nonatomic) NSDictionary *labelClasses; // ivar: _labelClasses
@property (readonly, nonatomic) NSUInteger numOutputClasses;


+(void)initialize;
-(BOOL)addExamples:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 ;
-(id)getEvaluationDataPoint;
-(id)getTrainingDataBatch:(NSUInteger)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)addResource:(id)arg0 ;
-(void)sampleNoneClassExample:(id)arg0 ;


@end


#endif