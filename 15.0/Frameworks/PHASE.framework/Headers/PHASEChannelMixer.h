// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASECHANNELMIXER_H
#define PHASECHANNELMIXER_H

@class AVAudioChannelLayout;


#import "PHASEMixer.h"

@interface PHASEChannelMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // ivar: _inputChannelLayout


-(id)init;


@end


#endif