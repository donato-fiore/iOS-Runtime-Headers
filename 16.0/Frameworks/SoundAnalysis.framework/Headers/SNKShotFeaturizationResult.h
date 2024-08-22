// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNKSHOTFEATURIZATIONRESULT_H
#define SNKSHOTFEATURIZATIONRESULT_H

@class MLMultiArray, NSArray;

#import <Foundation/Foundation.h>


@interface SNKShotFeaturizationResult : NSObject

@property (retain) MLMultiArray *exemplar; // ivar: _exemplar
@property ? inferenceWindowSize; // ivar: _inferenceWindowSize
@property (copy) NSArray *trainingDataEmbeddings; // ivar: _trainingDataEmbeddings
@property (copy) NSArray *trainingDataLabels; // ivar: _trainingDataLabels
@property (copy) NSArray *validationDataEmbeddings; // ivar: _validationDataEmbeddings
@property (copy) NSArray *validationDataLabels; // ivar: _validationDataLabels




@end


#endif