// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVISIONINFERENCECONFIGURATION_H
#define BWVISIONINFERENCECONFIGURATION_H



#import "BWInferenceConfiguration.h"

@interface BWVisionInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) BOOL reuseUpstreamFaceObservations; // ivar: _reuseUpstreamFaceObservations
@property (copy, nonatomic) id *shouldPreventRequestForSampleBuffer; // ivar: _shouldPreventRequestForSampleBuffer


-(void)dealloc;


@end


#endif