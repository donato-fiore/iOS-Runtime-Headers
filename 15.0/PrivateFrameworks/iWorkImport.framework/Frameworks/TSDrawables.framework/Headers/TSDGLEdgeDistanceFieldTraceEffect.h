// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLEDGEDISTANCEFIELDTRACEEFFECT_H
#define TSDGLEDGEDISTANCEFIELDTRACEEFFECT_H

@class NSArray;
@protocol TSDAnimationRandomGenerator;

#import <Foundation/Foundation.h>

#import "TSDGLTextureInfo.h"
#import "TSDGLShader.h"

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {
    BOOL _canDraw;
    BOOL _didTeardown;
    NSInteger _traceTextureMaxValue;
    CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
    NSArray *_strokeLineSegment;
    *__CFArray _zeroesArray;
    CGSize _bufferSize;
}


@property (readonly, nonatomic) TSDGLTextureInfo *edgeDistanceFieldTextureInfo; // ivar: _edgeDistanceFieldTextureInfo
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSObject<TSDAnimationRandomGenerator> *randomGenerator; // ivar: _randomGenerator
@property (readonly, nonatomic) CGPoint randomStrokePoint; // ivar: _randomStrokePoint
@property (readonly, nonatomic) TSDGLShader *shader; // ivar: _shader
@property (readonly, nonatomic) NSArray *strokeLineSegment;
@property (readonly, nonatomic) TSDGLTextureInfo *traceTextureInfo; // ivar: _traceTextureInfo


+(void)didEndUsingShaders;
+(void)willBeginUsingShaders;
-(BOOL)p_generateTraceTextureInfoWithStrokeWidth:(CGFloat)arg0 clockwise:(BOOL)arg1 randomGenerator:(id)arg2 ;
-(id)description;
-(id)initWithTR:(id)arg0 strokeWidth:(CGFloat)arg1 downsampleScale:(CGFloat)arg2 clockwise:(BOOL)arg3 GLState:(id)arg4 randomGenerator:(id)arg5 ;
-(id)p_houghTransformWithZeroes:(struct __CFArray *)arg0 bufferSize:(struct CGSize )arg1 ;
-(struct CGPoint )p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint )arg0 inBufferSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)p_addNearbyPixelsToArray:(struct __CFArray *)arg0 pixel:(struct CGPoint )arg1 edgeDataBuffer:(*float)arg2 dataBuffer:(char *)arg3 tempDataBuffer:(char *)arg4 localMaximumLookupBuffer:(*BOOL)arg5 bufferSize:(struct CGSize )arg6 ;
-(void)p_fillFloatBuffer:(*float)arg0 withRGBAData:(char *)arg1 bufferSize:(struct CGSize )arg2 ;
-(void)setupShaderWithPercent:(CGFloat)arg0 MVPMatrix:(struct CATransform3D )arg1 opacity:(CGFloat)arg2 color:(struct ? )arg3 strokeFadeHardnessLeading:(CGFloat)arg4 strokeFadeHardnessTrailing:(CGFloat)arg5 ;
-(void)teardown;


@end


#endif