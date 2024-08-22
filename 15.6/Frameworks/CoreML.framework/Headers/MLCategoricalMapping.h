// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCATEGORICALMAPPING_H
#define MLCATEGORICALMAPPING_H

@class NSString, NSDictionary;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"
#import "MLFeatureValue.h"

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *mapping; // ivar: _mapping
@property (readonly) Class superclass;
@property (readonly, nonatomic) MLFeatureValue *valueOnUnknown; // ivar: _valueOnUnknown


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithMapping:(id)arg0 valueOnUnknown:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 ;
-(id)mapFeature:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif