// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKTEXTURELOADER_H
#define GLKTEXTURELOADER_H

@class EAGLContext, NSLock;

#import <Foundation/Foundation.h>


@interface GLKTextureLoader : NSObject

@property (retain) EAGLContext *glContext; // ivar: _glContext
@property (retain) NSLock *nsLock; // ivar: _nsLock
@property BOOL supportsASTC_LDR; // ivar: _supportsASTC_LDR
@property BOOL supportsETC2; // ivar: _supportsETC2


+(id)_textureWithTexture:(id)arg0 error:(*id)arg1 ;
+(id)_textureWithTextureTXR:(id)arg0 error:(*id)arg1 ;
+(id)commonCubeMapWithContentsOfFiles:(id)arg0 options:(id)arg1 error:(*id)arg2 lock:(id)arg3 glContext:(id)arg4 ;
+(id)commonCubeMapWithContentsOfURL:(id)arg0 options:(id)arg1 error:(*id)arg2 lock:(id)arg3 glContext:(id)arg4 ;
+(id)commonTextureWithCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 lock:(id)arg3 glContext:(id)arg4 ;
+(id)commonTextureWithContentsOfData:(id)arg0 options:(id)arg1 error:(*id)arg2 lock:(id)arg3 glContext:(id)arg4 ;
+(id)commonTextureWithContentsOfURL:(id)arg0 options:(id)arg1 error:(*id)arg2 lock:(id)arg3 glContext:(id)arg4 ;
+(id)commonTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 error:(*id)arg4 lock:(id)arg5 glContext:(id)arg6 ;
+(id)cubeMapWithContentsOfFile:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)cubeMapWithContentsOfFiles:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)cubeMapWithContentsOfURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)lockAndSwitchContext:(id)arg0 glContext:(id)arg1 ;
+(id)textureWithCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)textureWithContentsOfData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)textureWithContentsOfFile:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)textureWithContentsOfURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)textureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(void)unlockAndRestoreContext:(id)arg0 glContext:(id)arg1 ;
-(id)initWithSharegroup:(id)arg0 ;
-(void)cubeMapWithContentsOfFile:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)cubeMapWithContentsOfFiles:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)cubeMapWithContentsOfURL:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)textureWithCGImage:(struct CGImage *)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)textureWithContentsOfData:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)textureWithContentsOfFile:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)textureWithContentsOfURL:(id)arg0 options:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)textureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif