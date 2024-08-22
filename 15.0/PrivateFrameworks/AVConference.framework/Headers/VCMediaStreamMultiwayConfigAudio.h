// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIASTREAMMULTIWAYCONFIGAUDIO_H
#define VCMEDIASTREAMMULTIWAYCONFIGAUDIO_H



#import "VCMediaStreamMultiwayConfig.h"
#import "VCAudioRuleCollection.h"

@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules; // ivar: _audioRules
@property (nonatomic) unsigned int preferredMediaBitrate; // ivar: _preferredMediaBitrate


-(void)dealloc;


@end


#endif