// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOCONVERTER_H
#define CSAUDIOCONVERTER_H

@class NSMutableData;
@protocol CSAudioConverterDelegate;

#import <Foundation/Foundation.h>


@interface CSAudioConverter : NSObject {
    *OpaqueAudioConverter _opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
    AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    NSUInteger _lastTimestamp;
    NSUInteger _lastArrivalTimestampToAudioRecorder;
    float _outPacketSizeInSec;
}


@property (weak) NSObject<CSAudioConverterDelegate> *delegate; // ivar: _delegate


+(id)narrowBandOpusConverter;
+(id)opusConverter;
+(id)speexConverter;
-(id)initWithInASBD:(struct AudioStreamBasicDescription )arg0 outASBD:(struct AudioStreamBasicDescription )arg1 ;
-(void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg0 ;
-(void)_convertBufferedLPCM:(id)arg0 allowPartial:(BOOL)arg1 timestamp:(NSUInteger)arg2 arrivalTimestampToAudioRecorder:(NSUInteger)arg3 ;
-(void)addSamples:(id)arg0 timestamp:(NSUInteger)arg1 arrivalTimestampToAudioRecorder:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)flush;
-(void)reset;


@end


#endif