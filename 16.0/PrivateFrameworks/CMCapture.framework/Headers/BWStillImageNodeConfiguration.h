// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGENODECONFIGURATION_H
#define BWSTILLIMAGENODECONFIGURATION_H

@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "BWInferenceScheduler.h"

@interface BWStillImageNodeConfiguration : NSObject

@property (nonatomic) int depthDataType; // ivar: _depthDataType
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler; // ivar: _inferenceScheduler
@property (nonatomic) int maxLossyCompressionLevel; // ivar: _maxLossyCompressionLevel
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (nonatomic) int pearlModuleType; // ivar: _pearlModuleType


-(void)dealloc;


@end


#endif