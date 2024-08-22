// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOUNITEQ_H
#define AVAUDIOUNITEQ_H

@class NSArray;


#import "AVAudioUnitEffect.h"

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (readonly, nonatomic) NSArray *bands;
@property (nonatomic) float globalGain;


-(id)init;
-(id)initWithNumberOfBands:(NSUInteger)arg0 ;


@end


#endif