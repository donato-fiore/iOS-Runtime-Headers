// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLIMPUTER_H
#define MLIMPUTER_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"
#import "MLFeatureValue.h"

@interface MLImputer : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MLFeatureValue *imputeValue; // ivar: _imputeValue
@property (readonly, nonatomic) MLFeatureValue *replaceValue; // ivar: _replaceValue
@property (readonly) Class superclass;


+(id)imputeValueFrom:(id)arg0 replaceValue:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(*id)arg7 ;
+(id)imputeValueFrom:(id)arg0 replaceValue:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 error:(*id)arg6 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWith:(id)arg0 imputeValue:(id)arg1 replaceValue:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 error:(*id)arg8 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif