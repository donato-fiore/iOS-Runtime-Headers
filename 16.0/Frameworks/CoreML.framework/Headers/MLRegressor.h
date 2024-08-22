// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLREGRESSOR_H
#define MLREGRESSOR_H

@protocol MLRegressor;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"

@interface MLRegressor : MLModel <MLRegressor>



@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;


+(id)predictionFromFeatures:(id)arg0 regressor:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initDescriptionOnlyWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)regressorResultFromOutputFeatures:(id)arg0 error:(*id)arg1 ;


@end


#endif