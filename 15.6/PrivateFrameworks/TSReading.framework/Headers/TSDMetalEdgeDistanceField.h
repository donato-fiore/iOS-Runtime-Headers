// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMETALEDGEDISTANCEFIELD_H
#define TSDMETALEDGEDISTANCEFIELD_H

@class NSArray;
@protocol MTLTexture;

#import <Foundation/Foundation.h>

#import "TSDMetalContext.h"

@interface TSDMetalEdgeDistanceField : NSObject {
    TSDMetalContext *_metalContext;
    CGSize _textureSize;
    CGSize _resultTextureSize;
    CGSize _squareSize;
    UIEdgeInsets _edgeInsets;
    CGFloat _downsampleScale;
    id<MTLTexture> *_inputTexture;
    NSArray *_exteriorTextures;
    NSArray *_interiorTextures;
    id<MTLTexture> *_combineTexture;
    id<MTLTexture> *_combineByteTexture;
    id<MTLTexture> *_resultTexture;
}




+(id)distanceFieldTextureWithTexture:(id)arg0 textureSize:(struct CGSize )arg1 maxDistance:(NSInteger)arg2 edgeInsets:(struct UIEdgeInsets )arg3 downsampleScale:(CGFloat)arg4 floatTexture:(BOOL)arg5 makeCPUReadable:(BOOL)arg6 metalContext:(id)arg7 capabilities:(id)arg8 ;
+(void)didEndWithDevice:(id)arg0 ;
+(void)willBeginWithDevice:(id)arg0 ;
-(NSUInteger)p_floodTextures:(id)arg0 currentIndex:(NSUInteger)arg1 maxDistance:(NSInteger)arg2 commandBuffer:(id)arg3 ;
-(id)initWithTexture:(id)arg0 textureSize:(struct CGSize )arg1 edgeInsets:(struct UIEdgeInsets )arg2 downsampleScale:(CGFloat)arg3 metalContext:(id)arg4 capabilities:(id)arg5 ;
-(id)p_combinedTexturesWithIndex:(NSUInteger)arg0 floatTexture:(BOOL)arg1 commandBuffer:(id)arg2 ;
-(id)p_gradientTextureWithCommandBuffer:(id)arg0 ;
-(void)p_dispatchThreadgroupsWithEncoder:(id)arg0 pipelineState:(id)arg1 texture:(id)arg2 ;
-(void)p_seedWithCommandBuffer:(id)arg0 fromTexture:(id)arg1 toTexture:(id)arg2 invertSeed:(BOOL)arg3 ;
-(void)p_setupTextures;
-(void)p_writeWithCommandBuffer:(id)arg0 intoSquareTexture:(id)arg1 ;


@end


#endif