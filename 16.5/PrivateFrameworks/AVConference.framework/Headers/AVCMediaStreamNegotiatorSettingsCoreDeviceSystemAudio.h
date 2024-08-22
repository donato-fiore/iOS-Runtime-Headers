// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSCOREDEVICESYSTEMAUDIO_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSCOREDEVICESYSTEMAUDIO_H



#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsCoreDeviceSystemAudio : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
    NSInteger _accessNetworkType;
}




-(NSInteger)accessNetworkType;
-(NSInteger)audioStreamMode;
-(NSUInteger)preferredMediaBitRate;
-(NSUInteger)ptime;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;
-(int)preferredAudioCodec;


@end


#endif