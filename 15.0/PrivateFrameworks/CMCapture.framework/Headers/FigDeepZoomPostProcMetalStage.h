// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGDEEPZOOMPOSTPROCMETALSTAGE_H
#define FIGDEEPZOOMPOSTPROCMETALSTAGE_H

@class FigMetalContext;
@protocol MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>


@interface FigDeepZoomPostProcMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState>" _pipelineStates;
    id<MTLTexture> *_tileSourceLPLuma;
    id<MTLTexture> *_tileSourceLPChroma;
    id<MTLTexture> *_tileSourceLuma;
    id<MTLTexture> *_tileSourceChroma;
    id<MTLTexture> *_tileEnhancedLuma;
    id<MTLTexture> *_tileEnhancedChroma;
    id<MTLTexture> *_tileEnhancedLFLuma;
    id<MTLTexture> *_tileEnhancedLFChroma;
    id<MTLTexture> *_tileLuma1Flipped;
    id<MTLTexture> *_tileChroma1Flipped;
    id<MTLTexture> *_tileLumaTemp1;
    id<MTLTexture> *_tileChromaTemp1;
    id<MTLBuffer> *_lumaGainLUTBuffer;
    id<MTLTexture> *_tileOutputLuma;
    id<MTLTexture> *_tileOutputChroma;
    id<MTLTexture> *_tileResidual;
    ? _params;
    ? _controlParams;
    float _lumaGainLUT;
}




-(id)initWithMetalContext:(id)arg0 withTileConfiguration:(struct ? *)arg1 ;
-(int)_adjustLumaGainMap:(id)arg0 texLumaGainMap:(id)arg1 cmdEnc:(id)arg2 ;
-(int)_allocateResourcesTileWidth:(unsigned int)arg0 tileHeight:(unsigned int)arg1 ;
-(int)_applyGaussianFilterRowGather:(id)arg0 texOutput:(id)arg1 kernelSize:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 isLuma:(BOOL)arg5 cmdEnc:(id)arg6 ;
-(int)_applyGaussianFilterRowYUV420:(id)arg0 texInputChroma:(id)arg1 texOutputLuma:(id)arg2 texOutputChroma:(id)arg3 kernelSize:(unsigned int)arg4 width:(unsigned int)arg5 height:(unsigned int)arg6 cmdEnc:(id)arg7 ;
-(int)_assembleResidual:(id)arg0 sourceChroma:(id)arg1 sourceLPLuma:(id)arg2 sourceLPChroma:(id)arg3 residual:(id)arg4 enhancedLuma:(id)arg5 enhancedChroma:(id)arg6 cmdEnc:(id)arg7 ;
-(int)_compileShaders;
-(int)_computeDetailsGainMap:(id)arg0 texSourceDetailsChroma:(id)arg1 texEnhancedDetailsLuma:(id)arg2 texEnhancedDetailsChroma:(id)arg3 texGainMapLuma:(id)arg4 texGainMapChroma:(id)arg5 cmdEnc:(id)arg6 ;
-(int)_computeDetailsLumaChroma:(id)arg0 texChroma:(id)arg1 texLowFreqLuma:(id)arg2 texLowFreqChroma:(id)arg3 texDetailsLuma:(id)arg4 texDetailsChroma:(id)arg5 cmdEnc:(id)arg6 ;
-(int)_computeDetailsMaxYUV:(id)arg0 texDetailsChroma:(id)arg1 texDetailsMaxLuma:(id)arg2 texDetailsMaxChroma:(id)arg3 cmdEnc:(id)arg4 ;
-(int)_convertYUV444To420:(id)arg0 outputLuma:(id)arg1 outputChroma:(id)arg2 cmdEnc:(id)arg3 ;
-(int)_modulateStrength:(id)arg0 texEnhancedDetailsChroma:(id)arg1 texGainMapLuma:(id)arg2 texGainMapChroma:(id)arg3 texEnhancedLFLuma:(id)arg4 texEnhancedLFChroma:(id)arg5 texOutputLuma:(id)arg6 texOutputChroma:(id)arg7 cmdEnc:(id)arg8 ;
-(int)_removeLowFreqDiffYUV:(id)arg0 sourceChroma:(id)arg1 enhancedLuma:(id)arg2 enhancedChroma:(id)arg3 cmdEnc:(id)arg4 ;
-(int)configureLumaGainLUT:(struct ? *)arg0 ;
-(int)processTileFrom:(id)arg0 with:(id)arg1 to:(id)arg2 commandBuffer:(id)arg3 ;
-(void)_releaseBuffer;
-(void)dealloc;


@end


#endif