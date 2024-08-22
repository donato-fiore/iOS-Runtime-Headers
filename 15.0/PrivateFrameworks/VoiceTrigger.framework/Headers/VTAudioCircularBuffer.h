// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTAUDIOCIRCULARBUFFER_H
#define VTAUDIOCIRCULARBUFFER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTAudioCircularBuffer : NSObject {
    unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> _vtAudioCircularBufferImpl;
}


@property (nonatomic) NSUInteger bufferLength; // ivar: _bufferLength
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSUInteger)sampleCount;
-(id)copyBufferWithNumSamplesCopiedIn:(*NSUInteger)arg0 ;
-(id)copySamplesFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 withNumSamplesCopiedIn:(*NSUInteger)arg2 ;
-(id)initWithNumChannels:(NSUInteger)arg0 recordingDuration:(NSUInteger)arg1 samplingRate:(NSUInteger)arg2 ;
-(void)addSamples:(*void)arg0 numSamples:(NSUInteger)arg1 ;
-(void)reset;
-(void)saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;


@end


#endif