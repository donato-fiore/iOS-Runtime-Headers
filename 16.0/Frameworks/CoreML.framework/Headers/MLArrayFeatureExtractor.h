// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLARRAYFEATUREEXTRACTOR_H
#define MLARRAYFEATUREEXTRACTOR_H

@class NSString, NSArray;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader>



@property (readonly, nonatomic) NSString *arrayColumnName; // ivar: _arrayColumnName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *extractIndices; // ivar: _extractIndices
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger outputType; // ivar: _outputType
@property (readonly) Class superclass;


+(id)extractArrayElement:(id)arg0 indices:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 ;
+(id)extractArrayElement:(id)arg0 indices:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWith:(id)arg0 indices:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif