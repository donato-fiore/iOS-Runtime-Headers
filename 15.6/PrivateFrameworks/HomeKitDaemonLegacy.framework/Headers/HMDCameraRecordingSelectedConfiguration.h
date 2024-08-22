// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSELECTEDCONFIGURATION_H
#define HMDCAMERARECORDINGSELECTEDCONFIGURATION_H

@class HAPTLVBase;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDCameraRecordingAudioCodecConfiguration.h"
#import "HMDCameraRecordingGeneralConfiguration.h"
#import "HMDCameraRecordingVideoCodecConfiguration.h"

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration; // ivar: _audioConfiguration
@property (readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration; // ivar: _generalConfiguration
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration; // ivar: _videoConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeneralConfiguration:(id)arg0 videoCodecConfiguration:(id)arg1 audioCodecConfiguration:(id)arg2 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif