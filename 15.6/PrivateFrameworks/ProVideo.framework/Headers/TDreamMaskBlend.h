// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMMASKBLEND_H
#define TDREAMMASKBLEND_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamMaskBlend : TDreamProgramWrapperTwoInput {
    int filterThirdTextureCoordinateAttribute;
    int filterInputThirdTextureUniform;
}




-(id)initWithFragmentShaderFromString:(id)arg0 ;
-(id)initWithVertexShaderFromString:(id)arg0 fragmentShaderFromString:(id)arg1 ;
-(void)initializeAttributes;
-(void)renderTo:(unsigned int)arg0 from:(unsigned int)arg1 andFrom:(unsigned int)arg2 andFrom:(unsigned int)arg3 ;


@end


#endif