// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNONMAXIMUMSUPPRESSION_H
#define MLNONMAXIMUMSUPPRESSION_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"
#import "MLNonMaximumSuppressionParameters.h"

@interface MLNonMaximumSuppression : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLNonMaximumSuppressionParameters *parameters; // ivar: _parameters
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithParameters:(id)arg0 modelDescription:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif