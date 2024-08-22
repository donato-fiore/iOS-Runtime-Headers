// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSOTRAININGCONVOLUTIONWEIGHTSFORMPS_H
#define ESPRESSOTRAININGCONVOLUTIONWEIGHTSFORMPS_H

@protocol MTLBuffer;


#import "EspressoConvolutionWeightsForMPS.h"

@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {
    BOOL is_training;
}


@property (retain) NSObject<MTLBuffer> *biasesBuffer; // ivar: _biasesBuffer
@property (retain) NSObject<MTLBuffer> *weightsBuffer; // ivar: _weightsBuffer


-(*float)biasTerms;
-(*void)weights;
-(BOOL)ready;
-(id)initWithParams:(struct convolution_uniforms )arg0 forMode:(BOOL)arg1 ;
-(unsigned int)weightsLayout;


@end


#endif