// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOPOWERSPECTRUMBIN_H
#define VCAUDIOPOWERSPECTRUMBIN_H


#import <Foundation/Foundation.h>


@interface VCAudioPowerSpectrumBin : NSObject

@property (nonatomic) _VCRange frequencyRange; // ivar: _frequencyRange
@property (nonatomic) float powerLevel; // ivar: _powerLevel


-(id)description;
-(id)initWithFrequencyRange:(struct _VCRange )arg0 ;


@end


#endif