// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGLSHADERQUALIFIERMAT4_H
#define TSDGLSHADERQUALIFIERMAT4_H



#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier

@property (nonatomic) CATransform3D proposedTransform3D; // ivar: _proposedTransform3D
@property (readonly, nonatomic) CATransform3D transform3D; // ivar: _transform3D


-(id)description;
-(void)setGLUniformWithShader:(id)arg0 ;


@end


#endif