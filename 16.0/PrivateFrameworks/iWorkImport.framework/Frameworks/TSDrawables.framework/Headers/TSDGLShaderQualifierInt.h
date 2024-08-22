// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLSHADERQUALIFIERINT_H
#define TSDGLSHADERQUALIFIERINT_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier

@property (readonly, nonatomic) int GLintValue; // ivar: _GLintValue
@property (nonatomic) int proposedGLintValue; // ivar: _proposedGLintValue


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif