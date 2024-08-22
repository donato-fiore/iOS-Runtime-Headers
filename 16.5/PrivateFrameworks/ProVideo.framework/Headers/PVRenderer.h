// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVRENDERER_H
#define PVRENDERER_H

@class NSDate;


#import "PVRendererBase.h"
#import "PVRenderEffectLoader.h"

@interface PVRenderer : PVRendererBase {
    *HGSynchronizable _cvPoolsLock;
    vector<HGRef<PVCVPixelBufferPool>, std::allocator<HGRef<PVCVPixelBufferPool>>> _cvPools;
    BOOL _enableDestinationPool;
    HGRef<HGCVPixelBufferPool> _destinationBufferPool;
    HGRef<PVRenderManager> _renderManager;
    PVRenderEffectLoader *_effectLoader;
    unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> _dateLock;
    NSDate *_lastStatsLogDateTime;
    NSDate *_lastTextureCacheFlushDate;
    unsigned int _destinationPixelFormat;
}




-(id)initWithOptions:(id)arg0 ;
-(struct ? )frameDuration;
-(struct HGRef<HGBitmap> )getDestinationBuffer:(struct CGSize )arg0 cvPixelBufferFormat:(unsigned int)arg1 ;
-(struct HGRef<HGCVPixelBuffer> )hgCVPixelBufferFromCVPoolForSize:(struct CGSize )arg0 withFormat:(unsigned int)arg1 ;
-(unsigned int)outputCVPixelBufferFormat;
-(void)_configureDefaultPoolPolicy;
-(void)_statsLogCheck;
-(void)cleanupMemoryCaches;
-(void)dealloc;
-(void)loadInstructionGraphEffects:(id)arg0 ;
-(void)renderJobFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)startRenderRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDestinationFormatForOutputColorSpace;


@end


#endif