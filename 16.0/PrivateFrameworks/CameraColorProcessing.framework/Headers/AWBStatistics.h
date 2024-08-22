// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWBSTATISTICS_H
#define AWBSTATISTICS_H

@class FigMetalContext, NSNumber;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface AWBStatistics : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> *_computeAWBStatBayerPipelineState;
    id<MTLComputePipelineState> *_computeAWBStatBayerFastPipelineState;
    id<MTLComputePipelineState> *_computeAWBStatQuadraFastPipelineState;
    id<MTLComputePipelineState> *_computeAWBStatRGBPipelineState;
    id<MTLComputePipelineState> *_resetMtlBufferPipelineState;
    id<MTLComputePipelineState> *_normTileStatPipelineState;
    id<MTLComputePipelineState> *_normWindowStatPipelineState;
    ? _awbStatCfg;
}


@property (retain, nonatomic) NSNumber *digitalFlash; // ivar: _digitalFlash


-(id)initWithMetalContext:(id)arg0 ;
-(int)_adjustConfigToValidRect:(id)arg0 ;
-(int)_createShaders;
-(int)configWindowsV2:(struct ? *)arg0 metadata:(id)arg1 tilesConfig:(id)arg2 ;
-(int)configWithMetadata:(id)arg0 cameraInfo:(id)arg1 moduleConfig:(id)arg2 firstPixel:(int)arg3 layout:(int)arg4 ;
-(int)configWithRegs:(id)arg0 ;
-(int)configWithRegs:(id)arg0 metadata:(id)arg1 cameraInfo:(id)arg2 ;
-(int)configWithSetFile:(id)arg0 metadata:(id)arg1 cameraInfo:(id)arg2 ;
-(int)process:(id)arg0 clipped:(id)arg1 lscGainsTex:(id)arg2 validRect:(id)arg3 awbStatsBuffer:(id)arg4 awbTileStatsConfig:(struct ? *)arg5 downsizeFactor:(*unsigned int)arg6 ;


@end


#endif