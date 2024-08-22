// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIRTUALTTYDEVICE_H
#define VCVIRTUALTTYDEVICE_H

@class NSString;
@protocol VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate, OS_dispatch_queue, VCMediaStreamDelegate;

#import <Foundation/Foundation.h>

#import "VCAudioPayload.h"
#import "VCAudioIO.h"

@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate>

 {
    int _clientPid;
    tagVCAudioFrameFormat _vpioFormat;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    _opaque_pthread_mutex_t sessionLock;
    int _state;
    VCAudioPayload *_currentAudioPayload;
    VCAudioIO *_audioIO;
    *SoundDec_t _decoder;
    *opaqueCMSimpleQueue _charQueue;
    *tagVCMemoryPool _characterPool;
    id *_textStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property int deviceRole; // ivar: deviceRole
@property (readonly) NSUInteger hash;
@property BOOL isValid; // ivar: isValid
@property (readonly) Class superclass;


-(BOOL)canProcessAudio;
-(BOOL)setStreamConfig:(id)arg0 withError:(*id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 clientPid:(int)arg1 ;
-(id)setPause:(BOOL)arg0 ;
-(id)start;
-(id)stop;
-(void)dealloc;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didServerDie;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)lock;
-(void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)sendCharacter:(unsigned short)arg0 ;
-(void)sendText:(id)arg0 ;
-(void)setCanProcessAudio:(BOOL)arg0 ;
-(void)unlock;


@end


#endif