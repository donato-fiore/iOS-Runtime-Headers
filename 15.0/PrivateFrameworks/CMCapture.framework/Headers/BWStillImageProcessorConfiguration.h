// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEPROCESSORCONFIGURATION_H
#define BWSTILLIMAGEPROCESSORCONFIGURATION_H

@class NSArray;
@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "BWInferenceScheduler.h"

@interface BWStillImageProcessorConfiguration : NSObject

@property (nonatomic) BOOL deferredProcessingEnabled; // ivar: _deferredProcessingEnabled
@property (nonatomic) unsigned int figThreadPriority; // ivar: _figThreadPriority
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler; // ivar: _inferenceScheduler
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (retain, nonatomic) NSArray *sensorConfigurations; // ivar: _sensorConfigurations


-(void)dealloc;


@end


#endif