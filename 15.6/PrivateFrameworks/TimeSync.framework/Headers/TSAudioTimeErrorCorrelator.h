// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAUDIOTIMEERRORCORRELATOR_H
#define TSAUDIOTIMEERRORCORRELATOR_H


#import <Foundation/Foundation.h>


@interface TSAudioTimeErrorCorrelator : NSObject {
    NSInteger _maxCorrelationLength;
    NSInteger _upscaleFactor;
    CGFloat _samplingRate;
}


@property (copy, nonatomic) id *correlationBlock; // ivar: _correlationBlock


-(id)initWithMaxCorrelationLength:(NSInteger)arg0 andUpscaleFactor:(NSInteger)arg1 forSamplingRate:(CGFloat)arg2 ;
-(void)_calculateUpsamplerCoefficients:(**float)arg0 length:(*NSInteger)arg1 ;


@end


#endif