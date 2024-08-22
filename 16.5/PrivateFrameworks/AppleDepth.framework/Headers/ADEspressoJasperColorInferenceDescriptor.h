// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADESPRESSOJASPERCOLORINFERENCEDESCRIPTOR_H
#define ADESPRESSOJASPERCOLORINFERENCEDESCRIPTOR_H

@class ADEspressoInferenceDescriptor, ADEspressoImageDescriptor;



@interface ADEspressoJasperColorInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *alphaMapOutput; // ivar: _alphaMapOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *confidenceOutput; // ivar: _confidenceOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput; // ivar: _depthOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput; // ivar: _jasperInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *normalsOutput; // ivar: _normalsOutput


-(id)initWithNetworkProvider:(id)arg0 ;


@end


#endif