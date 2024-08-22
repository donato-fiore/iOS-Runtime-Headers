// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOZEROCOUNTER_H
#define CSAUDIOZEROCOUNTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSAudioZeroCounter : NSObject {
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _zeroCounterWinSzForReport;
    unsigned int _maxContinuousZeroCount;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}




-(id)initWithToken:(id)arg0 sampleRate:(float)arg1 numChannels:(unsigned int)arg2 ;
-(void)getZeroStatisticsFromBuffer:(id)arg0 entireSamples:(unsigned int)arg1 ;
-(void)resetWithSampleRate:(float)arg0 ;
-(void)stopCountingZeroStatisticsWithReporter:(id)arg0 ;


@end


#endif