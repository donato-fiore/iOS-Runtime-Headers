// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADESPRESSOSTILLIMAGEINFERENCEDESCRIPTOR_H
#define ADESPRESSOSTILLIMAGEINFERENCEDESCRIPTOR_H

@class ADEspressoInferenceDescriptor, ADEspressoImageDescriptor;



@interface ADEspressoStillImageInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput; // ivar: _depthOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput; // ivar: _jasperInput


-(id)initWithNetworkProvider:(id)arg0 ;


@end


#endif