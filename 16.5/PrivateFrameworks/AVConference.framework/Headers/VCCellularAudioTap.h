// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCELLULARAUDIOTAP_H
#define VCCELLULARAUDIOTAP_H

@class NSMutableDictionary, NSString;
@protocol VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate, OS_dispatch_queue, VCServerDelegate;

#import <Foundation/Foundation.h>


@interface VCCellularAudioTap : NSObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate>

 {
    NSMutableDictionary *_audioTapIOMap;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _processId;
    NSInteger _audioSessionId;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCServerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(unsigned int)audioIOTypeFromTapType:(unsigned int)arg0 ;
-(BOOL)addAudioTapForStreamToken:(NSInteger)arg0 tapType:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeAudioTapForStreamToken:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithProcessId:(int)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(int)registerAudioTapForStreamToken:(NSInteger)arg0 tapType:(unsigned int)arg1 ;
-(struct _VCAudioIOInitConfiguration )audioIOConfigWithAudioType:(unsigned int)arg0 realtimeContext:(*void)arg1 ;
-(void)audioPowerSpectrumSinkDidRegister;
-(void)audioPowerSpectrumSinkDidUnregister;
-(void)controllerFormatChanged:(struct tagVCAudioFrameFormat *)arg0 ;
-(void)dealloc;
-(void)didResume;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didServerDie;
-(void)didStart:(BOOL)arg0 error:(id)arg1 ;
-(void)didStop:(BOOL)arg0 error:(id)arg1 ;
-(void)didSuspend;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)unregisterAudioTapForStreamToken:(NSInteger)arg0 ;


@end


#endif