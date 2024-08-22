// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMODELR2D2_H
#define VCPMODELR2D2_H

@class NSString, MPSImageBilinearScale;
@protocol MTLDeviceSPI, MTLCommandQueue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "VCPFlowFeatureExtractor.h"
#import "VCPCorrelation.h"
#import "VCPBackwarp.h"

@interface VCPModelR2D2 : NSObject {
    NSString *_resConfig;
    int _numLevels;
    int _startLevel;
    VCPFlowFeatureExtractor *_featureExtractor;
    VCPFlowDecoder" _flowDecoder;
    VCPCorrelation *_correlation;
    VCPBackwarp *_backwarp;
    ? _imageFeature;
    ? _storage;
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;
    MPSImageBilinearScale *_bilinearScale;
}


@property (readonly, nonatomic) int inputHeight; // ivar: _inputHeight
@property (readonly, nonatomic) int inputWidth; // ivar: _inputWidth


-(?)allocateCorreleationBufferforLevel;
-(id)initUsingLightweight:(BOOL)arg0 aspectRatio:(id)arg1 numLevels:(int)arg2 startLevel:(int)arg3 ;
-(int)allocateFeatures;
-(int)allocateStorages;
-(int)configForAspectRatio:(id)arg0 ;
-(int)createModules;
-(int)estimateFlowForLevel:(int)arg0 upperFlow:(struct __CVBuffer *)arg1 outputFlow:(struct __CVBuffer *)arg2 ;
-(int)estimateMotionFlow:(struct __CVBuffer *)arg0 ;
-(int)extractFeatureFromImage:(struct __CVBuffer *)arg0 toFeature:(struct ? *)arg1 ;
-(int)extractFeaturesFromFirst:(struct __CVBuffer *)arg0 andSecond:(struct __CVBuffer *)arg1 ;
-(int)preferredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;
-(int)scaleFlowTo:(struct __CVBuffer *)arg0 inFlow:(struct __CVBuffer *)arg1 ;
-(int)updateModelForAspectRatio:(id)arg0 ;
-(int)updateModulesWithConfig:(id)arg0 ;
-(void)releaseFeatureBuffers;
-(void)releaseMemory;
-(void)releaseStorages;


@end


#endif