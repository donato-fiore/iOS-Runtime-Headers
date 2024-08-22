// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESPRESSOTRAININGINNERPRODUCTWEIGHTSFORMPS_H
#define ESPRESSOTRAININGINNERPRODUCTWEIGHTSFORMPS_H

@protocol MTLBuffer;


#import "EspressoInnerProductWeightsForMPS.h"

@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS

@property (retain) NSObject<MTLBuffer> *biasesBuffer; // ivar: _biasesBuffer
@property (retain) NSObject<MTLBuffer> *weightsBuffer; // ivar: _weightsBuffer


-(*float)biasTerms;
-(*void)weights;
-(BOOL)ready;
-(id)initWithParams:(struct inner_product_uniforms )arg0 forMode:(BOOL)arg1 ;


@end


#endif