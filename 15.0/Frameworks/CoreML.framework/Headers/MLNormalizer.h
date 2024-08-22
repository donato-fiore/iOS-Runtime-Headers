// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNORMALIZER_H
#define MLNORMALIZER_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLNormalizer : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int norm; // ivar: _norm
@property (readonly) Class superclass;


+(id)inputDescriptionFrom:(id)arg0 outputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 orderedOutputFeatureNames:(id)arg3 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)normFrom:(int)arg0 dataTransformerName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 ;
+(id)normFrom:(int)arg0 inputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 ;
-(id)initWith:(int)arg0 dataTransformerName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif