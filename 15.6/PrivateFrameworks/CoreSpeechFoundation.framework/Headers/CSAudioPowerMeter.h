// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOPOWERMETER_H
#define CSAUDIOPOWERMETER_H

@class CSAudioUnitMeterClipping;

#import <Foundation/Foundation.h>


@interface CSAudioPowerMeter : NSObject {
    int _averagePowerI;
    CGFloat _averagePowerF;
    BOOL _instantaneousMode;
    CGFloat _peak;
    CGFloat _maxPeak;
    CGFloat _decay;
    CGFloat _peakDecay;
    CGFloat _averagePowerPeak;
    int _peakHoldCount;
    CGFloat _sampleRate;
    int _previousBlockSize;
    CGFloat _decay1;
    CGFloat _peakDecay1;
    CSAudioUnitMeterClipping *_clipping;
}




-(CGFloat)_ampToDB:(CGFloat)arg0 ;
-(CGFloat)_linearToDB:(CGFloat)arg0 ;
-(CGFloat)getAveragePowerDB;
-(CGFloat)getPeakPowerDB;
-(id)initWithSampleRate:(float)arg0 ;
-(void)_reset;
-(void)_savePeaks:(int)arg0 averagePower:(int)arg1 maxSample:(int)arg2 ;
-(void)_scaleDecayConstants:(int)arg0 ;
-(void)_zapgremlins:(*CGFloat)arg0 ;
-(void)processFloatBuffer:(*float)arg0 stride:(int)arg1 inFrameToProcess:(int)arg2 ;
-(void)processShortBuffer:(*short)arg0 stride:(int)arg1 inFrameToProcess:(int)arg2 ;
-(void)reset;


@end


#endif