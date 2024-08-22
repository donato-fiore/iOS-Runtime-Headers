// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLSHADERQUALIFIER_H
#define TSDGLSHADERQUALIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSDGLShaderQualifier : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) int uniformLocation; // ivar: _uniformLocation


-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)setGLUniformCheckWithShader:(id)arg0 ;
-(void)setGLUniformWithShader:(id)arg0 ;
-(void)updateUniformLocationWithShaderProgramObject:(int)arg0 ;


@end


#endif