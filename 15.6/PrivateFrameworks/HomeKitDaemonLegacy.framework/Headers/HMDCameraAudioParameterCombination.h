// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAAUDIOPARAMETERCOMBINATION_H
#define HMDCAMERAAUDIOPARAMETERCOMBINATION_H

@class HMFObject, NSNumber;


#import "HMDBitRateSetting.h"
#import "HMDAudioCodecGroup.h"
#import "HMDAudioSampleRate.h"

@interface HMDCameraAudioParameterCombination : HMFObject

@property (readonly, nonatomic) HMDBitRateSetting *bitrateSetting; // ivar: _bitrateSetting
@property (readonly, nonatomic) HMDAudioCodecGroup *codecGroupType; // ivar: _codecGroupType
@property (readonly, nonatomic) NSNumber *maximumBitrate; // ivar: _maximumBitrate
@property (readonly, nonatomic) NSNumber *minimumBitrate; // ivar: _minimumBitrate
@property (readonly, nonatomic) NSNumber *rtcpInterval; // ivar: _rtcpInterval
@property (readonly, nonatomic) NSNumber *rtpPTime; // ivar: _rtpPTime
@property (readonly, nonatomic) HMDAudioSampleRate *sampleRate; // ivar: _sampleRate


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCodecGroup:(id)arg0 bitrateSetting:(id)arg1 sampleRate:(id)arg2 ;
-(id)initWithCodecGroup:(id)arg0 bitrateSetting:(id)arg1 sampleRate:(id)arg2 maximumBitrate:(id)arg3 minimumBitrate:(id)arg4 rtcpInterval:(id)arg5 rtpPtime:(id)arg6 ;


@end


#endif