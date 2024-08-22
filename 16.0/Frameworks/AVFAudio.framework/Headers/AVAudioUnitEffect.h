// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOUNITEFFECT_H
#define AVAUDIOUNITEFFECT_H



#import "AVAudioUnit.h"

@interface AVAudioUnitEffect : AVAudioUnit

@property (nonatomic) BOOL bypass;


-(id)initWithAudioComponentDescription:(struct AudioComponentDescription )arg0 ;


@end


#endif