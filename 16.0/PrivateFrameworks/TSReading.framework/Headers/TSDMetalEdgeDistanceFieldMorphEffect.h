// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMETALEDGEDISTANCEFIELDMORPHEFFECT_H
#define TSDMETALEDGEDISTANCEFIELDMORPHEFFECT_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "TSDMetalTextureInfo.h"

@interface TSDMetalEdgeDistanceFieldMorphEffect : NSObject {
    BOOL _didTeardown;
    CGRect _outgoingTextBounds;
    CGRect _incomingTextBounds;
    ? _outgoingTextColor;
    ? _incomingTextColor;
    CGAffineTransform _outgoingTextureEdgeInsetsAdjustmentMatrix;
    CGAffineTransform _incomingTextureEdgeInsetsAdjustmentMatrix;
    ? _textureAdjustment;
    BOOL _didSetupTextureAdjustment;
    id<MTLDevice> *_metalDevice;
}


@property (readonly, nonatomic) TSDMetalTextureInfo *incomingTextureInfo; // ivar: _incomingTextureInfo
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize; // ivar: isTextStyleIdenticalExceptSize
@property (readonly, nonatomic) TSDMetalTextureInfo *outgoingTextureInfo; // ivar: _outgoingTextureInfo


+(void)didEndWithDevice:(id)arg0 ;
+(void)willBeginWithDevice:(id)arg0 pixelFormat:(NSUInteger)arg1 motionBlur:(BOOL)arg2 motionBlurIgnoreTextureOpacity:(BOOL)arg3 ;
-(BOOL)p_fillScanlineCenters:(struct CGPoint *)arg0 scanlineMinMaxZeroes:(struct CGPoint *)arg1 samples:(NSUInteger)arg2 fromTexture:(id)arg3 textureSize:(struct CGSize )arg4 ;
-(CGFloat)p_errorFromApplyingTextureAdjustment:(struct ? )arg0 toOutgoingScanlineCenters:(struct CGPoint *)arg1 outgoingScanlineZeroes:(struct CGPoint *)arg2 incomingScanlineCenters:(struct CGPoint *)arg3 incomingScanlineZeroes:(struct CGPoint *)arg4 samples:(NSUInteger)arg5 ;
-(CGFloat)p_errorFromApplyingTextureAdjustment:(struct ? )arg0 toOutgoingValue:(CGFloat)arg1 incomingValue:(CGFloat)arg2 sample:(NSUInteger)arg3 sampleCount:(NSUInteger)arg4 ;
-(id)initWithOutgoingTR:(id)arg0 incomingTR:(id)arg1 metalContext:(id)arg2 motionBlur:(BOOL)arg3 motionBlurIgnoreTextureOpacity:(BOOL)arg4 capabilities:(id)arg5 ;
-(id)initWithOutgoingTextureName:(id)arg0 outgoingTextureSize:(struct CGSize )arg1 outgoingTextBounds:(struct CGRect )arg2 outgoingColor:(struct ? )arg3 incomingTextureName:(id)arg4 incomingTextureSize:(struct CGSize )arg5 incomingTextBounds:(struct CGRect )arg6 incomingColor:(struct ? )arg7 metalContext:(id)arg8 motionBlur:(BOOL)arg9 motionBlurIgnoreTextureOpacity:(BOOL)arg10 capabilities:(id)arg11 ;
-(struct ? )textureMatchingTextureAdjustment;
-(struct CGAffineTransform )p_affineTransformWithTextureAdjustment:(struct ? )arg0 textureSize:(struct CGSize )arg1 ;
-(struct CGContext *)newContextFromTexture:(id)arg0 ;
-(struct CGRect )p_actualPixelBoundsOfTexturedRectangle:(id)arg0 ;
-(void)dealloc;
-(void)encodeWith:(id)arg0 morphPercent:(CGFloat)arg1 MVPMatrix:(struct CATransform3D )arg2 opacity:(CGFloat)arg3 generateTextureMatrices:(BOOL)arg4 ;
-(void)encodeWith:(id)arg0 morphPercent:(CGFloat)arg1 MVPMatrix:(struct CATransform3D )arg2 opacity:(CGFloat)arg3 outgoingTextureMatrix:(struct CGAffineTransform )arg4 incomingTextureMatrix:(struct CGAffineTransform )arg5 ;
-(void)setupIfNecessary;
-(void)teardown;


@end


#endif