// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCACTIVITYCLASSIFIERTRAINEROPTIONS_H
#define TCACTIVITYCLASSIFIERTRAINEROPTIONS_H


#import <Foundation/Foundation.h>


@interface TCActivityClassifierTrainerOptions : NSObject

@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSInteger numClasses; // ivar: _numClasses
@property (nonatomic) NSInteger numFeatures; // ivar: _numFeatures
@property (nonatomic) NSInteger numPredictionsPerChunk; // ivar: _numPredictionsPerChunk
@property (nonatomic) NSInteger predictionWindow; // ivar: _predictionWindow
@property (nonatomic) NSInteger randomSeed; // ivar: _randomSeed


-(id)init;


@end


#endif