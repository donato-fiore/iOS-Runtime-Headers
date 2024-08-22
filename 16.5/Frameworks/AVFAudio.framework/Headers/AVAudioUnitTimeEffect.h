// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOUNITTIMEEFFECT_H
#define AVAUDIOUNITTIMEEFFECT_H



#import "AVAudioUnit.h"

@interface AVAudioUnitTimeEffect : AVAudioUnit

@property (nonatomic) BOOL bypass;


-(id)initWithAudioComponentDescription:(struct AudioComponentDescription )arg0 ;


@end


#endif