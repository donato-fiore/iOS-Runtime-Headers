// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PANORAMASTITCHINGSTAGE_H
#define PANORAMASTITCHINGSTAGE_H

@class FigMetalContext, NSDictionary, NSString;
@protocol MetalImageBufferProcessor, MTLTexture, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PanoramaStitchingShaders.h"

@interface PanoramaStitchingStage : NSObject <MetalImageBufferProcessor>

 {
    FigMetalContext *_metal;
    PanoramaStitchingShaders *_shaders;
    id<MTLTexture> *_seamStagingLuma;
    id<MTLTexture> *_seamStagingChroma;
    id<MTLTexture> *_seamStagingLumaDst;
    id<MTLTexture> *_seamStagingChromaDst;
    id<MTLTexture> *_prevLuma;
    id<MTLTexture> *_prevChroma;
    id<MTLTexture> *_seamCost;
    int _direction;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isReadyToProcess; // ivar: _isReadyToProcess
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: metalCommandQueue
@property (retain, nonatomic) NSObject<MTLTexture> *motionMask; // ivar: _motionMask
@property (readonly, nonatomic) CGRect roi; // ivar: _roi
@property (readonly, nonatomic) NSObject<MTLTexture> *stitchingMask; // ivar: _stitchingMask
@property (nonatomic) int stitchingMode; // ivar: _stitchingMode
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters


-(id)initWithContext:(id)arg0 ;
-(int)_centralStitchAddSlice:(struct __CVBuffer *)arg0 sliceHomography:(struct ? )arg1 sliceType:(int)arg2 ;
-(int)_seamStitchAddSlice:(struct __CVBuffer *)arg0 sliceHomography:(struct ? )arg1 sliceType:(int)arg2 ;
-(int)addSlice:(struct __CVBuffer *)arg0 sliceHomography:(struct ? )arg1 sliceType:(int)arg2 ;
-(int)finishProcessing;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prepareToProcessSliceWidth:(NSUInteger)arg0 sliceHeight:(NSUInteger)arg1 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setDirection:(int)arg0 ;
-(int)setup;


@end


#endif