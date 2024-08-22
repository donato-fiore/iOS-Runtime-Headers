// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADESPRESSOPCEDISPARITYCOLORINFERENCEDESCRIPTOR_H
#define ADESPRESSOPCEDISPARITYCOLORINFERENCEDESCRIPTOR_H

@class ADEspressoInferenceDescriptor, ADEspressoImageDescriptor;



@interface ADEspressoPCEDisparityColorInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityInput; // ivar: _disparityInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput; // ivar: _disparityOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput; // ivar: _featuresOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDisparityInput; // ivar: _prevDisparityInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevFeaturesInput; // ivar: _prevFeaturesInput


-(id)initWithNetworkProvider:(id)arg0 inputColorFormat:(unsigned int)arg1 disparityFormat:(unsigned int)arg2 ;


@end


#endif