// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLSHADERQUALIFIERMAT3_H
#define TSDGLSHADERQUALIFIERMAT3_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier

@property (readonly, nonatomic) CGAffineTransform affineTransform; // ivar: _affineTransform
@property (nonatomic) CGAffineTransform proposedAffineTransform; // ivar: _proposedAffineTransform


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif