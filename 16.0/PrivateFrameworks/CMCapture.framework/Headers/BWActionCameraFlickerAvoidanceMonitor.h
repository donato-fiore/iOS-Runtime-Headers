// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWACTIONCAMERAFLICKERAVOIDANCEMONITOR_H
#define BWACTIONCAMERAFLICKERAVOIDANCEMONITOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BWActionCameraFlickerAvoidanceMonitor : NSObject {
    int _frameRateCompatibleFlickerFrequency;
    int _confidenceThreshold;
    int _confidenceHysteresis;
    BOOL _frameRateAware;
    NSDictionary *_defaultMaxExposureDurationFrameworkOverrideByPortType;
}


@property (nonatomic) int flickerFrequency; // ivar: _flickerFrequency


+(void)initialize;
-(BOOL)detectFlickerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 fromCaptureStreamWithPortType:(id)arg1 ;
-(id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:(id)arg0 ;
-(void)dealloc;


@end


#endif