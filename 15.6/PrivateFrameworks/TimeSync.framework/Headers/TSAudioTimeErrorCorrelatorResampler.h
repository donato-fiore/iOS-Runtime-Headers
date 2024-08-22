// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAUDIOTIMEERRORCORRELATORRESAMPLER_H
#define TSAUDIOTIMEERRORCORRELATORRESAMPLER_H



#import "TSAudioTimeErrorCorrelator.h"

@interface TSAudioTimeErrorCorrelatorResampler : TSAudioTimeErrorCorrelator {
    *float _scratchBuffer;
    *float _channelABuffer;
    *float _channelBBuffer;
    *float _correlationBuffer;
    *float _upsamplerFilterCoefficientsBuffer;
    NSInteger _upsamplerFilterCoefficientsLength;
}




-(id)initWithMaxCorrelationLength:(NSInteger)arg0 andUpscaleFactor:(NSInteger)arg1 forSamplingRate:(CGFloat)arg2 ;
-(void)_makeBlock;
-(void)dealloc;


@end


#endif