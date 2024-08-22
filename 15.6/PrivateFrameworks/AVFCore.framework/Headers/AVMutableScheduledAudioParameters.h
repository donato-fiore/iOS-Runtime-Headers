// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLESCHEDULEDAUDIOPARAMETERS_H
#define AVMUTABLESCHEDULEDAUDIOPARAMETERS_H

@class AVMutableScheduledAudioParametersInternal;


#import "AVScheduledAudioParameters.h"

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters {
    AVMutableScheduledAudioParametersInternal *_mutableScheduledParametersInternal;
}




+(id)scheduledAudioParameters;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 rampMode:(NSInteger)arg3 ;


@end


#endif