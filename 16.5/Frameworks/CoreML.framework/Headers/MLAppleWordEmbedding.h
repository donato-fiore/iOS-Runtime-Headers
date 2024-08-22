// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLAPPLEWORDEMBEDDING_H
#define MLAPPLEWORDEMBEDDING_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"
#import "MLAppleWordEmbeddingParameters.h"

@interface MLAppleWordEmbedding : MLModel <MLModelSpecificationLoader>

 {
    *void wordEmbeddingModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLAppleWordEmbeddingParameters *parameters; // ivar: _parameters
@property (readonly) Class superclass;


+(BOOL)saveAppleWordEmbeddingModelToURL:(id)arg0 wordEmbeddingParameters:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithParameters:(id)arg0 modelDescription:(id)arg1 nlpHandle:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif