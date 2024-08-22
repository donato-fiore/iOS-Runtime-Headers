// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADESPRESSOJASPERCOLORV2INFERENCEDESCRIPTOR_H
#define ADESPRESSOJASPERCOLORV2INFERENCEDESCRIPTOR_H

@class ADEspressoInferenceDescriptor, ADEspressoImageDescriptor;



@interface ADEspressoJasperColorV2InferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput; // ivar: _depthOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput; // ivar: _jasperInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevColorInput; // ivar: _prevColorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDepthInput; // ivar: _prevDepthInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevUncertaintyInput; // ivar: _prevUncertaintyInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *uncertaintyOutput; // ivar: _uncertaintyOutput


-(id)initWithNetworkProvider:(id)arg0 espressoEngine:(NSUInteger)arg1 ;


@end


#endif