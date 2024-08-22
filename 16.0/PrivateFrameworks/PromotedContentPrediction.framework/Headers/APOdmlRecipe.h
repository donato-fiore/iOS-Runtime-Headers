// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLRECIPE_H
#define APODMLRECIPE_H

@class NSNumber, NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface APOdmlRecipe : NSObject

@property (readonly, nonatomic) NSNumber *batchSize; // ivar: _batchSize
@property (readonly, nonatomic) NSDictionary *desSettings; // ivar: _desSettings
@property (readonly, nonatomic) NSString *functionInitName; // ivar: _functionInitName
@property (readonly, nonatomic) NSString *iCloudServiceKey; // ivar: _iCloudServiceKey
@property (readonly, nonatomic) NSNumber *isCounterfactual; // ivar: _isCounterfactual
@property (readonly, nonatomic) NSString *isTrainingName; // ivar: _isTrainingName
@property (readonly, nonatomic) NSNumber *l2NormBound; // ivar: _l2NormBound
@property (readonly, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) NSNumber *learningRate; // ivar: _learningRate
@property (readonly, nonatomic) NSString *learningRateName; // ivar: _learningRateName
@property (readonly, nonatomic) NSNumber *localIterationsCount; // ivar: _localIterationsCount
@property (readonly, nonatomic) NSString *lossName; // ivar: _lossName
@property (readonly, nonatomic) NSNumber *maxNorm; // ivar: _maxNorm
@property (readonly, nonatomic) NSNumber *minTrainingSamples; // ivar: _minTrainingSamples
@property (readonly, nonatomic) NSString *modelFileName; // ivar: _modelFileName
@property (readonly, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, nonatomic) NSNumber *normBinCount; // ivar: _normBinCount
@property (readonly, nonatomic) NSDictionary *privacyParams; // ivar: _privacyParams
@property (readonly, nonatomic) NSNumber *shouldShuffle; // ivar: _shouldShuffle
@property (readonly, nonatomic) NSArray *trainLayers; // ivar: _trainLayers
@property (readonly, nonatomic) NSNumber *weightBySamples; // ivar: _weightBySamples
@property (readonly, nonatomic) NSArray *weightNames; // ivar: _weightNames


-(id)initWithDictionary:(id)arg0 ;


@end


#endif