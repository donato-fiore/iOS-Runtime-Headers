// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTAUDIOOUTTRANSCRIBER_H
#define AXLTAUDIOOUTTRANSCRIBER_H

@class NSString, AVAudioFile, NSDate, AVAudioFormat, NSFileHandle;
@protocol AXLTTranscriberDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXLTTranscriber.h"

@interface AXLTAudioOutTranscriber : NSObject {
    ? _mBuffers;
    BOOL _dumpTestData;
}


@property (retain, nonatomic) NSString *appID; // ivar: _appID
@property (retain) NSString *appName; // ivar: _appName
@property (nonatomic) NSInteger audioBuffersAppendedCount; // ivar: _audioBuffersAppendedCount
@property (retain, nonatomic) AVAudioFile *audioFile; // ivar: _audioFile
@property (nonatomic) *OpaqueAudioQueue audioQueue; // ivar: _audioQueue
@property (retain, nonatomic) NSDate *bufferLogTime; // ivar: _bufferLogTime
@property (nonatomic) int bufferState; // ivar: _bufferState
@property (weak, nonatomic) NSObject<AXLTTranscriberDelegateProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // ivar: _saveQueue
@property (retain, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) NSInteger silentBuffersCount; // ivar: _silentBuffersCount
@property (nonatomic) NSInteger silentSamplesTailCount; // ivar: _silentSamplesTailCount
@property (retain, nonatomic) AVAudioFormat *tapFormat; // ivar: _tapFormat
@property (retain, nonatomic) NSFileHandle *textFile; // ivar: _textFile
@property (retain, nonatomic) NSString *textFileName; // ivar: _textFileName
@property (retain, nonatomic) NSDate *textLogTime; // ivar: _textLogTime
@property (retain) AXLTTranscriber *transcriber; // ivar: _transcriber


-(BOOL)_isSilenceOnlyInBuffer:(struct AudioQueueBuffer *)arg0 packetCount:(unsigned int)arg1 ;
-(BOOL)createAudioBuffersWithBufferByteSize:(unsigned int)arg0 error:(*id)arg1 ;
-(NSInteger)_findSilencePacketOffset:(struct AudioQueueBuffer *)arg0 packetCount:(unsigned int)arg1 silentSamplesMin:(NSInteger)arg2 zeroOffsetOnly:(BOOL)arg3 ;
-(id)initWithPID:(int)arg0 appID:(id)arg1 appName:(id)arg2 delegate:(id)arg3 ;
-(void)_appendBuffer:(struct AudioQueueBuffer *)arg0 offsetInPackets:(unsigned int)arg1 packetCount:(unsigned int)arg2 ;
-(void)_calcHistogramForBuffer:(struct AudioQueueBuffer *)arg0 packetCount:(unsigned int)arg1 isSilence:(BOOL)arg2 ;
-(void)_pauseSpeechRecognition;
-(void)_saveAudioBuffer:(id)arg0 ;
-(void)_saveTranscribedText:(id)arg0 withTimeStamp:(id)arg1 ;
-(void)cleanup;
-(void)handleAudioBuffer:(struct AudioQueueBuffer *)arg0 audioQueue:(struct OpaqueAudioQueue *)arg1 timestamp:(struct AudioTimeStamp *)arg2 packetCount:(unsigned int)arg3 packetDesc:(struct AudioStreamPacketDescription *)arg4 ;
-(void)setupTranscriberIfNeeded;


@end


#endif