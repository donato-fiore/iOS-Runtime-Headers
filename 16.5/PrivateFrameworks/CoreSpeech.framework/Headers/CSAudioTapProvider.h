// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOTAPPROVIDER_H
#define CSAUDIOTAPPROVIDER_H

@class NSString, CSAudioCircularBuffer;
@protocol CSAudioServerCrashMonitorDelegate, CSAudioStreamProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"

@interface CSAudioTapProvider : NSObject <CSAudioServerCrashMonitorDelegate, CSAudioStreamProviding>

 {
    *AudioQueueBuffer _audioBuffers;
}


@property (retain, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (copy, nonatomic) id *aqStartCompletion; // ivar: _aqStartCompletion
@property (copy, nonatomic) id *aqStopCompletion; // ivar: _aqStopCompletion
@property (weak, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // ivar: _circularBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // ivar: _loggingQueue
@property (nonatomic) NSUInteger processedSampleCount; // ivar: _processedSampleCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) *OpaqueAudioQueue recordingAudioQueue; // ivar: _recordingAudioQueue
@property (readonly) Class superclass;


-(BOOL)_setupRecordingAudioQueueIfNeeded;
-(BOOL)isNarrowBand;
-(BOOL)isRecording;
-(BOOL)prepareAudioStreamSync:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)setCurrentContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsDuckingOnCurrentRouteWithError:(*id)arg0 ;
-(id)UUID;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 channelIdx:(NSUInteger)arg2 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 channelIdx:(NSUInteger)arg1 ;
-(id)audioDeviceInfo;
-(id)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 error:(*id)arg2 ;
-(id)holdAudioStreamWithDescription:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)init;
-(id)playbackRoute;
-(id)recordDeviceInfo;
-(id)recordRoute;
-(id)recordSettings;
-(unsigned int)_calculateBufferSize:(struct OpaqueAudioQueue *)arg0 audioStreamBasicDescription:(struct AudioStreamBasicDescription )arg1 frameSizeInSec:(float)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_destroyRecordingAudioQueue;
-(void)_reset;
-(void)_saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;
-(void)_stopRecordingAudioQueueIfNeededWithCompletion:(id)arg0 ;
-(void)attachTandemStream:(id)arg0 toPrimaryStream:(id)arg1 completion:(id)arg2 ;
-(void)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 completion:(id)arg2 ;
-(void)cancelAudioStreamHold:(id)arg0 ;
-(void)dealloc;
-(void)prepareAudioStream:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;
-(void)saveRecordingBufferToEndFrom:(NSUInteger)arg0 toURL:(id)arg1 ;
-(void)setAnnounceCallsEnabled:(BOOL)arg0 withStreamHandleID:(NSUInteger)arg1 ;
-(void)setup;
-(void)startAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)stopAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;


@end


#endif