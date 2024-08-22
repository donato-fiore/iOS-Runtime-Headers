// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOPOWERLEVELMONITOR_H
#define VCAUDIOPOWERLEVELMONITOR_H

@protocol VCAudioPowerLevelMonitorDelegate;

#import <Foundation/Foundation.h>


@interface VCAudioPowerLevelMonitor : NSObject {
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    BOOL isAudioPowerBelowThreshold;
    BOOL isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
}


@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate; // ivar: delegate


-(id)init;
-(void)detectRemoteAveragePowerLevel:(float)arg0 timestamp:(unsigned int)arg1 ;


@end


#endif