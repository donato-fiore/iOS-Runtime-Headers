// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSVMENGINE_H
#define MLSVMENGINE_H

@class NSArray, NSString;
@protocol MLModelSpecificationLoader;

#import <Foundation/Foundation.h>


@interface MLSVMEngine : NSObject <MLModelSpecificationLoader>



@property (retain, nonatomic) NSArray *classLabels; // ivar: _classLabels
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL freeModelOnDealloc; // ivar: _freeModelOnDealloc
@property (readonly) NSUInteger hash;
@property NSUInteger inputSize; // ivar: _inputSize
@property BOOL isInputSizeLowerBoundOnly; // ivar: _isInputSizeLowerBoundOnly
@property *svm_model model; // ivar: _model
@property (readonly, nonatomic) NSUInteger numberOfClasses;
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasProbabilityPredictionEnabled;
-(id)initWithLibSVMFile:(id)arg0 classLabels:(id)arg1 ;
-(id)initWithSVMModel:(struct svm_model *)arg0 freeOnDealloc:(BOOL)arg1 isInputSizeLowerBoundOnly:(BOOL)arg2 inputSize:(NSUInteger)arg3 classLabels:(id)arg4 ;
-(id)predict:(id)arg0 ;
-(struct svm_node *)allocSVMNodeVector:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deallocSVMNodeVector:(struct svm_node *)arg0 ;
-(void)fillSVMNodeVector:(struct svm_node *)arg0 values:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)predictProbabilities:(id)arg0 probabilities:(*CGFloat)arg1 ;


@end


#endif