// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLSVRENGINE_H
#define MLSVRENGINE_H

@class NSString;
@protocol MLModelSpecificationLoader;

#import <Foundation/Foundation.h>


@interface MLSVREngine : NSObject <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL freeModelOnDealloc; // ivar: _freeModelOnDealloc
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger inputSize; // ivar: _inputSize
@property (readonly) BOOL isInputSizeLowerBoundOnly; // ivar: _isInputSizeLowerBoundOnly
@property *svm_model model; // ivar: _model
@property (readonly) Class superclass;


+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithLibSVMFile:(id)arg0 ;
-(id)initWithSVMModel:(struct svm_model *)arg0 freeOnDealloc:(BOOL)arg1 isInputSizeLowerBoundOnly:(BOOL)arg2 inputSize:(NSUInteger)arg3 ;
-(id)predict:(id)arg0 ;
-(struct svm_node *)allocSVMNodeVector:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deallocSVMNodeVector:(struct svm_node *)arg0 ;
-(void)fillSVMNodeVector:(struct svm_node *)arg0 values:(*CGFloat)arg1 count:(NSUInteger)arg2 ;


@end


#endif