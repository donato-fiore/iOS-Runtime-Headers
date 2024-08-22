// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMODELR2D2_H
#define VCPMODELR2D2_H

@class NSString;
@protocol OS_dispatch_semaphore;


#import "VCPImageMotionFlowAnalyzer.h"
#import "VCPFlowFeatureExtractor.h"
#import "VCPCorrelation.h"
#import "VCPBackwarp.h"

@interface VCPModelR2D2 : VCPImageMotionFlowAnalyzer {
    NSString *_resConfig;
    int _numLevels;
    int _startLevel;
    *__CVBuffer _firstBuffer;
    *__CVBuffer _secondBuffer;
    *__CVBuffer _outputFlow;
    VCPFlowFeatureExtractor *_featureExtractor;
    VCPFlowDecoder" _flowDecoder;
    VCPCorrelation *_correlation;
    VCPBackwarp *_backwarp;
    ? _imageFeature;
    ? _storage;
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;
}




-(?)allocateCorreleationBufferforLevel;
-(int)allocateFeatures;
-(int)allocateInputAndOutputBuffers;
-(int)allocateStorages;
-(int)analyzeImages:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 cancel:(id)arg2 ;
-(int)configForAspectRatio:(id)arg0 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toBuffer:(struct __CVBuffer *)arg1 withChannels:(int)arg2 ;
-(int)createInput:(struct __CVBuffer *)arg0 withImage:(struct __CVBuffer *)arg1 modelInputHeight:(int)arg2 modelInputWidth:(int)arg3 ;
-(int)createModules:(id)arg0 ;
-(int)estimateFlowForLevel:(int)arg0 upperFlow:(struct __CVBuffer *)arg1 outputFlow:(struct __CVBuffer *)arg2 ;
-(int)estimateMotionFlow:(struct __CVBuffer *)arg0 ;
-(int)extractFeatureFromImage:(struct __CVBuffer *)arg0 toFeature:(struct ? *)arg1 ;
-(int)extractFeaturesFromFirst:(struct __CVBuffer *)arg0 andSecond:(struct __CVBuffer *)arg1 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 flowBufferY:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 scalerX:(float)arg1 scalerY:(float)arg2 ;
-(int)getFlowToBuffer:(struct __CVBuffer *)arg0 ;
-(int)prepareWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 numLevels:(int)arg2 startLevel:(int)arg3 cancel:(id)arg4 ;
-(int)releaseInputAndOutputBuffers;
-(int)updateModelForAspectRatio:(id)arg0 computationAccuracy:(unsigned int)arg1 ;
-(int)updateModulesWithConfig:(id)arg0 ;
-(void)dealloc;
-(void)releaseFeatureBuffers;
-(void)releaseMemory;
-(void)releaseStorages;


@end


#endif