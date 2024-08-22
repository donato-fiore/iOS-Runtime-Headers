// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOICECONTROLLER_H
#define CKVOICECONTROLLER_H

@class NSString, NSDictionary, AVVoiceController;
@protocol AVVoiceControllerRecordDelegate, CKVoiceControllerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKAudioAnalyzer.h"

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate>



@property (nonatomic, setter=_setActivationMode:) NSInteger _activationMode; // ivar: __activationMode
@property (retain, nonatomic) CKAudioAnalyzer *audioAnalyzer; // ivar: _audioAnalyzer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKVoiceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerUpdateTimer; // ivar: _powerUpdateTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSDictionary *recordSettings; // ivar: _recordSettings
@property (readonly) Class superclass;
@property (retain, nonatomic) AVVoiceController *voiceController; // ivar: _voiceController


-(id)initWithActivationMode:(NSInteger)arg0 recordSettings:(id)arg1 queue:(id)arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)messageSent:(id)arg0 ;
-(void)playAlertSoundForType:(int)arg0 ;
-(void)record;
-(void)releaseAudioSession;
-(void)setActivationMode:(NSInteger)arg0 ;
-(void)startUpdatingPower;
-(void)stop;
-(void)stopUpdatingPower;
-(void)voiceControllerDidDetectStartpoint:(id)arg0 ;
-(void)voiceControllerDidStartRecording:(id)arg0 successfully:(BOOL)arg1 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;


@end


#endif