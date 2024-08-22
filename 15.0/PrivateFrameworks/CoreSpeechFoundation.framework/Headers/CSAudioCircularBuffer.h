// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOCIRCULARBUFFER_H
#define CSAUDIOCIRCULARBUFFER_H


#import <Foundation/Foundation.h>

#import "CSAudioTimeConverter.h"

@interface CSAudioCircularBuffer : NSObject {
    unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> _csAudioCircularBufferImpl;
}


@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (nonatomic) NSUInteger bufferLength; // ivar: _bufferLength


-(NSUInteger)sampleCount;
-(id)copyBufferWithNumSamplesCopiedIn:(*NSUInteger)arg0 ;
-(id)copySamplesFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)copySamplesFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 channelIdx:(NSUInteger)arg2 ;
-(id)copySamplesFromHostTime:(NSUInteger)arg0 ;
-(id)copybufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)initWithNumChannels:(NSUInteger)arg0 recordingDuration:(float)arg1 samplingRate:(float)arg2 ;
-(id)initWithNumChannels:(NSUInteger)arg0 recordingDuration:(float)arg1 samplingRate:(float)arg2 audioTimeConverter:(id)arg3 ;
-(void)addSamples:(*void)arg0 numSamples:(NSUInteger)arg1 ;
-(void)addSamples:(*void)arg0 numSamples:(NSUInteger)arg1 atHostTime:(NSUInteger)arg2 ;
-(void)reset;


@end


#endif