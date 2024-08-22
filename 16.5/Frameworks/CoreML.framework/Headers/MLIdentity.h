// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLIDENTITY_H
#define MLIDENTITY_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLIdentity : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(struct _MLModelSpecification *)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif