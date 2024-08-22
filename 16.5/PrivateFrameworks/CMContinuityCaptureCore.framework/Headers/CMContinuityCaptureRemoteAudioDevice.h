// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTUREREMOTEAUDIODEVICE_H
#define CMCONTINUITYCAPTUREREMOTEAUDIODEVICE_H

@class AVCAudioStream, AVCStreamInput, AVCaptureAudioDataOutput, AVCaptureDeviceInput, NSData, AVCMediaStreamNegotiator, NSString, AVCaptureDevice;
@protocol CMContinuityCaptureRemoteDevice, AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureRemoteClient.h"
#import "CMContinuityCaptureDeviceCapabilities.h"
#import "CMContinuityCaptureRemoteCompositeDevice.h"

@interface CMContinuityCaptureRemoteAudioDevice : NSObject <CMContinuityCaptureRemoteDevice, AVCaptureAudioDataOutputSampleBufferDelegate>

 {
    NSObject<OS_dispatch_group> *_pendingAVCActivationGroup;
    NSObject<OS_dispatch_group> *_pendingAVCTeardownGroup;
    NSObject<OS_dispatch_group> *_pendingAVCNegotiationGroup;
    CMContinuityCaptureRemoteClient *_client;
    CMContinuityCaptureDeviceCapabilities *_capabilities;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _entity;
    CMContinuityCaptureRemoteCompositeDevice *_compositeDevice;
    BOOL _streaming;
    AVCAudioStream *_avcAudioStream;
    AVCStreamInput *_avcStreamInput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    AVCaptureDeviceInput *_audioDeviceInput;
    NSInteger _audioBufferOutputCounter;
    NSInteger _audioBufferDropCounter;
    CGFloat _audioSampleRate;
    unsigned int _audioBytesPerSample;
    unsigned int _requiredAudioSampleCountPerBuffer;
    NSData *_remainingAudioDataFromPreviousSbuf;
    BOOL _audioClockIsSynchronized;
    NSUInteger _networkAudioSampleTime;
    NSUInteger _lastAudioSynchronizationNetworkSampleTime;
    AVCMediaStreamNegotiator *_avcStreamNegotiator;
    NSData *_currentAnswer;
    NSString *_lastStreamStartTime;
    NSString *_lastStreamStopTime;
    id *_bufferFailureCheckBlock;
    NSUInteger _numberOfAVCFramesDropped;
    BOOL _avCaptureSessionStarted;
    BOOL _avcActive;
    BOOL _disableBufferBlockSizeCheck;
}


@property (readonly, retain) AVCaptureDevice *audioDevice; // ivar: _audioDevice
@property (readonly, retain) CMContinuityCaptureDeviceCapabilities *capabilities;
@property (readonly, retain) CMContinuityCaptureRemoteClient *client;
@property (readonly, weak) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger entity;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


-(BOOL)_shouldPrintDroppedSampleBufferLog:(NSInteger)arg0 ;
-(BOOL)_shouldPrintSampleBufferLog:(NSInteger)arg0 ;
-(id)createAVCAudioStreamForSidecarStream:(id)arg0 ;
-(id)initWithCompositeDevice:(id)arg0 entity:(NSInteger)arg1 capabilities:(id)arg2 client:(id)arg3 ;
-(id)newAudioStreamConfigWithIsWired:(BOOL)arg0 key:(id)arg1 streamInputID:(NSInteger)arg2 networkClock:(id)arg3 ;
-(struct opaqueCMSampleBuffer *)_createSampleBufferForAudioData:(id)arg0 dataRange:(struct _NSRange )arg1 pts:(struct ? )arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 ;
-(void)_abort:(id)arg0 ;
-(void)_dispatchAudioFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)_processIncomingAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_resetNetworkSampleTime;
-(void)_startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_terminateAVCSession:(id)arg0 ;
-(void)abort:(id)arg0 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)clearAVCArtifacts;
-(void)debugInfo:(id)arg0 ;
-(void)didStartStreamInput:(id)arg0 ;
-(void)didStopStreamInput:(id)arg0 ;
-(void)dispatchFrame:(struct opaqueCMSampleBuffer *)arg0 entity:(NSInteger)arg1 completion:(id)arg2 ;
-(void)handleAVCNegotiation:(NSInteger)arg0 data:(id)arg1 ;
-(void)handleSynchronizeAudioClockCompletion;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postAVCStreamInterruption;
-(void)postDataEvent:(id)arg0 entity:(NSInteger)arg1 data:(id)arg2 ;
-(void)postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)startAVCInputForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)stopAVCInput:(id)arg0 option:(unk)arg1  ;
-(void)stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;
-(void)terminateAVCSession:(id)arg0 ;


@end


#endif