// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLONEHOTENCODER_H
#define MLONEHOTENCODER_H

@class NSString, NSOrderedSet;
@protocol MLModelSpecificationLoader, MLModeling;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLPredictionEvent.h"

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSOrderedSet *featureEncoding; // ivar: _featureEncoding
@property (readonly, nonatomic) BOOL handleUnknown; // ivar: _handleUnknown
@property (readonly) NSUInteger hash;
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) BOOL ouputSparse; // ivar: _ouputSparse
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (readonly) Class superclass;


+(id)featureEncoderFrom:(id)arg0 dataTransformerName:(id)arg1 ouputSparse:(BOOL)arg2 handleUnknown:(BOOL)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 ;
+(id)featureEncoderFrom:(id)arg0 inputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 ;
+(id)featureEncoderFrom:(id)arg0 inputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)encodeFeatureValue:(id)arg0 ;
-(id)encodeFeatureValueIntString:(NSUInteger)arg0 ;
-(id)initWith:(id)arg0 dataTransformerName:(id)arg1 ouputSparse:(BOOL)arg2 handleUnknown:(BOOL)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)unknownDenseVector;


@end


#endif