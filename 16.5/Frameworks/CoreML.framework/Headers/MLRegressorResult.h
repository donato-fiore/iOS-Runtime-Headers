// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLREGRESSORRESULT_H
#define MLREGRESSORRESULT_H

@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "MLMultiArray.h"

@interface MLRegressorResult : NSObject

@property (readonly) NSObject<MLFeatureProvider> *additionalFeatures; // ivar: _additionalFeatures
@property (readonly) MLMultiArray *predictedValue; // ivar: _predictedValue


+(id)resultWithValue:(id)arg0 ;
+(id)resultWithValue:(id)arg0 additionalFeatures:(id)arg1 ;
-(id)asFeatureDictionaryWithPredictedValueDescription:(id)arg0 ;
-(id)initWithValue:(id)arg0 additionalFeatures:(id)arg1 ;


@end


#endif