// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSCHEDULEDAUDIOPARAMETERS_H
#define AVSCHEDULEDAUDIOPARAMETERS_H

@class NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVScheduledAudioParametersInternal.h"

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying>

 {
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}


@property (copy, nonatomic, getter=_ramps, setter=_setRamps:) NSArray *ramps;


-(BOOL)getVolumeRampForTime:(struct ? )arg0 startVolume:(*float)arg1 endVolume:(*float)arg2 timeRange:(struct ? *)arg3 ;
-(BOOL)getVolumeRampForTime:(struct ? )arg0 startVolume:(*float)arg1 endVolume:(*float)arg2 timeRange:(struct ? *)arg3 rampMode:(*NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 rampMode:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif