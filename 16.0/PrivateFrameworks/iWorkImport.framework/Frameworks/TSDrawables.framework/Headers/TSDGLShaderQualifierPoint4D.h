// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLSHADERQUALIFIERPOINT4D_H
#define TSDGLSHADERQUALIFIERPOINT4D_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier

@property (readonly, nonatomic) ? GLPoint4DValue; // ivar: _GLPoint4DValue
@property (nonatomic) ? proposedGLPoint4DValue; // ivar: _proposedGLPoint4DValue


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif