// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIORELAYIOCONTROLLERSETTINGS_H
#define VCAUDIORELAYIOCONTROLLERSETTINGS_H


#import <Foundation/Foundation.h>


@interface VCAudioRelayIOControllerSettings : NSObject {
    tagVCAudioFrameFormat _audioFormat;
    _VCRemoteCodecInfo _remoteCodecInfo;
}


@property (readonly, nonatomic) *tagVCAudioFrameFormat audioFormat;
@property (readonly, nonatomic) *_VCRemoteCodecInfo remoteCodecInfo;


-(id)initWithAudioFormat:(struct tagVCAudioFrameFormat *)arg0 remoteCodecInfo:(struct _VCRemoteCodecInfo *)arg1 ;


@end


#endif