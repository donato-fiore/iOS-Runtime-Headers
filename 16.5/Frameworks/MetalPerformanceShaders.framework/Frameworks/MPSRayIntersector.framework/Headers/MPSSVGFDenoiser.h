// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSSVGFDENOISER_H
#define MPSSVGFDENOISER_H

@protocol MTLTexture, MPSSVGFTextureAllocator;

#import <Foundation/Foundation.h>

#import "MPSSVGF.h"

@interface MPSSVGFDenoiser : NSObject {
    id<MTLTexture> *_prevFrameCountTexture;
    id<MTLTexture> *_prevMomentsTexture;
    id<MTLTexture> *_prevMomentsTexture2;
    id<MTLTexture> *_prevTexture;
    id<MTLTexture> *_prevTexture2;
    NSUInteger _bilateralFilterIterations;
    BOOL _clear;
}


@property (nonatomic) NSUInteger bilateralFilterIterations;
@property (readonly, nonatomic) MPSSVGF *svgf; // ivar: _svgf
@property (readonly, nonatomic) NSObject<MPSSVGFTextureAllocator> *textureAllocator; // ivar: _textureAllocator


-(id)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 motionVectorTexture:(id)arg2 depthNormalTexture:(id)arg3 previousDepthNormalTexture:(id)arg4 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithSVGF:(id)arg0 textureAllocator:(id)arg1 ;
-(void)clearTemporalHistory;
-(void)dealloc;
-(void)encodeClearToCommandBuffer:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(*id)arg2 sourceTexture2:(id)arg3 destinationTexture2:(*id)arg4 motionVectorTexture:(id)arg5 depthNormalTexture:(id)arg6 previousDepthNormalTexture:(id)arg7 ;
-(void)releaseTemporaryTextures;


@end


#endif