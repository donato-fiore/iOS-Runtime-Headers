// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGEMOTIONFLOWANALYZER_H
#define VCPIMAGEMOTIONFLOWANALYZER_H

@class MPSImageBilinearScale, MPSImageSpatioTemporalGuidedFilter;
@protocol MTLDeviceSPI, MTLCommandQueue;


#import "VCPImageAnalyzer.h"

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {
    int _cnnInputHeight;
    int _cnnInputWidth;
    unsigned int _computationAccuracy;
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
}


@property (readonly, nonatomic) int cnnOutputHeight; // ivar: _cnnOutputHeight
@property (readonly, nonatomic) int cnnOutputWidth; // ivar: _cnnOutputWidth


+(id)analyzeWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2 forceCPU:(BOOL)arg3 sharedModel:(BOOL)arg4 flushModel:(BOOL)arg5 cancel:(id)arg6 ;
-(*float)getFlowWithHeight:(*int)arg0 andWidth:(*int)arg1 ;
-(id)init;
-(id)initWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2 forceCPU:(BOOL)arg3 sharedModel:(BOOL)arg4 flushModel:(BOOL)arg5 cancel:(id)arg6 ;
-(int)analyzeImages:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 cancel:(id)arg2 ;
-(int)combineBufferTo:(struct __CVBuffer *)arg0 flowX:(struct __CVBuffer *)arg1 flowY:(struct __CVBuffer *)arg2 ;
-(int)configForAspectRatio:(id)arg0 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 flowBufferY:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 scalerX:(float)arg1 scalerY:(float)arg2 ;
-(int)getFlowToBuffer:(struct __CVBuffer *)arg0 ;
-(int)guidedUpsampling:(struct __CVBuffer *)arg0 inBGRA:(struct __CVBuffer *)arg1 ;
-(int)preferredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;
-(int)prepareWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 flushModel:(BOOL)arg4 ;
-(int)prepareWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 numLevels:(int)arg2 startLevel:(int)arg3 cancel:(id)arg4 ;
-(int)reInitModel;
-(int)scaleFlowTo:(struct __CVBuffer *)arg0 ;
-(int)updateModelForAspectRatio:(id)arg0 computationAccuracy:(unsigned int)arg1 ;


@end


#endif