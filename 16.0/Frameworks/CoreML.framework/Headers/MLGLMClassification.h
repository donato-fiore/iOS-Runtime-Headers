// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLGLMCLASSIFICATION_H
#define MLGLMCLASSIFICATION_H

@class NSMutableArray, NSString;
@protocol MLModelSpecificationLoader;


#import "MLClassifier.h"

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader>

 {
    vector<double, std::allocator<double>> intercept;
    vector<std::vector<double>, std::allocator<std::vector<double>>> weights;
    NSMutableArray *classLabels;
    NSInteger classType;
    int postEvalTransForm;
    int classEncoding;
    shared_ptr<CoreML::Specification::Model> m_spec;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)calculateClassProbability:(*CGFloat)arg0 input:(id)arg1 error:(*id)arg2 ;
-(id)classify:(id)arg0 error:(*id)arg1 ;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)classify:(id)arg0 topK:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;


@end


#endif