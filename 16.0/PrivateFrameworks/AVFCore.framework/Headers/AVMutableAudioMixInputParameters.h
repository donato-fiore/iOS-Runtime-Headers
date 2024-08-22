// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUTABLEAUDIOMIXINPUTPARAMETERS_H
#define AVMUTABLEAUDIOMIXINPUTPARAMETERS_H

@class AVMutableAudioMixInputParametersInternal, NSString;


#import "AVAudioMixInputParameters.h"

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}


@property (retain, nonatomic) *opaqueMTAudioProcessingTap audioTapProcessor;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (nonatomic) int trackID;


+(id)audioMixInputParameters;
+(id)audioMixInputParametersWithAssetTrack:(id)arg0 introFadeDuration:(struct ? )arg1 fadeOutStart:(struct ? )arg2 fadeOutDuration:(struct ? )arg3 ;
+(id)audioMixInputParametersWithTrack:(id)arg0 ;
-(void)setVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 rampMode:(NSInteger)arg3 ;


@end


#endif