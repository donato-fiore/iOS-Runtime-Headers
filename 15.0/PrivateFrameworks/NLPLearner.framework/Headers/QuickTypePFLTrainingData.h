// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUICKTYPEPFLTRAININGDATA_H
#define QUICKTYPEPFLTRAININGDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface QuickTypePFLTrainingData : NSObject

@property (nonatomic) NSUInteger iterator; // ivar: _iterator
@property (nonatomic) NSUInteger maxSequenceLength; // ivar: _maxSequenceLength
@property (readonly, nonatomic) NSUInteger numTrainingSamples;
@property (nonatomic) BOOL processingNewRecord; // ivar: _processingNewRecord
@property (retain, nonatomic) NSMutableArray *sentences; // ivar: _sentences


+(NSUInteger)defaultMaxSequenceLength;
+(id)trainingDataFor:(NSInteger)arg0 andLocale:(id)arg1 ;
+(void)initialize;
-(BOOL)loadFromCoreDuet:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 withLocale:(id)arg1 andLMStreamTokenizationBlock:(id)arg2 ;
-(id)getEvaluationDataPoint;
-(id)getTrainingDataBatch:(NSUInteger)arg0 ;
-(id)init;
-(void)addResource:(id)arg0 ;
-(void)rewind;


@end


#endif