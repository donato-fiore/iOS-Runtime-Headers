// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMPROGRAMWRAPPERTWOINPUT_H
#define TDREAMPROGRAMWRAPPERTWOINPUT_H



#import "TDreamProgramWrapper.h"

@interface TDreamProgramWrapperTwoInput : TDreamProgramWrapper {
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}




-(id)initWithFragmentShaderFromString:(id)arg0 ;
-(id)initWithVertexShaderFromString:(id)arg0 fragmentShaderFromString:(id)arg1 ;
-(void)initializeAttributes;
-(void)renderTo:(unsigned int)arg0 from:(unsigned int)arg1 andFrom:(unsigned int)arg2 ;


@end


#endif