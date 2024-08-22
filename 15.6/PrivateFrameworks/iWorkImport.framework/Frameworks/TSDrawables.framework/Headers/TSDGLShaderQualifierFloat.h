// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGLSHADERQUALIFIERFLOAT_H
#define TSDGLSHADERQUALIFIERFLOAT_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier

@property (readonly, nonatomic) float GLfloatValue; // ivar: _GLfloatValue
@property (nonatomic) float proposedGLfloatValue; // ivar: _proposedGLfloatValue


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif