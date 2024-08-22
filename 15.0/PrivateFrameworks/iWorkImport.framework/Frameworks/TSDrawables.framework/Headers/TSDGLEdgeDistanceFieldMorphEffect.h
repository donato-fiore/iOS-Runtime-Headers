// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLEDGEDISTANCEFIELDMORPHEFFECT_H
#define TSDGLEDGEDISTANCEFIELDMORPHEFFECT_H


#import <Foundation/Foundation.h>

#import "TSDGLTextureInfo.h"
#import "TSDGLShader.h"

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    BOOL _didTeardown;
    CGRect _outgoingTextBounds;
    CGRect _incomingTextBounds;
    ? _outgoingTextColor;
    ? _incomingTextColor;
    CGAffineTransform _outgoingTextureEdgeInsetsAdjustmentMatrix;
    CGAffineTransform _incomingTextureEdgeInsetsAdjustmentMatrix;
    ? _textureAdjustment;
    BOOL _didSetupTextureAdjustment;
}


@property (readonly, nonatomic) TSDGLTextureInfo *incomingTextureInfo; // ivar: _incomingTextureInfo
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize; // ivar: _isTextStyleIdenticalExceptSize
@property (readonly, nonatomic) TSDGLTextureInfo *outgoingTextureInfo; // ivar: _outgoingTextureInfo
@property (readonly, nonatomic) TSDGLShader *shader; // ivar: _shader


+(id)willBeginUsingShadersWithMotionBlur:(BOOL)arg0 motionBlurIgnoreTextureOpacity:(BOOL)arg1 ;
+(void)didEndUsingShaders;
-(BOOL)p_fillScanlineCenters:(struct CGPoint *)arg0 scanlineMinMaxZeroes:(struct CGPoint *)arg1 samples:(NSUInteger)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize )arg4 ;
-(CGFloat)p_errorFromApplyingTextureAdjustment:(struct ? )arg0 toOutgoingScanlineCenters:(struct CGPoint *)arg1 outgoingScanlineZeroes:(struct CGPoint *)arg2 incomingScanlineCenters:(struct CGPoint *)arg3 incomingScanlineZeroes:(struct CGPoint *)arg4 samples:(NSUInteger)arg5 ;
-(CGFloat)p_errorFromApplyingTextureAdjustment:(struct ? )arg0 toOutgoingValue:(CGFloat)arg1 incomingValue:(CGFloat)arg2 sample:(NSUInteger)arg3 sampleCount:(NSUInteger)arg4 ;
-(id)initWithOutgoingTR:(id)arg0 incomingTR:(id)arg1 GLState:(id)arg2 motionBlur:(BOOL)arg3 motionBlurIgnoreTextureOpacity:(BOOL)arg4 ;
-(id)initWithOutgoingTextureName:(unsigned int)arg0 outgoingTextureSize:(struct CGSize )arg1 outgoingTextBounds:(struct CGRect )arg2 outgoingColor:(struct ? )arg3 incomingTextureName:(unsigned int)arg4 incomingTextureSize:(struct CGSize )arg5 incomingTextBounds:(struct CGRect )arg6 incomingColor:(struct ? )arg7 GLState:(id)arg8 motionBlur:(BOOL)arg9 motionBlurIgnoreTextureOpacity:(BOOL)arg10 ;
-(struct ? )textureMatchingTextureAdjustment;
-(struct CGAffineTransform )p_affineTransformWithTextureAdjustment:(struct ? )arg0 textureSize:(struct CGSize )arg1 ;
-(struct CGContext *)newContextFromTexture:(id)arg0 ;
-(struct CGRect )p_actualPixelBoundsOfTexturedRectangle:(id)arg0 ;
-(void)dealloc;
-(void)setupIfNecessary;
-(void)setupShaderWithMorphPercent:(CGFloat)arg0 MVPMatrix:(struct CATransform3D )arg1 generateTextureMatrices:(BOOL)arg2 ;
-(void)setupShaderWithMorphPercent:(CGFloat)arg0 MVPMatrix:(struct CATransform3D )arg1 outgoingTextureMatrix:(struct CGAffineTransform )arg2 incomingTextureMatrix:(struct CGAffineTransform )arg3 ;
-(void)teardown;


@end


#endif