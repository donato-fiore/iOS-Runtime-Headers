// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOCONVOLUTIONWEIGHTSFORMPS_H
#define ESPRESSOCONVOLUTIONWEIGHTSFORMPS_H

@class NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource>

 {
    convolution_uniforms params;
    shared_ptr<Espresso::blob<unsigned char, 4>> quantized_weights_blob;
    shared_ptr<Espresso::blob<float, 4>> weights_blob;
    shared_ptr<Espresso::blob<unsigned short, 4>> weights_f16_blob;
    shared_ptr<Espresso::blob<float, 1>> biases_blob;
    shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>> quantization_ranges;
    shared_ptr<Espresso::blob<float, 1>> quantization_lut;
    shared_ptr<Espresso::blob<float, 1>> scale_factor_batch_norm;
    unsigned int data_type;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*float)biasTerms;
-(*float)lookupTableForUInt8Kernel;
-(*id)rangesForUInt8Kernel;
-(*void)weights;
-(BOOL)load;
-(BOOL)ready;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptor;
-(id)initWithParams:(struct convolution_uniforms )arg0 ;
-(id)label;
-(unsigned int)dataType;
-(void)purge;


@end


#endif