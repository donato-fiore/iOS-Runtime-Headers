// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKGLUTILITIES_H
#define DKGLUTILITIES_H


#import <Foundation/Foundation.h>


@interface DKGLUtilities : NSObject



+(BOOL)gpuAvailable;
+(BOOL)setCurrentGLContext:(id)arg0 ;
+(id)createPlatformGLContext;
+(id)createSharedGLContext;
+(id)pathForResource:(id)arg0 ofType:(id)arg1 ;
+(id)snapshotImageOfFrameBufferWithID:(unsigned int)arg0 bufferSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
+(unsigned int)compileShader:(id)arg0 ofType:(id)arg1 ;
+(void)_postGLActiveNotification;
+(void)_postGLInactiveNotification;
+(void)createFBO:(*unsigned int)arg0 depthRB:(*unsigned int)arg1 texture:(*unsigned int)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned int)arg5 ;
+(void)createRepeatableTexture:(*unsigned int)arg0 withImageName:(id)arg1 ofType:(id)arg2 ;
+(void)createSharedRepeatableTexture:(*unsigned int)arg0 withImageName:(id)arg1 ofType:(id)arg2 ;
+(void)createTexture:(*unsigned int)arg0 withImageName:(id)arg1 ofType:(id)arg2 ;
+(void)createVBO:(*unsigned int)arg0 size:(NSInteger)arg1 data:(*void)arg2 usage:(unsigned int)arg3 ;
+(void)deleteFBO:(*unsigned int)arg0 depthRB:(*unsigned int)arg1 texture:(*unsigned int)arg2 ;
+(void)deleteTexture:(*unsigned int)arg0 ;
+(void)deleteVBO:(*unsigned int)arg0 ;
+(void)drawQuadAtX:(float)arg0 Y:(float)arg1 width:(float)arg2 height:(float)arg3 ;
+(void)initialize;
+(void)setCurrentClearColor;
+(void)setProjectionMatrixForWidth:(float)arg0 height:(float)arg1 flipped:(BOOL)arg2 matrix:(struct ? *)arg3 ;
+(void)teardownSharedGLContext;
+(void)translateMatrix:(struct ? *)arg0 byX:(float)arg1 Y:(float)arg2 result:(struct ? *)arg3 ;


@end


#endif