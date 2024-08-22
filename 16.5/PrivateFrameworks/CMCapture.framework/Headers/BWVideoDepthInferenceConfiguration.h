// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEODEPTHINFERENCECONFIGURATION_H
#define BWVIDEODEPTHINFERENCECONFIGURATION_H

@class NSString;
@protocol MTLEvent;


#import "BWInferenceConfiguration.h"

@interface BWVideoDepthInferenceConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) NSObject<MTLEvent> *backpressureEvent; // ivar: _backpressureEvent
@property (readonly, nonatomic) NSUInteger concurrencyWidth; // ivar: _concurrencyWidth
@property (readonly, nonatomic) ? featuresDimensions; // ivar: _featuresDimensions
@property (readonly, nonatomic) unsigned int featuresPixelFormat; // ivar: _featuresPixelFormat
@property (readonly, nonatomic) ? inputDimensions; // ivar: _inputDimensions
@property (readonly, nonatomic) float networkBias; // ivar: _networkBias
@property (readonly, nonatomic) ? outputDimensions; // ivar: _outputDimensions
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) BOOL requiresAppleDepthPostProcessing; // ivar: _requiresAppleDepthPostProcessing
@property (readonly, nonatomic) unsigned int temporalDepthInputPixelFormat; // ivar: _temporalDepthInputPixelFormat
@property (readonly, nonatomic) int videoDepthAlgorithm; // ivar: _videoDepthAlgorithm
@property (readonly, nonatomic) int videoDepthLayout; // ivar: _videoDepthLayout


-(id)initWithConcurrencyWidth:(NSUInteger)arg0 videoDepthLayout:(int)arg1 captureDevice:(id)arg2 backpressureEvent:(id)arg3 ;
-(id)initWithConcurrencyWidth:(NSUInteger)arg0 videoDepthLayout:(int)arg1 captureDevice:(id)arg2 overrideOutputDimensions:(struct ? )arg3 backpressureEvent:(id)arg4 ;
-(void)dealloc;


@end


#endif