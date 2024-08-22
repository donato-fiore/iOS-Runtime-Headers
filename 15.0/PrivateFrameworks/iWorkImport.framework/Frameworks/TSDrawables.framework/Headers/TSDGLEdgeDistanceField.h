// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLEDGEDISTANCEFIELD_H
#define TSDGLEDGEDISTANCEFIELD_H

@class TSDGLState;
@protocol TSDGLDataBuffer;

#import <Foundation/Foundation.h>

#import "TSDGLFrameBuffer.h"

@interface TSDGLEdgeDistanceField : NSObject {
    unsigned int _inputTexture;
    CGSize _textureSize;
    CGSize _resultTextureSize;
    CGSize _squareSize;
    UIEdgeInsets _edgeInsets;
    CGFloat _downsampleScale;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    id<TSDGLDataBuffer> *_origDataBuffer;
    id<TSDGLDataBuffer> *_rectDataBuffer;
    id<TSDGLDataBuffer> *_squareDataBuffer;
    TSDGLState *_GLState;
    int _oldViewport;
}




+(id)distanceFieldTextureWithTexture:(unsigned int)arg0 textureSize:(struct CGSize )arg1 maxDistance:(NSInteger)arg2 edgeInsets:(struct UIEdgeInsets )arg3 downsampleScale:(CGFloat)arg4 floatTexture:(BOOL)arg5 GLState:(id)arg6 ;
+(void)didEndUsingShaders;
+(void)willBeginUsingShaders;
-(id)initWithTexture:(unsigned int)arg0 textureSize:(struct CGSize )arg1 edgeInsets:(struct UIEdgeInsets )arg2 downsampleScale:(CGFloat)arg3 GLState:(id)arg4 ;
-(unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg0 floatTexture:(BOOL)arg1 ;
-(unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg0 withCurrentGLFramebuffer:(int)arg1 ;
-(void)dealloc;
-(void)p_floodTextureInFramebuffer:(id)arg0 maxDistance:(NSInteger)arg1 ;
-(void)p_seedTextureFromTexture:(unsigned int)arg0 invertSeed:(BOOL)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)p_writeIntoSquareTexture;
-(void)teardown;


@end


#endif