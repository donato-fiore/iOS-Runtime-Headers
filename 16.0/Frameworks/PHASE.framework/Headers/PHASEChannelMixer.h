// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASECHANNELMIXER_H
#define PHASECHANNELMIXER_H

@class AVAudioChannelLayout;


#import "PHASEMixer.h"

@interface PHASEChannelMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // ivar: _inputChannelLayout


-(id)init;
-(id)initWithIdentifier:(id)arg0 inputChannelLayout:(id)arg1 ;


@end


#endif