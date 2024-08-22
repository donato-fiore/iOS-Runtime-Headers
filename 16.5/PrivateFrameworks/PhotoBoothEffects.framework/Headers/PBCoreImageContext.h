// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBCOREIMAGECONTEXT_H
#define PBCOREIMAGECONTEXT_H

@class EAGLContext, CIContext;


#import "PBContext.h"

@interface PBCoreImageContext : PBContext {
    EAGLContext *_glesContext;
    *__CVOpenGLESTextureCache _textureCache;
    *__CVBuffer _inputTexture;
    *__CVBuffer _outputTexture;
    *__CVPixelBufferPool _smallPool;
    *__CVPixelBufferPool _largePool;
    CGSize _smallPoolSize;
    CGSize _largePoolSize;
    *_CAImageQueue _outputImageQueue;
    CIContext *_ciContext;
    *__CVBuffer _inputPixelBuffer;
    *__CVBuffer _outputPixelBuffer;
    BOOL _render9Up;
    BOOL _renderForSave;
    CGSize _outputSize;
}




-(?)_createPixelBufferwithSize;
-(BOOL)render9Up;
-(BOOL)renderForSave;
-(id)ciContext;
-(id)initWithOptions:(id)arg0 ;
-(struct CGSize )outputSize;
-(struct _CAImageQueue *)outputImageQueue;
-(struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;
-(struct __CVBuffer *)inputPixelBuffer;
-(struct __CVBuffer *)outputPixelBuffer;
-(struct __CVPixelBufferPool *)largePool;
-(struct __CVPixelBufferPool *)smallPool;
-(unsigned int)inputTexture;
-(unsigned int)outputTexture;
-(void)dealloc;
-(void)renderFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)renderFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;
-(void)renderNineUp:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)renderNineUp:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;
-(void)setInputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)setInputPixelBuffer:(struct __CVBuffer *)arg0 mapTexture:(BOOL)arg1 ;
-(void)setLargePool:(struct __CVPixelBufferPool *)arg0 ;
-(void)setOutputImageQueue:(struct _CAImageQueue *)arg0 ;
-(void)setOutputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)setOutputPixelBuffer:(struct __CVBuffer *)arg0 mapTexture:(BOOL)arg1 ;
-(void)setOutputSize:(struct CGSize )arg0 ;
-(void)setRender9Up:(BOOL)arg0 ;
-(void)setRenderForSave:(BOOL)arg0 ;
-(void)setSmallPool:(struct __CVPixelBufferPool *)arg0 ;


@end


#endif