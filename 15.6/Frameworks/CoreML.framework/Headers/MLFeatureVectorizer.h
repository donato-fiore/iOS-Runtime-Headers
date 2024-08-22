// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLFEATUREVECTORIZER_H
#define MLFEATUREVECTORIZER_H

@class NSArray, NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader>

 {
    NSArray *_output_array_shape;
    vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> index_mapping;
}


@property (readonly, nonatomic) NSArray *columnNameEncoding; // ivar: _columnNameEncoding
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dimensionEncoding; // ivar: _dimensionEncoding
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWith:(id)arg0 dimensionEncoding:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)vectorizeOneHotEncoderDict:(id)arg0 index:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif