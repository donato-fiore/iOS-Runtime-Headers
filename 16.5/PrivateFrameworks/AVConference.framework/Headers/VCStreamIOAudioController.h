// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTREAMIOAUDIOCONTROLLER_H
#define VCSTREAMIOAUDIOCONTROLLER_H

@class NSString, NSDictionary;
@protocol VCAudioIOControllerControl, VCStreamOutputSource, OS_dispatch_queue, VCStreamSychronizationDelegate;


#import "VCObject.h"
#import "VCAudioRelay.h"
#import "VCAudioRelayIO.h"
#import "VCStreamInputAudio.h"
#import "VCStreamOutput.h"
#import "VCAudioIOControllerClient.h"

@interface VCStreamIOAudioController : VCObject <VCAudioIOControllerControl, VCStreamOutputSource>

 {
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isRunning;
    BOOL _sourceStarted;
    BOOL _sinkStarted;
    VCAudioRelay *_outputThread;
    VCAudioRelayIO *_outputThreadClient;
    NSInteger _streamToken;
    unsigned char _clientDirection;
    NSUInteger _networkClockID;
    VCStreamInputAudio *_streamInput;
    *PacketThread_s _packetThread;
    *opaqueVCAudioBufferList _inputSamples;
    *__CFAllocator _audioSampleBufferAllocator;
    VCStreamOutput *_streamOutput;
    os_unfair_lock_s _streamOutputLock;
    ? _sourceIO;
    *__CFAllocator _backingBufferAllocator;
    BOOL _timestampInitialized;
    unsigned int _nextExpectedSampleTime;
    ? _lastHostTime;
    NSInteger _lastSampleCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (retain) VCAudioIOControllerClient *runningClient; // ivar: _runningClient
@property (retain) VCStreamOutput *streamOutput;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCStreamSychronizationDelegate> *synchronizationDelegate;


-(BOOL)_packetThreadStartWithClientFormat:(struct tagVCAudioFrameFormat *)arg0 ;
-(BOOL)canSetDirection:(unsigned char)arg0 ;
-(BOOL)dispatchedStartClient:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupAndStartOutputClientThread;
-(BOOL)startInputForClient:(id)arg0 error:(*id)arg1 ;
-(BOOL)startOutputForClient:(id)arg0 error:(*id)arg1 ;
-(id)initWithStreamInputID:(NSInteger)arg0 streamToken:(NSInteger)arg1 networkClockID:(NSUInteger)arg2 ;
-(void)_packetThreadStop;
-(void)cleanupOutputThread;
-(void)cleanupStreamOutput;
-(void)dealloc;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)dispatchedStopClient;
-(void)invalidate;
-(void)startClient:(id)arg0 ;
-(void)stopClient:(id)arg0 ;
-(void)updateClient:(id)arg0 direction:(unsigned char)arg1 ;


@end


#endif