// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADESPRESSOJASPERTOCOLORTRANSFORMCORRECTIONFRONTENDINFRERENCEDESCRIPTOR_H
#define ADESPRESSOJASPERTOCOLORTRANSFORMCORRECTIONFRONTENDINFRERENCEDESCRIPTOR_H



#import "ADEspressoInferenceDescriptor.h"
#import "ADEspressoImageDescriptor.h"

@interface ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *anglesOutput; // ivar: _anglesOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorsOutput; // ivar: _errorsOutput
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresInput; // ivar: _featuresInput


-(id)initWithNetworkProvider:(id)arg0 ;


@end


#endif