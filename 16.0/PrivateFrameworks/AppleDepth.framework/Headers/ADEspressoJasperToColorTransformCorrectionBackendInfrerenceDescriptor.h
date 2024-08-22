// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADESPRESSOJASPERTOCOLORTRANSFORMCORRECTIONBACKENDINFRERENCEDESCRIPTOR_H
#define ADESPRESSOJASPERTOCOLORTRANSFORMCORRECTIONBACKENDINFRERENCEDESCRIPTOR_H

@class ADEspressoInferenceDescriptor, ADEspressoImageDescriptor;



@interface ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput; // ivar: _featuresOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput; // ivar: _jasperInput


-(id)initWithNetworkProvider:(id)arg0 ;


@end


#endif