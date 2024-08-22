// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMETALEDGEDISTANCEFIELDTRACEEFFECT_H
#define TSDMETALEDGEDISTANCEFIELDTRACEEFFECT_H

@class NSArray;
@protocol TSDAnimationRandomGenerator;

#import <Foundation/Foundation.h>

#import "TSDMetalTextureInfo.h"
#import "TSDMetalShader.h"

@interface TSDMetalEdgeDistanceFieldTraceEffect : NSObject {
    BOOL _canDraw;
    BOOL _didTeardown;
    NSInteger _traceTextureMaxValue;
    CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
    *__CFArray _zeroesArray;
    CGSize _bufferSize;
    CGRect _viewportRect;
    ? _vertexUniforms;
    ? _fragmentUniforms;
}


@property (readonly, nonatomic) TSDMetalTextureInfo *edgeDistanceFieldTextureInfo; // ivar: _edgeDistanceFieldTextureInfo
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSObject<TSDAnimationRandomGenerator> *randomGenerator; // ivar: _randomGenerator
@property (readonly, nonatomic) CGPoint randomStrokePoint; // ivar: _randomStrokePoint
@property (readonly, nonatomic) TSDMetalShader *shader; // ivar: _shader
@property (readonly, nonatomic) NSArray *strokeLineSegment; // ivar: _strokeLineSegment
@property (readonly, nonatomic) TSDMetalTextureInfo *traceTextureInfo; // ivar: _traceTextureInfo


+(void)didEndWithDevice:(id)arg0 ;
+(void)willBeginWithDevice:(id)arg0 ;
-(BOOL)p_generateTraceTextureInfoWithStrokeWidth:(CGFloat)arg0 clockwise:(BOOL)arg1 context:(id)arg2 randomGenerator:(id)arg3 ;
-(id)description;
-(id)initWithTR:(id)arg0 strokeWidth:(CGFloat)arg1 downsampleScale:(CGFloat)arg2 clockwise:(BOOL)arg3 context:(id)arg4 randomGenerator:(id)arg5 capabilities:(id)arg6 ;
-(id)p_houghTransformWithZeroes:(struct __CFArray *)arg0 bufferSize:(struct CGSize )arg1 ;
-(struct CGPoint )p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint )arg0 inBufferSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)drawWithContext:(id)arg0 andBuffer:(id)arg1 atPercent:(CGFloat)arg2 MVPMatrix:(struct CATransform3D )arg3 opacity:(CGFloat)arg4 color:(struct ? )arg5 strokeFadeHardnessLeading:(CGFloat)arg6 strokeFadeHardnessTrailing:(CGFloat)arg7 ;
-(void)p_addNearbyPixelsToArray:(struct __CFArray *)arg0 pixel:(struct CGPoint )arg1 edgeDataBuffer:(*float)arg2 dataBuffer:(char *)arg3 tempDataBuffer:(char *)arg4 localMaximumLookupBuffer:(*BOOL)arg5 bufferSize:(struct CGSize )arg6 ;
-(void)p_fillFloatBuffer:(*float)arg0 withRGBAData:(char *)arg1 bufferSize:(struct CGSize )arg2 ;
-(void)teardown;


@end


#endif