// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTEVADCIRCULARBUFFER_H
#define CSREMOTEVADCIRCULARBUFFER_H


#import <Foundation/Foundation.h>


@interface CSRemoteVADCircularBuffer : NSObject {
    unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> _remoteVADCircularBufferImpl;
    int _audioSamplesPerRemoteVAD;
}


@property (readonly, nonatomic) NSUInteger beginSampleCount; // ivar: _beginSampleCount
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(NSUInteger)remoteVADSampleCount;
-(id)copySamplesFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)copySamplesFromAudioSampleCount:(NSUInteger)arg0 toAudioSampleCount:(NSUInteger)arg1 ;
-(id)initWithRecordingDuration:(float)arg0 audioSamplesPerRemoteVAD:(int)arg1 audioSampleRate:(float)arg2 ;
-(void)addSamples:(*void)arg0 numSamples:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif