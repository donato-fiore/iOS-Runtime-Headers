// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGPUWEIGHTSCONVOLUTION_H
#define _MLCGPUWEIGHTSCONVOLUTION_H

@class NSString, MPSCNNConvolutionDescriptor;
@protocol NSCopying, MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>

#import "MLCTensor.h"
#import "MLCConvolutionDescriptor.h"
#import "MLCActivationDescriptor.h"

@interface _MLCGPUWeightsConvolution : NSObject <NSCopying, MPSCNNConvolutionDataSource>



@property (readonly, weak, nonatomic) MLCTensor *biasTerm; // ivar: _biasTerm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MLCConvolutionDescriptor *desc; // ivar: _desc
@property (readonly, nonatomic) MPSCNNConvolutionDescriptor *descMPS; // ivar: _descMPS
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MLCTensor *localBiasTerm; // ivar: _localBiasTerm
@property (retain, nonatomic) MLCTensor *localWeight; // ivar: _localWeight
@property (readonly, nonatomic) MLCActivationDescriptor *neuronDesc; // ivar: _neuronDesc
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) MLCTensor *weight; // ivar: _weight


+(id)weightWithDescriptor:(id)arg0 biasTerms:(id)arg1 weights:(id)arg2 ;
+(id)weightWithDescriptor:(id)arg0 biasTerms:(id)arg1 weights:(id)arg2 neuronDescriptor:(id)arg3 ;
-(BOOL)load;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDescriptor:(id)arg0 biasTerms:(id)arg1 weights:(id)arg2 neuronDescriptor:(id)arg3 ;
-(id)label;
-(unsigned int)dataType;
-(unsigned int)kernelWeightsDataType;
-(void)purge;


@end


#endif