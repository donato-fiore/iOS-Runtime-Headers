// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLGLMREGRESSION_H
#define MLGLMREGRESSION_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLRegressor.h"

@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader>

 {
    vector<double, std::allocator<double>> intercept;
    vector<std::vector<double>, std::allocator<std::vector<double>>> weights;
    int postEvalTransForm;
    shared_ptr<CoreML::Specification::Model> m_spec;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithLRSpec:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif