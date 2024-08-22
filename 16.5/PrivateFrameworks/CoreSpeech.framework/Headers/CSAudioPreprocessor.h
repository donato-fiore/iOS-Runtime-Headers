// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOPREPROCESSOR_H
#define CSAUDIOPREPROCESSOR_H

@class CSBeepCanceller, NSString, CSAudioZeroCounter;
@protocol CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate, CSAudioPreprocessorDelegate;

#import <Foundation/Foundation.h>

#import "CSAudioSampleRateConverter.h"
#import "CSVoiceTriggerAwareZeroFilter.h"

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate>



@property (retain, nonatomic) CSBeepCanceller *beepCanceller; // ivar: _beepCanceller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAudioPreprocessorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int numChannels; // ivar: _numChannels
@property (nonatomic) float sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;
@property (retain, nonatomic) CSAudioSampleRateConverter *upsampler; // ivar: _upsampler
@property (retain, nonatomic) CSAudioZeroCounter *zeroCounter; // ivar: _zeroCounter
@property (retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter; // ivar: _zeroFilter


-(BOOL)_isNarrowBand:(float)arg0 ;
-(id)_fetchCurrentMetrics;
-(id)initWithSampleRate:(float)arg0 withNumberOfChannels:(int)arg1 ;
-(void)_reportMetrics;
-(void)beepCancellerDidCancelSamples:(id)arg0 buffer:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(void)flush;
-(void)processBuffer:(id)arg0 atTime:(NSUInteger)arg1 arrivalTimestampToAudioRecorder:(NSUInteger)arg2 ;
-(void)reportMetricsForSiriRequestWithUUID:(id)arg0 ;
-(void)resetWithSampleRate:(float)arg0 containsVoiceTrigger:(BOOL)arg1 voiceTriggerInfo:(id)arg2 ;
-(void)willBeepWithRecordRoute:(id)arg0 playbackRoute:(id)arg1 ;
-(void)zeroFilter:(id)arg0 zeroFilteredBufferAvailable:(id)arg1 atHostTime:(NSUInteger)arg2 ;


@end


#endif