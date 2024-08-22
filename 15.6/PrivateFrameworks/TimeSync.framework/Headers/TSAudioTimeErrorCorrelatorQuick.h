// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAUDIOTIMEERRORCORRELATORQUICK_H
#define TSAUDIOTIMEERRORCORRELATORQUICK_H



#import "TSAudioTimeErrorCorrelator.h"

@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator {
    *float _channelABuffer;
    *float _scratchBuffer;
    *float _correlationBuffer;
    *float _interpollationIndiciesBuffer;
}




-(id)initWithMaxCorrelationLength:(NSInteger)arg0 andUpscaleFactor:(NSInteger)arg1 forSamplingRate:(CGFloat)arg2 ;
-(void)_makeBlock;
-(void)dealloc;


@end


#endif