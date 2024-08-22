// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEAUDIOMIX_H
#define AVMUTABLEAUDIOMIX_H

@class AVMutableAudioMixInternal, NSArray;


#import "AVAudioMix.h"

@interface AVMutableAudioMix : AVAudioMix {
    AVMutableAudioMixInternal *_mutableAudioMix;
}


@property (copy, nonatomic) NSArray *inputParameters;


+(id)audioMix;


@end


#endif