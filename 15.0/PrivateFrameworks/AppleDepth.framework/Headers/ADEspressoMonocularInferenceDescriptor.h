// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADESPRESSOMONOCULARINFERENCEDESCRIPTOR_H
#define ADESPRESSOMONOCULARINFERENCEDESCRIPTOR_H



#import "ADEspressoInferenceDescriptor.h"
#import "ADEspressoImageDescriptor.h"

@interface ADEspressoMonocularInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput; // ivar: _colorInput
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput; // ivar: _depthOutput


-(id)initWithNetworkProvider:(id)arg0 ;


@end


#endif