// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGMODELTRAINERRESPONSE_H
#define PHAPRIVATEFEDERATEDLEARNINGMODELTRAINERRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningModelTrainerResponse : NSObject

@property (nonatomic) NSUInteger numberOfTrainingSamples; // ivar: _numberOfTrainingSamples
@property (retain, nonatomic) NSArray *parameterDeltas; // ivar: _parameterDeltas
@property (retain, nonatomic) NSArray *trainingAccuraciesPerEpoch; // ivar: _trainingAccuraciesPerEpoch
@property (nonatomic) NSUInteger trainingEpochs; // ivar: _trainingEpochs
@property (retain, nonatomic) NSArray *trainingLossesPerEpoch; // ivar: _trainingLossesPerEpoch


-(id)initWithParameterDeltas:(id)arg0 trainingLossesPerEpoch:(id)arg1 trainingAccuraciesPerEpoch:(id)arg2 trainingEpochs:(NSUInteger)arg3 numberOfTrainingSamples:(NSUInteger)arg4 ;


@end


#endif