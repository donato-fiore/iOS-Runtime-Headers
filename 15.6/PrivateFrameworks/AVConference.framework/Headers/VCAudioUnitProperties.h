// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOUNITPROPERTIES_H
#define VCAUDIOUNITPROPERTIES_H


#import <Foundation/Foundation.h>

#import "VCAudioUnitSpatialContext.h"

@interface VCAudioUnitProperties : NSObject {
    tagVCAudioFrameFormat _frameFormatMic;
    tagVCAudioFrameFormat _frameFormatSpeaker;
    VoiceIOFarEndVersionInfo _farEndVersionInfo;
}


@property (nonatomic) BOOL allowAudioRecording; // ivar: _allowAudioRecording
@property (nonatomic) unsigned int audioSessionId; // ivar: _audioSessionId
@property (nonatomic) unsigned int audioUnitType; // ivar: _audioUnitType
@property (nonatomic) int deviceRole; // ivar: _deviceRole
@property (nonatomic) BOOL enableDNNVAD; // ivar: _enableDNNVAD
@property (nonatomic) VoiceIOFarEndVersionInfo farEndVersionInfo;
@property (readonly, nonatomic) *tagVCAudioFrameFormat frameFormatMic;
@property (readonly, nonatomic) *tagVCAudioFrameFormat frameFormatSpeaker;
@property (readonly, nonatomic) BOOL isFarEndVersionInfoValid; // ivar: _isFarEndVersionInfoValid
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (nonatomic) CGFloat remoteCodecSampleRate; // ivar: _remoteCodecSampleRate
@property (nonatomic) unsigned int remoteCodecType; // ivar: _remoteCodecType
@property (retain, nonatomic) VCAudioUnitSpatialContext *spatialContext; // ivar: _spatialContext
@property (nonatomic) BOOL vpEnableSpatialChat; // ivar: _vpEnableSpatialChat
@property (nonatomic) unsigned int vpOperatingMode; // ivar: _vpOperatingMode


-(id)description;
-(void)dealloc;


@end


#endif