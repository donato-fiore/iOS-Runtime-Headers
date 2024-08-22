// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMPROGRAMWRAPPER_H
#define TDREAMPROGRAMWRAPPER_H


#import <Foundation/Foundation.h>

#import "TDreamGLProgramHelper.h"

@interface TDreamProgramWrapper : NSObject {
    int sizeUniform;
    CGRect outputRect;
    TDreamGLProgramHelper *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float texCoord0;
}




-(id)getProgram;
-(id)init;
-(id)initWithFragmentShaderFromString:(id)arg0 ;
-(id)initWithProgram:(id)arg0 ;
-(id)initWithVertexShaderFromString:(id)arg0 fragmentShaderFromString:(id)arg1 ;
-(void)initializeAttributes;
-(void)initializeTexCoord0;
-(void)renderTo:(unsigned int)arg0 from:(unsigned int)arg1 ;
-(void)setInputTexture0Rect:(struct CGRect )arg0 withinRect:(struct CGRect )arg1 ;
-(void)setOutputRect:(struct CGRect )arg0 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setUniforms;


@end


#endif