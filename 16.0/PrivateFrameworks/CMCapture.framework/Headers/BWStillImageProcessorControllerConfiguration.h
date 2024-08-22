// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEPROCESSORCONTROLLERCONFIGURATION_H
#define BWSTILLIMAGEPROCESSORCONTROLLERCONFIGURATION_H

@class NSDictionary;
@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "BWInferenceScheduler.h"

@interface BWStillImageProcessorControllerConfiguration : NSObject

@property (nonatomic) BOOL deferredProcessingEnabled; // ivar: _deferredProcessingEnabled
@property (nonatomic) unsigned int figThreadPriority; // ivar: _figThreadPriority
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler; // ivar: _inferenceScheduler
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType; // ivar: _sensorConfigurationsByPortType


-(void)dealloc;


@end


#endif