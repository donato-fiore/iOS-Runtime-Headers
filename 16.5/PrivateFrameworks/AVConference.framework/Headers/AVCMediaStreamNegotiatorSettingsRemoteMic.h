// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSREMOTEMIC_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSREMOTEMIC_H



#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings



-(NSInteger)audioStreamMode;
-(NSUInteger)ptime;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;
-(int)preferredAudioCodec;


@end


#endif