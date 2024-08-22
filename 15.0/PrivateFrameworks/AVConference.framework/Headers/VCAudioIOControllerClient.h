// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOIOCONTROLLERCLIENT_H
#define VCAUDIOIOCONTROLLERCLIENT_H

@protocol VCAudioIOControllerDelegate;

#import <Foundation/Foundation.h>


@interface VCAudioIOControllerClient : NSObject {
    id *_delegate;
    tagVCAudioFrameFormat _clientFormat;
    tagVCAudioFrameFormat _controllerFormat;
    ? _sinkIO;
    ? _sourceIO;
}


@property (nonatomic) BOOL allowAudioRecording; // ivar: _allowAudioRecording
@property (readonly, nonatomic) unsigned int audioSessionId; // ivar: _audioSessionId
@property (readonly, nonatomic) unsigned int channelIndex; // ivar: _channelIndex
@property (readonly, nonatomic) *tagVCAudioFrameFormat clientFormat;
@property (readonly, nonatomic) int clientPid; // ivar: _clientPid
@property (nonatomic) *tagVCAudioFrameFormat controllerFormat;
@property (readonly, nonatomic) NSObject<VCAudioIOControllerDelegate> *delegate;
@property (nonatomic) int deviceRole; // ivar: _deviceRole
@property (nonatomic) unsigned char direction; // ivar: _direction
@property (readonly, nonatomic) VoiceIOFarEndVersionInfo farEndVersionInfo; // ivar: _farEndVersionInfo
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled; // ivar: _isInputMeteringEnabled
@property (readonly, nonatomic) BOOL isPrewarmingClient; // ivar: _isPrewarmingClient
@property (readonly, nonatomic) BOOL isRemoteCodecInfoValid; // ivar: _isRemoteCodecInfoValid
@property (readonly, nonatomic) BOOL isRemoteVersionInfoValid; // ivar: _isRemoteVersionInfoValid
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (nonatomic, getter=isOuputMeteringEnabled) BOOL outputMeteringEnabled; // ivar: _isOutputMeteringEnabled
@property (readonly, nonatomic) CGFloat remoteCodecSampleRate; // ivar: _remoteCodecSampleRate
@property (readonly, nonatomic) unsigned int remoteCodecType; // ivar: _remoteCodecType
@property ? sinkIO;
@property ? sourceIO;
@property (nonatomic) BOOL spatialAudioDisabled; // ivar: _spatialAudioDisabled
@property (readonly, nonatomic) NSUInteger spatialToken; // ivar: _spatialToken


-(id)initWithDelegate:(id)arg0 audioSessionId:(unsigned int)arg1 channelIndex:(unsigned int)arg2 sourceContext:(*void)arg3 sourceProcess:(*unk)arg4 sinkContext:(*void)arg5 sinkProcess:(*unk)arg6 clientPid:(int)arg7 isPrewarmingClient:(BOOL)arg8 spatialToken:(NSUInteger)arg9 ;


@end


#endif