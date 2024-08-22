// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOFILEREADER_H
#define CSAUDIOFILEREADER_H

@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;

#import <Foundation/Foundation.h>


@interface CSAudioFileReader : NSObject {
    *OpaqueExtAudioFile _fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    CGFloat _bufferDuration;
    AudioStreamBasicDescription _outASBD;
}


@property (weak, nonatomic) NSObject<CSAudioFileReaderDelegate> *delegate; // ivar: _delegate


-(BOOL)prepareRecording:(id)arg0 ;
-(BOOL)setRecordBufferDuration:(CGFloat)arg0 ;
-(BOOL)startRecording;
-(id)initWithURL:(id)arg0 ;
-(id)readSamplesFromChannelIdx:(unsigned int)arg0 ;
-(void)_readAudioBufferAndFeed;
-(void)close;
-(void)dealloc;
-(void)stopRecording;


@end


#endif