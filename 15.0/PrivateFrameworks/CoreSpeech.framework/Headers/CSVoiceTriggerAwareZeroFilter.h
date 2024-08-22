// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERAWAREZEROFILTER_H
#define CSVOICETRIGGERAWAREZEROFILTER_H

@class CSAudioZeroFilter;
@protocol CSVoiceTriggerAwareZeroFilterDelegate;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerAwareZeroFilter : NSObject

@property (weak, nonatomic) NSObject<CSVoiceTriggerAwareZeroFilterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger numSamplesProcessed; // ivar: _numSamplesProcessed
@property (nonatomic) float sampleRate; // ivar: _sampleRate
@property (nonatomic) NSUInteger vtEndInSampleCount; // ivar: _vtEndInSampleCount
@property (retain, nonatomic) CSAudioZeroFilter *zeroFilter; // ivar: _zeroFilter


-(id)init;
-(id)metrics;
-(void)flush;
-(void)processBuffer:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)resetWithSampleRate:(float)arg0 containsVoiceTrigger:(BOOL)arg1 voiceTriggerInfo:(id)arg2 ;


@end


#endif