// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOMIXINPUTPARAMETERS_H
#define AVAUDIOMIXINPUTPARAMETERS_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVAudioMixInputParametersInternal.h"

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying>

 {
    AVAudioMixInputParametersInternal *_inputParameters;
}


@property (readonly, retain, nonatomic) *opaqueMTAudioProcessingTap audioTapProcessor;
@property (readonly, copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, nonatomic) int trackID;


-(BOOL)getVolumeRampForTime:(struct ? )arg0 startVolume:(*float)arg1 endVolume:(*float)arg2 timeRange:(struct ? *)arg3 ;
-(BOOL)getVolumeRampForTime:(struct ? )arg0 startVolume:(*float)arg1 endVolume:(*float)arg2 timeRange:(struct ? *)arg3 rampMode:(*NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectParameters;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setScheduledAudioParameters:(id)arg0 ;
-(void)_setVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(void)_setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 rampMode:(NSInteger)arg3 ;
-(void)dealloc;
-(void)setEffectParameters:(id)arg0 ;
-(void)setVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 rampMode:(NSInteger)arg3 ;


@end


#endif